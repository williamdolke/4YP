close all;
clear all;
clc

% Load model parameters
qube2_rotpen_param;

% Initial Conditions
alpha_0 = 0.0*pi;

%% Define environment
actInfo = (-1:1)*tau_max;
numAct = length(actInfo);

numObs = 6;

%% Define agent
Tc = 0.005;            % Time step for feedback controller
Tf = 10;               % Simulation stop time
Ts = Tc * 4;           % Time step for Reinforcement Learning agent

rng('default');

%% Critic
buckets = 8; % Change in other script too

Q_init = zeros(buckets,buckets,buckets,buckets,numAct);

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
maxEpisode = 100000;

if doTraining
    % Train the agent.
    episode = 0;
    figure;
    xlabel("Episode Number")
    ylabel("Episode Reward")
    hold on
    
    results = sim('swing_up_sim','StartTime','0','StopTime','10');
    Q_init = results.Q;
    
    previousReward = results.reward;
    
    for episode=1:maxEpisode
        results = sim('swing_up_sim','StartTime','0','StopTime','10');
        Q_init = results.Q;
        plot([episode-1 episode], [previousReward results.reward], 'b-o')
        previousReward = results.reward;
    end
    save('Q_init.mat', 'Q_init')
else
    % Load the pretrained agent.
    load('Q_init.mat', 'Q_init');
    episode = 1;
end

%% Simulate and plot
results = sim('swing_up_sim','StartTime','0','StopTime','10');
plotter;
