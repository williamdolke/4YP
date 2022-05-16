close all; 
clear all;
clc

%% Run and plot
set_param('q_qube2_swingup', 'SimulationCommand', 'start')
pause(25)

openfig('alpha.fig');
plot(alpha.time, alpha.signals.values)
legend('Nonlinear state-space model','Quanser QUBE Software','Quanser QUBE-Servo')

openfig('theta.fig');
plot(theta.time, theta.signals.values)
legend('Nonlinear state-space model','Quanser QUBE Software','Quanser QUBE-Servo')
