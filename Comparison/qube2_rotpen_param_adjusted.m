%% Rotary Arm
% Mass (kg)
mr = 0.095;
% Total length (m)
r = 0.47498;
% Moment of inertia about pivot (kg-m^2)
Jr = 0.0024586;
% Equivalent Viscous Damping Coefficient (N-m-s/rad)
br = 0.0066047; % damping tuned heuristically to match QUBE-Sero 2 response

%% Pendulum Link
% Mass (kg)
mp = 0.045211;
% Total length (m)
Lp = 0.129;
% Pendulum center of mass (m)
l = 0.044321;
% Moment of inertia about pivot (kg-m^2)
Jp = 0.0004295;

% Equivalent Viscous Damping Coefficient (N-m-s/rad)
bp = -0.00087613; % damping tuned heuristically to match QUBE-Sero 2 response
% Gravity Constant
g = 9.81;

%% Limiting Values
% Maximum angular acceleration of arm (rad/s^2)
thetadd_max = 72.8465;
