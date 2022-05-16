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

numAct = 1;
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

%% Critic
statePath1 = [
    featureInputLayer(numObs,'Normalization','none','Name','observation')
    fullyConnectedLayer(400,'Name','CriticStateFC1')
    reluLayer('Name','CriticStateRelu1')
    fullyConnectedLayer(300,'Name','CriticStateFC2')
    ];
actionPath1 = [
    featureInputLayer(numAct,'Normalization','none','Name','action')
    fullyConnectedLayer(300,'Name','CriticActionFC1')
    ];
commonPath1 = [
    additionLayer(2,'Name','add')
    reluLayer('Name','CriticCommonRelu1')
    fullyConnectedLayer(1,'Name','CriticOutput')
    ];

criticNet = layerGraph(statePath1);
criticNet = addLayers(criticNet,actionPath1);
criticNet = addLayers(criticNet,commonPath1);
criticNet = connectLayers(criticNet,'CriticStateFC2','add/in1');
criticNet = connectLayers(criticNet,'CriticActionFC1','add/in2');

criticOptions = rlRepresentationOptions('Optimizer','adam','LearnRate',1e-3,...
    'GradientThreshold',1,'L2RegularizationFactor',2e-4);
critic1 = rlQValueRepresentation(criticNet,obsInfo,actInfo,...
    'Observation',{'observation'},'Action',{'action'},criticOptions);
critic2 = rlQValueRepresentation(criticNet,obsInfo,actInfo,...
    'Observation',{'observation'},'Action',{'action'},criticOptions);

%% Actor
statePath = [
    featureInputLayer(numObs,'Normalization','none','Name','observation')
    fullyConnectedLayer(400, 'Name','commonFC1')
    reluLayer('Name','CommonRelu')];
meanPath = [
    fullyConnectedLayer(300,'Name','MeanFC1')
    reluLayer('Name','MeanRelu')
    fullyConnectedLayer(numAct,'Name','Mean')
    ];
stdPath = [
    fullyConnectedLayer(300,'Name','StdFC1')
    reluLayer('Name','StdRelu')
    fullyConnectedLayer(numAct,'Name','StdFC2')
    softplusLayer('Name','StandardDeviation')];

concatPath = concatenationLayer(1,2,'Name','GaussianParameters');

actorNetwork = layerGraph(statePath);
actorNetwork = addLayers(actorNetwork,meanPath);
actorNetwork = addLayers(actorNetwork,stdPath);
actorNetwork = addLayers(actorNetwork,concatPath);
actorNetwork = connectLayers(actorNetwork,'CommonRelu','MeanFC1/in');
actorNetwork = connectLayers(actorNetwork,'CommonRelu','StdFC1/in');
actorNetwork = connectLayers(actorNetwork,'Mean','GaussianParameters/in1');
actorNetwork = connectLayers(actorNetwork,'StandardDeviation','GaussianParameters/in2');

actorOpts = rlRepresentationOptions('LearnRate',1e-4,'GradientThreshold',1);

actor = rlStochasticActorRepresentation(actorNetwork,obsInfo,actInfo,...
    'Observation',{'observation'},actorOpts);

%% Agent
agentOpts = rlSACAgentOptions(...
    'SampleTime',Ts,...
    'TargetSmoothFactor',1e-3,...
    'ExperienceBufferLength',1e6,...
    'DiscountFactor',0.99,...
    'MiniBatchSize',128, ...
    "UseDeterministicExploitation", true);

agent = rlSACAgent(actor,[critic1, critic2],agentOpts);

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
    save('QubeIPBalSAC10.mat','agent');
else
    load('QubeIPBalSAC09.mat','agent');
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
