close all; 
clear all;
clc

% Load model parameters
qube2_rotpen_param;

% Initial Conditions
alpha_0 = 0.0*pi;

%% Define environment
numObs = 6;
obsInfo = rlFiniteSetSpec({[1 1 1 1],[1 1 1 2],[1 1 1 3],[1 1 1 4],[1 1 2 1],[1 1 2 2],[1 1 2 3],[1 1 2 4],[1 1 3 1],[1 1 3 2],[1 1 3 3],[1 1 3 4],[1 1 4 1],[1 1 4 2],[1 1 4 3],[1 1 4 4],[1 2 1 1],[1 2 1 2],[1 2 1 3],[1 2 1 4],[1 2 2 1],[1 2 2 2],[1 2 2 3],[1 2 2 4],[1 2 3 1],[1 2 3 2],[1 2 3 3],[1 2 3 4],[1 2 4 1],[1 2 4 2],[1 2 4 3],[1 2 4 4],[1 3 1 1],[1 3 1 2],[1 3 1 3],[1 3 1 4],[1 3 2 1],[1 3 2 2],[1 3 2 3],[1 3 2 4],[1 3 3 1],[1 3 3 2],[1 3 3 3],[1 3 3 4],[1 3 4 1],[1 3 4 2],[1 3 4 3],[1 3 4 4],[1 4 1 1],[1 4 1 2],[1 4 1 3],[1 4 1 4],[1 4 2 1],[1 4 2 2],[1 4 2 3],[1 4 2 4],[1 4 3 1],[1 4 3 2],[1 4 3 3],[1 4 3 4],[1 4 4 1],[1 4 4 2],[1 4 4 3],[1 4 4 4],[2 1 1 1],[2 1 1 2],[2 1 1 3],[2 1 1 4],[2 1 2 1],[2 1 2 2],[2 1 2 3],[2 1 2 4],[2 1 3 1],[2 1 3 2],[2 1 3 3],[2 1 3 4],[2 1 4 1],[2 1 4 2],[2 1 4 3],[2 1 4 4],[2 2 1 1],[2 2 1 2],[2 2 1 3],[2 2 1 4],[2 2 2 1],[2 2 2 2],[2 2 2 3],[2 2 2 4],[2 2 3 1],[2 2 3 2],[2 2 3 3],[2 2 3 4],[2 2 4 1],[2 2 4 2],[2 2 4 3],[2 2 4 4],[2 3 1 1],[2 3 1 2],[2 3 1 3],[2 3 1 4],[2 3 2 1],[2 3 2 2],[2 3 2 3],[2 3 2 4],[2 3 3 1],[2 3 3 2],[2 3 3 3],[2 3 3 4],[2 3 4 1],[2 3 4 2],[2 3 4 3],[2 3 4 4],[2 4 1 1],[2 4 1 2],[2 4 1 3],[2 4 1 4],[2 4 2 1],[2 4 2 2],[2 4 2 3],[2 4 2 4],[2 4 3 1],[2 4 3 2],[2 4 3 3],[2 4 3 4],[2 4 4 1],[2 4 4 2],[2 4 4 3],[2 4 4 4],[3 1 1 1],[3 1 1 2],[3 1 1 3],[3 1 1 4],[3 1 2 1],[3 1 2 2],[3 1 2 3],[3 1 2 4],[3 1 3 1],[3 1 3 2],[3 1 3 3],[3 1 3 4],[3 1 4 1],[3 1 4 2],[3 1 4 3],[3 1 4 4],[3 2 1 1],[3 2 1 2],[3 2 1 3],[3 2 1 4],[3 2 2 1],[3 2 2 2],[3 2 2 3],[3 2 2 4],[3 2 3 1],[3 2 3 2],[3 2 3 3],[3 2 3 4],[3 2 4 1],[3 2 4 2],[3 2 4 3],[3 2 4 4],[3 3 1 1],[3 3 1 2],[3 3 1 3],[3 3 1 4],[3 3 2 1],[3 3 2 2],[3 3 2 3],[3 3 2 4],[3 3 3 1],[3 3 3 2],[3 3 3 3],[3 3 3 4],[3 3 4 1],[3 3 4 2],[3 3 4 3],[3 3 4 4],[3 4 1 1],[3 4 1 2],[3 4 1 3],[3 4 1 4],[3 4 2 1],[3 4 2 2],[3 4 2 3],[3 4 2 4],[3 4 3 1],[3 4 3 2],[3 4 3 3],[3 4 3 4],[3 4 4 1],[3 4 4 2],[3 4 4 3],[3 4 4 4],[4 1 1 1],[4 1 1 2],[4 1 1 3],[4 1 1 4],[4 1 2 1],[4 1 2 2],[4 1 2 3],[4 1 2 4],[4 1 3 1],[4 1 3 2],[4 1 3 3],[4 1 3 4],[4 1 4 1],[4 1 4 2],[4 1 4 3],[4 1 4 4],[4 2 1 1],[4 2 1 2],[4 2 1 3],[4 2 1 4],[4 2 2 1],[4 2 2 2],[4 2 2 3],[4 2 2 4],[4 2 3 1],[4 2 3 2],[4 2 3 3],[4 2 3 4],[4 2 4 1],[4 2 4 2],[4 2 4 3],[4 2 4 4],[4 3 1 1],[4 3 1 2],[4 3 1 3],[4 3 1 4],[4 3 2 1],[4 3 2 2],[4 3 2 3],[4 3 2 4],[4 3 3 1],[4 3 3 2],[4 3 3 3],[4 3 3 4],[4 3 4 1],[4 3 4 2],[4 3 4 3],[4 3 4 4],[4 4 1 1],[4 4 1 2],[4 4 1 3],[4 4 1 4],[4 4 2 1],[4 4 2 2],[4 4 2 3],[4 4 2 4],[4 4 3 1],[4 4 3 2],[4 4 3 3],[4 4 3 4],[4 4 4 1],[4 4 4 2],[4 4 4 3],[4 4 4 4]});
obsInfo.Name = 'observations';

numAct = 1;
actInfo = rlFiniteSetSpec([-tau_max 0 tau_max]);
actInfo.Name = 'tau';

agentBlock = ['swing_up_sim' '/RL Agent'];

env = rlSimulinkEnv("swing_up_sim", agentBlock, obsInfo, actInfo);

%% Define agent
Tc = 0.005;            % Time step for feedback controller
Tf = 10;               % Simulation stop time
Ts = Tc * 4;           % Time step for Reinforcement Learning agent

rng('default');

qTable = rlTable(obsInfo,actInfo);

%% Critic 
critic = rlQValueRepresentation(qTable,obsInfo,actInfo);
critic.Options.LearnRate = 0.01;

%% Agent
agentOpts = rlQAgentOptions(...
    'SampleTime',Ts,...
    'DiscountFactor',0.99);

agentOpts.EpsilonGreedyExploration.Epsilon = 0.9;
agentOpts.EpsilonGreedyExploration.EpsilonMin = 1e-3;
agentOpts.EpsilonGreedyExploration.EpsilonDecay = 1e-3;
agent = rlQAgent(critic,agentOpts);

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
doTraining = true;    % Set "true" for learning.

if doTraining
    % Train the agent.
    trainingStats = train(agent,env,trainOpts);
    save("agent.mat", "agent")
else
    % Load the pretrained agent.
    load('agent.mat','savedAgentResultStruct');
    load('agent.mat','saved_agent');
    agent = saved_agent;
end

%% Simulate and plot
simOptions = rlSimulationOptions('MaxSteps', floor(Tf/Ts));
results = sim(env,agent,simOptions);
plotter;
