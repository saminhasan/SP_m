close all
% Define colors for different motors
colors = ['r', 'g', 'b', 'm', 'c', 'k'];

% motor parameters
% max T 0.4, continous T 0.27

N = 36; % gear ratio
J_motor = 0.000012; % motor inertia

%retrive simulation data
sim_time = out.simout.Time;
omegas = out.simout.Data(:, 1:3:16);
omegas_rpm = omegas * (60 / (2 * pi));
alphas = out.simout.Data(:, (1:3:16)+1);
taus_load = out.simout.Data(:, (1:3:16) + 2);


t_motor = J_motor * alphas * N;
t_total = t_motor + taus_load/ N;

tau = t_total;
[n, num_motors] = size(tau);

% Initialize variables
tau_RMS = zeros(1, num_motors);
tau_peak = zeros(1, num_motors);
E_total = zeros(1, num_motors);
tau_integral = zeros(1, num_motors);

% Time vector
T = sim_time(end) - sim_time(1);

for i = 1:num_motors
    % RMS torque
    tau_squared = tau(:, i).^2;
    tau_RMS(i) = sqrt(trapz(sim_time, tau_squared) / T);
    
    % Peak torque
    tau_peak(i) = max(tau(:, i));
    
    % Total energy consumed
    E_total(i) = trapz(sim_time, tau(:, i) .* omegas(:, i));
    
    % Integral of absolute torque
    tau_integral(i) = trapz(sim_time, abs(tau(:, i)));
end

% Aggregate results
tau_RMS_avg = mean(tau_RMS);
tau_RMS_max = max(tau_RMS);
tau_peak_max = max(tau_peak);
E_total_sum = sum(E_total);
tau_integral_sum = sum(tau_integral);

% Define weights
w1 = 1;
w2 = 1;
w3 = 1;
w4 = 1;

% Calculate cost function
cost_avg = w1 * tau_RMS_avg + w2 * tau_peak_max + w3 * E_total_sum + w4 * tau_integral_sum;

% plot motor T omega Nm and RPM
% Define the time range
time_min = 1;
time_max = 3;

% Extract the indices for which sim_time is within the specified range
time_indices = (out.simout.Time > time_min) & (out.simout.Time < time_max);

% Filter the data based on these indices
filtered_omegas_rpm = omegas_rpm(time_indices, :);
filtered_t_total = t_total(time_indices, :);
filtered_time = out.simout.Time(time_indices);
figure;
hold on;
for i = 1:6
    % plot(filtered_omegas_rpm(:, i) * N, filtered_t_total(:, i), 'Color', colors(i), 'DisplayName', ['Motor ' num2str(i)]);
    plot(omegas_rpm(:, i) * N, t_total(:, i), 'Color', colors(i), 'DisplayName', ['Motor ' num2str(i)]);
end
xlabel('Angular Velocity (RPM)');
ylabel('Torque (Nm)');
title('Torque(Nm) vs Angular Velocity(RPM)');
legend;
grid on;
hold off;

figure;
hold on;
for i = 1:6
    plot(time0, rad2deg(motorAngles(:, i)), 'Color', colors(i), 'DisplayName', ['Motor ' num2str(i)]);
end

ylabel('Angular Position (degress)');
xlabel('Time (s)');
title('Motor Angle (degress) vs Time (s)');
legend;
grid on;
hold off;