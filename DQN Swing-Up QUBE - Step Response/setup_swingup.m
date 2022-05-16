close all; 
clear all;
clc

% Load model parameters
qube2_rotpen_param;
% Moment of inertia of pendulum about center of mass (kg-m^2)
Jp_cm = mp*Lp^2/12; % used to calculate pendulum energy in swing-up control
% Find Total Inertia
Jt = Jr*Jp - mp^2*r^2*l^2;

unstable_init;

set_param(gcs, 'SimulationMode', 'external')
%% Define environment
numObs = 6;
obsInfo = rlNumericSpec([numObs 1],'LowerLimit',-inf*ones(6,1),'UpperLimit',inf*ones(6,1));
obsInfo.Name = 'observations';
obsInfo.Description = 'sin theta, cos theta, thetad, sin alpha, cos alpha, alphad';

numAct = 1;
actInfo = rlFiniteSetSpec((-1:1)*tau_max);
actInfo.Name = 'tau';

%% Define agent
Tc = 0.002;            % Time step for feedback controller
Tf = 10;               % Simulation stop time
Ts = Tc * 4;           % Time step for Reinforcement Learning agent

rng('default');

nI = obsInfo.Dimension(1);          % number of inputs
nL = 24;                            % number of neurons
nO = 3;                             % number of outputs

dnn = [
    featureInputLayer(nI,'Normalization','none','Name','state')
    fullyConnectedLayer(nL,'Name','fc1')
    reluLayer('Name','relu1')
    fullyConnectedLayer(nL,'Name','fc2')
    reluLayer('Name','relu2')
    fullyConnectedLayer(nO,'Name','fc3')];

% figure
% plot(layerGraph(dnn))

%% Critic 
criticOpts = rlRepresentationOptions('LearnRate',1e-1,'GradientThreshold',1,'L2RegularizationFactor',1e-3);

critic = rlQValueRepresentation(dnn,obsInfo,actInfo,'Observation',{'state'},criticOpts);

%% Agent
agentOptions = rlDQNAgentOptions(...
    'SampleTime',Ts,...
    'UseDoubleDQN',false,...
    'TargetSmoothFactor',1e-3,...
    'DiscountFactor',0.99,...
    'ExperienceBufferLength',1e6,...
    'MiniBatchSize',128);

agent = rlDQNAgent(critic,agentOptions);

%% Learning
trainOpts = rlTrainingOptions(...
    'MaxEpisodes',10000,...
    'MaxStepsPerEpisode',floor(Tf/Ts),...
    'ScoreAveragingWindowLength',50,...
    'Verbose',false,...
    'Plots','training-progress',...
    'StopTrainingCriteria','AverageReward',...
    'StopTrainingValue',1000000,...
    'SaveAgentCriteria','EpisodeReward',...
    'SaveAgentValue',225000);

%% Define parallelisation
doParallel = false;    % Set "true" for parallel learning.

trainOpts.UseParallel = doParallel;
trainOpts.ParallelizationOptions.Mode = 'async';
trainOpts.ParallelizationOptions.StepsUntilDataIsSent = 32;
trainOpts.ParallelizationOptions.DataToSendFromWorkers = 'Experiences';

if (trainOpts.UseParallel && isempty(gcp('nocreate')))
    parpool;
end

%% Learning
doTraining = false;    % Set "true" for learning.

if doTraining
    % Train the agent.
    trainingStats = train(agent,env,trainOpts);
    save("agent.mat", "agent")
else
    % Load the pretrained agent.
    load('Agent5404.mat','savedAgentResultStruct');
    load('Agent5404.mat','saved_agent');
    
    agent = saved_agent;
    critic = getCritic(saved_agent);
    
    criticParams = getLearnableParameters(critic);
    layer1 = double(criticParams{1,1});
    layer2 = double(criticParams{1,2});
    layer3 = double(criticParams{1,3});
    layer4 = double(criticParams{1,4});
    layer5 = double(criticParams{1,5});
    layer6 = double(criticParams{1,6});
end

%% Simulate and plot
set_param('q_qube2_swingup', 'SimulationCommand', 'start')
pause(Tf+45)
plotter;
