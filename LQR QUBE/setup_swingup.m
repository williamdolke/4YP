close all; 
clear all;
clc

%% Load QUBE parameters
qube2_rotpen_param;

% Moment of inertia of pendulum about center of mass (kg-m^2)
Jp_cm = mp*Lp^2/12; % used to calculate pendulum energy in swing-up control

% Find Total Inertia
Jt = Jr*Jp - mp^2*r^2*l^2;

% Swing-Up Controller
k_e = 100*Rm/(km*mr*r); % Tunable gain

% Reference Energy (J)
E_r = 2*mp*g*l;

% State-space representation
unstable_init;

%% Run and plot
set_param('q_qube2_swingup', 'SimulationCommand', 'start')
pause(60)
plotter;
