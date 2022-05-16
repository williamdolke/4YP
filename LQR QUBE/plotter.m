figure;
plot(theta.time, theta.signals.values)
hold on
plot(ref.time, ref.signals.values)
ylabel('$\theta$ (radians)','Interpreter','latex')
xlabel("time (s)")
legend('Quanser QUBE signal','Reference signal')
xlim([0 50])
title("")

figure;
plot(alpha.time, alpha.signals.values)
ylabel('$\alpha$ (radians)','Interpreter','latex')
xlabel("time (s)")
xlim([10 50])
title("")
