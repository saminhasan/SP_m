% run_hexapod_torques.m
% ========================================
clc, close all; clear all; %#ok<CLALL>

% --- 1) load geometry & params ---
I_plate  = diag([0.0069, 0.0137, 0.0069]);   % inertia tensor
hexapod = get_params();
simParams
[pose, tf, ts]= genPose();
pose(:,3) = pose(:,3)  + hexapod.y_home;
motorAngles = generateMotorData(pose, hexapod);
%----------------------------------------------------------------------
time = pose(:,1);
T = tf; dt = ts;
Nn    = numel(time);
theta = -motorAngles(:,2:7);

q_traj = pose(:,2:7);
% --- 4) compute torques ---
tau = computeStewartTorque(theta, q_traj, platform_mass, I_plate, J_mr, g, dt, hexapod);

out = sim("hp_v3.slx"); %% no controller
motion_comp(out, pose);
torque_calc(out, N, rated_torque, peak_torque);
sim_time = out.simout.Time;
taus_load = out.simout.Data(:, (2:4:22) + 2)/N;

% tau = computeStewartTorque(theta, q_traj, platform_mass, I_plate, J_mr, g, dt, hexapod);

colors = 'rgbcmyrgbcmy';
for k = 1:6
    figure(k+10);
    hold on;
    % solid line: computed torque
    plot( time(3:end), tau(3:end, k), 'Color',colors(k), 'LineStyle','-.','DisplayName',sprintf('Motor %d (Calculated)', k) );
    % dashed line: loaded/measured torque
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

