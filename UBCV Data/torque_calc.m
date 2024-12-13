function max_dynamic_torque = torque_calc(out, N, rated_torque, peak_torque)

colors = ['r', 'g', 'b', 'c', 'm', 'y'];


%retrive simulation data
sim_time = out.simout.Time;
thetas = out.simout.Data(:, (2:4:22)-1); %#ok<NASGU>
omegas = out.simout.Data(:, 2:4:22);
alphas = out.simout.Data(:, (2:4:22)+1); %#ok<NASGU>
taus_load = out.simout.Data(:, (2:4:22) + 2);
omegas_rad_motor = omegas * N; % Angular velocity in rad/s
omegas_rpm_motor = omegas * (60 / (2 * pi))* N;
tau_motor =  taus_load / N; % torque required in motor frame
% Calculate power (P = τ * ω)
% power_motor = tau_motor .* omegas_rad_motor; % Power in watts
max_dynamic_torque = max(max(taus_load));

% plot motor T omega Nm and RPM
figure('Name', 'Torque (Nm) vs Angular Velocity (RPM)', 'NumberTitle', 'off');
hold on;
plots = gobjects(1, 6); 
labels = cell(1, 6);
for i = 1:6
    % Plot data for each motor
    plots(i) = plot(omegas_rpm_motor(:, i), tau_motor(:, i), 'Color', colors(i));
    % plots(i) = plot(masked_omegas_rpm(:, i) * N, masked_t_total(:, i), 'Color', colors(i));
    labels{i} = ['Motor ' num2str(i)]; % Store labels in a cell array
end

% Add legend with motor labels
legend(plots, labels, 'Location', 'northwest');

% Add y-lines for motor peaks and rated values
yline(peak_torque, '-r', 'T-motor-peak', 'HandleVisibility', 'off', 'LabelVerticalAlignment','top');
yline(rated_torque, '-g', 'T-motor-rated', 'HandleVisibility', 'off', 'LabelVerticalAlignment','top');
yline(-rated_torque, '-g', 'T-motor-rated', 'HandleVisibility', 'off', 'LabelVerticalAlignment','bottom');
yline(-peak_torque, '-r', 'T-motor-peak', 'HandleVisibility', 'off', 'LabelVerticalAlignment','bottom');

xlabel('Angular Velocity (RPM)');
ylabel('Torque (Nm)');
title('Torque (Nm) vs Angular Velocity (RPM)');
grid on;grid minor;
hold off;

figure('Name', 'Torque (Nm) vs Time (s)', 'NumberTitle', 'off');
hold on;
time_plots = gobjects(1, 6); 
for i = 1:6
    % Plot torque vs time for each motor
    time_plots(i) = plot(sim_time, tau_motor(:, i), 'Color', colors(i));
    labels{i} = ['Motor ' num2str(i)]; % Store labels in a cell array
end

% Add legend with motor labels
legend(time_plots, labels, 'Location', 'northwest');

% Add y-lines for motor peaks and rated values
yline(peak_torque, '-r', 'T-motor-peak', 'HandleVisibility', 'off', 'LabelVerticalAlignment','top');
yline(rated_torque, '-g', 'T-motor-rated', 'HandleVisibility', 'off', 'LabelVerticalAlignment','top');
yline(-rated_torque, '-g', 'T-motor-rated', 'HandleVisibility', 'off', 'LabelVerticalAlignment','bottom');
yline(-peak_torque, '-r', 'T-motor-peak', 'HandleVisibility', 'off', 'LabelVerticalAlignment','bottom');

xlabel('Time (s)');
ylabel('Torque (Nm)');
title('Torque (Nm) vs Time (s)');
grid on;grid minor;
hold off;
% 
% figure('Name', 'Power (W) vs Time (s)', 'NumberTitle', 'off');
% hold on;
% time_plots = gobjects(1, 6); 
% for i = 1:6
%     % Plot torque vs time for each motor
%     time_plots(i) = plot(sim_time, power_motor(:,i), 'Color', colors(i));
%     labels{i} = ['Motor ' num2str(i)]; % Store labels in a cell array
% end
% 
% % Add legend with motor labels
% legend(time_plots, labels, 'Location', 'northwest');
% 
% xlabel('Time (s)');
% ylabel('Power (W)');
% title('Power (W) vs Time (s)');
% grid on;grid minor;
% hold off;
