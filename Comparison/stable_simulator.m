close all;
clear all;
clc

% Load QUBE parameters
qube2_rotpen_param_adjusted;

% Initial Conditions
alpha_0 = 0.0*pi;

%% Run and plot
results = sim('stable_sim');

open('theta_QUBE.fig')
hold on
plot(results.theta.time, results.theta.data)
xlabel('time (s)')
ylabel('\theta (rad)')

open('alpha_QUBE.fig')
hold on
plot(results.alpha.time, results.alpha.data)
xlabel('time (s)')
ylabel('\alpha (rad)')

figure;
plot(theta_time_model,theta_model)
hold on
plot(results.theta.time, results.theta.data)
xlabel('time (s)')
ylabel('\theta (rad)')

figure;
plot(alpha_time_model,alpha_model)
hold on
plot(results.alpha.time, results.alpha.data)
xlabel('time (s)')
ylabel('\alpha (rad)')

% figure;
% plot(results.tau.time, results.tau.data*200)
% xlabel('time (s)')
% ylabel('Voltage (V)')