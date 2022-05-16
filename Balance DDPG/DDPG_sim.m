doTraining = false;

run("qube2_rotpen_param.m");
ic_alpha0 = pi; % set to pi to start pendulum in inverted position, 0 for down position
Vmax = 5;
theta_max = 60*pi/180;
% inverted pendulum angle balance threshold (rad)
alpha_bal_threshold = 10*pi/180;
% reward QR weights
q11 = 10; q22 = 20; q33 = 0; q44 = 1; r = 0.1; B = -100; % agent 9

%% Environment
% observation signals "rlNumericSpec" creates action/observative data of a given dimension and signal limits
obsInfo = rlNumericSpec([4 1],'LowerLimit',[-inf -inf -inf -inf]','UpperLimit',[inf inf inf inf]');
obsInfo.Name = 'observations';
obsInfo.Description = 'theta, alpha, theta_dot, alpha_dot';
numObs = obsInfo.Dimension(1);

actInfo = rlNumericSpec([1 1],'LowerLimit',-Vmax,'UpperLimit',Vmax);
actInfo.Name = 'Motor Voltage';
% numActions = actInfo.Dimension(1);

mdl = 's_qube2_bal_rl';
agentBlk = [mdl '/RL Agent'];
env = rlSimulinkEnv(mdl,agentBlk,obsInfo,actInfo);
% reset function used to randomize initial position of pendulum
env.ResetFcn = @(in)localResetFcn(in);

Ts = 0.01;
% Simulation duration
Tf = 2;
% Fix the random generator seed for reproducibility.
rng(0);

%%
statePath = [
    imageInputLayer([numObs 1 1],'Normalization','none','Name','observation')
    fullyConnectedLayer(128,'Name','CriticStateFC1')
    reluLayer('Name', 'CriticRelu1')
    fullyConnectedLayer(200,'Name','CriticStateFC2')];
actionPath = [
    imageInputLayer([1 1 1],'Normalization','none','Name','action')
    fullyConnectedLayer(200,'Name','CriticActionFC1','BiasLearnRateFactor',0)];
commonPath = [
    additionLayer(2,'Name','add')
    reluLayer('Name','CriticCommonRelu')
    fullyConnectedLayer(1,'Name','CriticOutput')];

criticNetwork = layerGraph();
criticNetwork = addLayers(criticNetwork,statePath);
criticNetwork = addLayers(criticNetwork,actionPath);
criticNetwork = addLayers(criticNetwork,commonPath);

criticNetwork = connectLayers(criticNetwork,'CriticStateFC2','add/in1');
criticNetwork = connectLayers(criticNetwork,'CriticActionFC1','add/in2');

plot(criticNetwork)

criticOpts = rlRepresentationOptions('LearnRate',1e-3,'GradientThreshold',1);

% Create critic representation using the specified deep neural network 
obsInfo = getObservationInfo(env);
actInfo = getActionInfo(env);
critic = rlQValueRepresentation(criticNetwork,obsInfo,actInfo,'Observation',{'observation'},'Action',{'action'},criticOpts);

% Create the actor, first create a deep neural network with one input, 
% the observation, and one output, the action.
% Construct actor similarly to the critic. 
actorNetwork = [
    imageInputLayer([numObs 1 1],'Normalization','none','Name','observation')
    fullyConnectedLayer(128,'Name','ActorFC1')
    reluLayer('Name','ActorRelu1')
    fullyConnectedLayer(200,'Name','ActorFC2')
    reluLayer('Name','ActorRelu2')
    fullyConnectedLayer(1,'Name','ActorFC3')
    tanhLayer('Name','ActorTanh')
    scalingLayer('Name','ActorScaling','Scale',max(actInfo.UpperLimit))];

actorOpts = rlRepresentationOptions('LearnRate',5e-04,'GradientThreshold',1);

actor = rlDeterministicActorRepresentation(actorNetwork,obsInfo,actInfo,'Observation',{'observation'},'Action',{'ActorScaling'},actorOpts);

agentOpts = rlDDPGAgentOptions(...
    'SampleTime',Ts,...
    'TargetSmoothFactor',1e-3,...
    'ExperienceBufferLength',1e6,...
    'DiscountFactor',0.99,...
    'MiniBatchSize',128);
% For continuous action signals, it is important to set the noise variance 
% appropriately to encourage exploration. It is common to have 
% Variance*sqrt(Ts) be between 1% and 10% of your action range
agentOpts.NoiseOptions.Variance = 0.4; 
agentOpts.NoiseOptions.VarianceDecayRate = 1e-5;

% create the DDPG agent using the specified actor representation, critic 
% representation and agent options.
agent = rlDDPGAgent(actor,critic,agentOpts);

%% Training
trainOpts = rlTrainingOptions(...
    'MaxEpisodes',10000, ...
    'MaxStepsPerEpisode',ceil(Tf/Ts), ...
    'ScoreAveragingWindowLength',5, ...
    'Verbose',false, ...
    'Plots','training-progress',...
    'StopTrainingCriteria','AverageReward',...
    'SaveAgentCriteria','EpisodeReward',...
    'SaveAgentValue',-5,...    
    'StopTrainingValue',0);

if doTraining
    trainingStats = train(agent,env,trainOpts);
    save('QubeIPBalDDPG10.mat','agent');
else
    load('QubeIPBalDDPG09.mat','agent');
    % load('QubeIPBalDDPGNominalParam.mat','agent');
end

% open Simulink model to simulate QUBE-Servo 2 RL balance control
open("s_qube2_bal_rl.slx");

function in = localResetFcn(in)
    % randomize initial inverted position angle
    blk = sprintf('s_qube2_bal_rl/IC0');
    % initialize angle of pendulum +/- 10 deg about vertical upright position
    ic0 = ( 20 * ( rand()-0.5) + 180 ) * pi/180;
    in = setBlockParameter(in,blk,'Value',num2str(ic0));
end
