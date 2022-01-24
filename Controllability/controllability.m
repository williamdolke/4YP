close all;
clear all;
clc

%% Load QUBE parameters
qube2_rotpen_param;

% Find Total Inertia
Jt = Jr*Jp - mp^2*r^2*l^2;

%% State Space Representation
A = [0 0 1 0;
     0 0 0 1;
     0 mp^2*l^2*r*g/Jt  -br*Jp/Jt   -mp*l*r*bp/Jt 
     0  mp*g*l*Jr/Jt    -mp*l*r*br/Jt   -Jr*bp/Jt];
B = [0; 0; Jp/Jt; mp*l*r/Jt];

%% Controllability
Co = ctrb(A,B);

while rank(Co) == 4 && l > 1e-6
    mp = mp*0.999999;
    Lp = Lp*0.999999;
    l = Lp/2;
    Jp = mp*Lp^2/3;
    Jt = Jr*Jp - mp^2*r^2*l^2;
    
    A = [0 0 1 0;
     0 0 0 1;
     0 mp^2*l^2*r*g/Jt  -br*Jp/Jt   -mp*l*r*bp/Jt 
     0  mp*g*l*Jr/Jt    -mp*l*r*br/Jt   -Jr*bp/Jt];
    B = [0; 0; Jp/Jt; mp*l*r/Jt];

    Co = ctrb(A,B);
end

Co
rank(Co)
l

