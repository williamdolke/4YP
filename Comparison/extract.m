theta_fig = open('theta_QUBE.fig');
dataObjsY = findobj(theta_fig,'-property','YData');
dataObjsX = findobj(theta_fig,'-property','XData');

theta_model = dataObjsY(1).YData;
theta_software = dataObjsY(2).YData;
theta_qube = dataObjsY(3).YData;
theta_time_model = dataObjsX(1).XData;
theta_time_software = dataObjsX(2).XData;
theta_time_qube = dataObjsX(3).XData;

alpha_fig = open('alpha_QUBE.fig');
dataObjsY = findobj(alpha_fig,'-property','YData');
dataObjsX = findobj(alpha_fig,'-property','XData');

alpha_model = dataObjsY(1).YData;
alpha_software = dataObjsY(2).YData;
alpha_qube = dataObjsY(3).YData;
alpha_time_model = dataObjsX(1).XData;
alpha_time_software = dataObjsX(2).XData;
alpha_time_qube = dataObjsX(3).XData;
