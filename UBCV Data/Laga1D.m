% genarate motorAngle references for bench testing + code migration
clc;close all;clear all; %#ok<CLALL>
simParams
hexapod = get_params();
[pose, tf, ts]= genPose();
dt = ts;
m = platform_mass/6;
pose(:,3) = pose(:,3)  + hexapod.y_home;
[pose(:,2) , pose(:,4) , pose(:,5) , pose(:,6) , pose(:,7)] = deal(0);
y = pose(:,3);
motorAngles = generateMotorData(pose, hexapod);
time = pose(:,1);
theta = motorAngles(:,2);% all angles are same
omega = filter([1 0 -1], 2*dt, theta);
alpha = filter([1 -2 1], dt^2, theta);
dy_dt  = filter([1 0 -1], 2*dt, y);
d2y_dt2 = filter([1 -2 1], dt^2, y);
dy_dtheta   = dy_dt ./ omega;
d2y_dtheta2 = (d2y_dt2 .* omega - dy_dt .* alpha) ./ omega.^3;
tau = (J_mr + m*dy_dtheta.^2).*alpha ...
    + m*dy_dtheta.*d2y_dtheta2 .* omega.^2 ...
    + m*g*dy_dtheta;







out = sim("hp_v3.slx"); %% no controller
motion_comp(out, pose);
torque_calc(out, N, rated_torque, peak_torque);
sim_time = out.simout.Time;
taus_load = out.simout.Data(:, (2:4:22) + 2)/N;
colors = 'rgbcmy';
figure; hold on;
plot(time(3:end), tau(3:end)/N, Color= colors(1), DisplayName='Analytical');
plot(sim_time(100:end), taus_load(100:end,1), Color= colors(2), DisplayName='Numerical')
xlabel('Time [s]'); ylabel('Torque [Nm]');
title('Servo Torques (with Rotational Inertia)');
grid on;
yline(peak_torque, '-r', 'T-motor-peak', 'HandleVisibility', 'off', 'LabelVerticalAlignment','top');
yline(rated_torque, '-g', 'T-motor-rated', 'HandleVisibility', 'off', 'LabelVerticalAlignment','top');
yline(-rated_torque, '-g', 'T-motor-rated', 'HandleVisibility', 'off', 'LabelVerticalAlignment','bottom');
yline(-peak_torque, '-r', 'T-motor-peak', 'HandleVisibility', 'off', 'LabelVerticalAlignment','bottom');
