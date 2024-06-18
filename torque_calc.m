function [] = torque_calc(out)
% Define colors for different motors
colors = ['r', 'g', 'b', 'm', 'c', 'k'];

% motor parameters
% max T 0.4, continous T 0.27

N = 1; % gear ratio
J_m = 12e-6*0; % motor inertia in motor axis frame

%retrive simulation data
sim_time = out.simout.Time; %#ok<NASGU>
omegas = out.simout.Data(:, 2:4:22);
alphas = out.simout.Data(:, (2:4:22)+1);
taus_load = out.simout.Data(:, (2:4:22) + 2);
omegas_rpm = omegas * (60 / (2 * pi));


tau_motor = J_m * alphas * N;
tau_total = tau_motor + taus_load/ N;

% plot motor T omega Nm and RPM
% Define the time range
% T1 = 1;
% T2 = 3;
% 
% % Extract the indices for which sim_time is within the specified range
% masked_time_indices = (out.simout.Time > T1) & (out.simout.Time < T2);
% 
% % Filter the data based on these indices
% masked_omegas_rpm = omegas_rpm(masked_time_indices, :); %#ok<NASGU>
% masked_t_total = t_total(masked_time_indices, :); %#ok<NASGU>
% masked_time = out.simout.Time(masked_time_indices); %#ok<NASGU>

figure;
hold on;
plots = gobjects(1, 6); 
labels = cell(1, 6);
for i = 1:6
    % Plot data for each motor
    plots(i) = plot(omegas_rpm(:, i) * N, tau_total(:, i), 'Color', colors(i));
    % plots(i) = plot(masked_omegas_rpm(:, i) * N, masked_t_total(:, i), 'Color', colors(i));
    labels{i} = ['Motor ' num2str(i)]; % Store labels in a cell array
end

% Add legend with motor labels
legend(plots, labels, 'Location', 'northwest');

% Add y-lines for motor peaks and rated values
yline(0.4, '-r', 'T-motor-peak', 'HandleVisibility', 'off', 'LabelVerticalAlignment','top');
yline(0.27, '-g', 'T-motor-rated', 'HandleVisibility', 'off', 'LabelVerticalAlignment','top');
yline(-0.27, '-g', 'T-motor-rated', 'HandleVisibility', 'off', 'LabelVerticalAlignment','bottom');
yline(-0.4, '-r', 'T-motor-peak', 'HandleVisibility', 'off', 'LabelVerticalAlignment','bottom');

xlabel('Angular Velocity (RPM)');
ylabel('Torque (Nm)');
title('Torque (Nm) vs Angular Velocity (RPM)');
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
