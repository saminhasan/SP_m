function [] = torque_calc(out, N, rated_torque, peak_torque)

colors = ['r', 'g', 'b', 'm', 'c', 'k'];

% motor parameters
% max T 0.4, continous T 0.27


%retrive simulation data
sim_time = out.simout.Time; 
omegas = out.simout.Data(:, 2:4:22);
alphas = out.simout.Data(:, (2:4:22)+1); %#ok<NASGU>
taus_load = out.simout.Data(:, (2:4:22) + 2);
omegas_rad_motor = omegas * N; % Angular velocity in rad/s
omegas_rpm_motor = omegas * (60 / (2 * pi))* N;
tau_motor =  taus_load / N; % torque required in motor frame
% Calculate power (P = τ * ω)
power_motor = tau_motor .* omegas_rad_motor; % Power in watts
% plot motor T omega Nm and RPM
% Define the time range
% T1 = 1;
% T2 = 3;
% % Extract the indices for which sim_time is within the specified range
% masked_time_indices = (sim_time > T1) & (sim_time < T2);
% % Filter the data based on these indices
% omegas_rpm_motor = omegas_rpm_motor(masked_time_indices, :); 
% tau_motor = tau_motor(masked_time_indices, :); 
% sim_time = sim_time(masked_time_indices); 
% power_motor = power_motor(masked_time_indices, :);

figure;
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
grid on;
hold off;

figure;
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
grid on;
hold off;

figure;
hold on;
time_plots = gobjects(1, 6); 
for i = 1:6
    % Plot torque vs time for each motor
    time_plots(i) = plot(sim_time, power_motor(:,i), 'Color', colors(i));
    labels{i} = ['Motor ' num2str(i)]; % Store labels in a cell array
end

% Add legend with motor labels
legend(time_plots, labels, 'Location', 'northwest');

xlabel('Time (s)');
ylabel('Power (W)');
title('Power (W) vs Time (s)');
grid on;
hold off;
% max(t_total)
% min(t_total)
% figure;
% hold on;
% for i = 1:6
%     plot(time0, rad2deg(motorAngles(:, i)), 'Color', colors(i), 'DisplayName', ['Motor ' num2str(i)]);
% end
% 
% ylabel('Angular Position (degress)');
% xlabel('Time (s)');
% title('Motor Angle (degress) vs Time (s)');
% legend;
% grid on;
% hold off;
% tau = t_total;
% [n, num_motors] = size(tau);
% 
% % Initialize variables
% tau_RMS = zeros(1, num_motors);
% tau_peak = zeros(1, num_motors);
% E_total = zeros(1, num_motors);
% tau_integral = zeros(1, num_motors);
% 
% % Time vector
% T = sim_time(end) - sim_time(1);
% 
% for i = 1:num_motors
%     % RMS torque
%     tau_squared = tau(:, i).^2;
%     tau_RMS(i) = sqrt(trapz(sim_time, tau_squared) / T);
% 
%     % Peak torque
%     tau_peak(i) = max(tau(:, i));
% 
%     % Total energy consumed
%     E_total(i) = trapz(sim_time, tau(:, i) .* omegas(:, i));
% 
%     % Integral of absolute torque
%     tau_integral(i) = trapz(sim_time, abs(tau(:, i)));
% end
% 
% % Aggregate results
% tau_RMS_avg = mean(tau_RMS);
% tau_RMS_max = max(tau_RMS);
% tau_peak_max = max(tau_peak);
% E_total_sum = sum(E_total);
% tau_integral_sum = sum(tau_integral);
% 
% % Define weights
% w1 = 1;
% w2 = 1;
% w3 = 1;
% w4 = 1;
% 
% % Calculate cost function
% cost_avg = w1 * tau_RMS_avg + w2 * tau_peak_max + w3 * E_total_sum + w4 * tau_integral_sum;
