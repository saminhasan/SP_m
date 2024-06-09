close all
sim_time = out.simout.Time;

N = 36; % gr

omegas = out.simout.Data(:, 1:3:16);
alphas = out.simout.Data(:, (1:3:16)+1);
taus_load = out.simout.Data(:, (1:3:16) + 2);

J_motor = 0.000012;

t_motor = J_motor * alphas * N;
t_total = t_motor + taus_load/ N;

% Define colors for different motors
colors = ['r', 'g', 'b', 'm', 'c', 'k'];

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

t_total_kg_cm = t_total * 100.0 / 9.80665 ;

omegas_rpm = omegas * (60 / (2 * pi));

% plot in kg·cm and RPM
figure;
hold on;
for i = 1:6
    plot(omegas_rpm(:, i) * N, t_total(:, i), 'Color', colors(i), 'DisplayName', ['Motor ' num2str(i)]);
end
xlabel('Angular Velocity (RPM)');
ylabel('Torque (Nm)');
title('Torque(Nm) vs Angular Velocity(RPM)');
legend;
grid on;
hold off;