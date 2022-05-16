close all; 
clear all;
clc

set_param(gcs, 'SimulationMode', 'external')

% Load model parameters
qube2_rotpen_param;

%% Define environment
actInfo = (-1:1)*tau_max;
numAct = length(actInfo);

numObs = 6;

%% Define agent
Tc = 0.002;            % Time step for feedback controller
Tf = 10;               % Simulation stop time
Ts = Tc * 4;           % Time step for Reinforcement Learning agent

rng('default');

%% Critic
buckets = 8; % Change in other script too

% Load the pretrained agent.
load('Q_init.mat','Q_init');

%% Learning
doTraining = false;    % Set "true" for learning.
maxEpisode = 100000;
episode = 0;

if doTraining
    % Train the agent.
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
end

%% Simulate and plot
set_param('q_qube2_swingup', 'SimulationCommand', 'start')
pause(Tf+8)
plotter;
