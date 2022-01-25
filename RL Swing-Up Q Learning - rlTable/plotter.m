% Plots the pendulum and rotor motion in 3D
figure;

i = 1;
while i <= length(results.SimulationInfo.tout)
    % x and y coordinates of rotary arm end
    x_r = r*cos(results.SimulationInfo.theta.data(i));
    y_r = r*sin(results.SimulationInfo.theta.data(i));
    % x, y and z coordinates of pendulum end
    x_p = x_r - Lp*sin(results.SimulationInfo.alpha.data(i))*sin(results.SimulationInfo.theta.data(i));
    y_p = y_r + Lp*sin(results.SimulationInfo.alpha.data(i))*cos(results.SimulationInfo.theta.data(i));
    z_p = -Lp*cos(results.SimulationInfo.alpha.data(i));
    
    % Plotting
    plot3([0 x_r x_p], [0 y_r y_p], [0 0 z_p], 'LineWidth',5)
    xlabel('x (m)')
    ylabel('y (m)')
    zlabel('z (m)')
    % To view from above use view(0,90)
    % To view from an angle use view(45,45)
    % To view from the front use view(90,0)
    view(45,45)
    grid on
    xlim([-0.15 0.15])
    ylim([-0.15 0.15])
    zlim([-0.15 0.15])
    drawnow
    i = i+1;
    end
