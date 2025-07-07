clc, close all; clear all; %#ok<CLALL>
I_plate  = diag([0.0069, 0.0137, 0.0069]);   % inertia tensor
hexapod = get_params();
simParams
[pose, tf, ts]= genPose();
pose(:,3) = pose(:,3)  + hexapod.y_home;
motorAngles = generateMotorData(pose, hexapod);
n_pose = size(pose,1);
motorAngles2 = zeros(n_pose, 6);
for l = 1:n_pose
    [motorAngles2(l, :)] = calcMotorAngles2(pose(l,:),hexapod);
end
time = pose(:,1);
T = tf; dt = ts;
Nn    = numel(time);
theta = motorAngles2;

q_traj = pose(:,2:7);
% --- 4) compute torques ---
% tau = ikd_lagrangian(q_traj,theta, ts, platform_mass, I_plate, hexapod.excenter.R, hexapod.coupler.L, J_mr, hexapod,9.81);
tau = ikd(q_traj,theta, ts, platform_mass, I_plate, hexapod.excenter.R, hexapod.coupler.L, J_mr, hexapod,9.81);
out = sim("hp_v3.slx"); %% no controller
sim_time = out.simout.Time;
taus_load = out.simout.Data(:, (2:4:22) + 2)/N;
% tau = ikd(q_traj,theta, ts, platform_mass, I_plate, hexapod.excenter.R, hexapod.coupler.L, J_mr, hexapod,9.81);
colors = 'rgbcmyrgbcmy';
for k = 1:6
    figure(k+10);
    hold on;
    plot( time(3:end), tau(3:end, k)/N, 'Color',colors(k), 'LineStyle','-.','DisplayName',sprintf('Motor %d (Calculated)', k) );
    plot( sim_time(100:end),taus_load(100:end, k),'Color',colors(k+1),'LineStyle','--','DisplayName', sprintf('Motor %d (Simulated)', k) );
    xlabel('Time [s]');
    ylabel('Torque [Nm]');
    title('Servo Torques (with Rotational Inertia)');
    grid on;
    
    % constant torque limits
    yline( peak_torque,  '-r', 'T-motor-peak','HandleVisibility','off','LabelVerticalAlignment','top');
    yline( rated_torque, '-g', 'T-motor-rated','HandleVisibility','off','LabelVerticalAlignment','top');
    yline(-rated_torque, '-g', 'T-motor-rated','HandleVisibility','off','LabelVerticalAlignment','bottom');
    yline(-peak_torque,  '-r', 'T-motor-peak','HandleVisibility','off','LabelVerticalAlignment','bottom');
    legend('Location','best');
end