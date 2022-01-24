close all;
clear all;
clc

%% Load QUBE parameters
qube2_rotpen_param;

% Find Total Inertia
Jt = Jr*Jp - mp^2*r^2*l^2;

% State-space representation
unstable_init;

% Initial Conditions
alpha_0 = 0.9*pi;

%% Run and plot
results = sim('unstable_sim', 10);
plotter;
