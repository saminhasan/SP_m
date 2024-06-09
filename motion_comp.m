close all
% Extract data from simulation output
ts = out.pose_simscape.Time;
xs = out.pose_simscape.Data(:,1);
ys = out.pose_simscape.Data(:,2);
zs = out.pose_simscape.Data(:,3);
Rxs = - out.pose_simscape.Data(:,4)  - pi/2;
Rys = - out.pose_simscape.Data(:,6)  - pi/2;
Rzs = out.pose_simscape.Data(:,5);
figure;
subplot(3,2,1);
hold on;
plot(ts, xs, '-r', 'DisplayName', 'Simscape X');
plot(time0, x, '-b', 'DisplayName', 'Setpoint X');
title('X Position');
xlabel('Time (s)');
ylabel('X Position (m)');
legend;
grid on;
hold off;

subplot(3,2,2);
hold on;
plot(ts, ys, '-r', 'DisplayName', 'Simscape Y');
plot(time0, y, '-b', 'DisplayName', 'Setpoint Y');
title('Y Position');
xlabel('Time (s)');
ylabel('Y Position (m)');
legend;
grid on;
hold off;

subplot(3,2,3);
hold on;
plot(ts, zs, '-r', 'DisplayName', 'Simscape Z');
plot(time0, z, '-b', 'DisplayName', 'Setpoint Z');
title('Z Position');
xlabel('Time (s)');
ylabel('Z Position (m)');
legend;
grid on;
hold off;

subplot(3,2,4);
hold on;
plot(ts, Rxs, '-r', 'DisplayName', 'Simscape Rx');
plot(time0, Rx, '-b', 'DisplayName', 'Setpoint Rx');
title('Rx Orientation');
xlabel('Time (s)');
ylabel('Rx Orientation (rad)');
legend;
grid on;
hold off;

subplot(3,2,5);
hold on;
plot(ts, Rys, '-r', 'DisplayName', 'Simscape Ry');
plot(time0, Ry, '-b', 'DisplayName', 'Setpoint Ry');
title('Ry Orientation');
xlabel('Time (s)');
ylabel('Ry Orientation (rad)');
legend;
grid on;
hold off;

subplot(3,2,6);
hold on;
plot(ts, Rzs, '-r', 'DisplayName', 'Simscape Rz');
plot(time0, Rz, '-b', 'DisplayName', 'Setpoint Rz');
title('Rz Orientation');
xlabel('Time (s)');
ylabel('Rz Orientation (rad)');
legend;
grid on;
hold off;


% Combined plot for all components
figure;
hold on;

% Plot X position
plot(ts, xs, '-r', 'DisplayName', 'Simscape X');
plot(time0, x, '-b', 'DisplayName', 'Setpoint X');

% Plot Y position
plot(ts, ys, '--r', 'DisplayName', 'Simscape Y');
plot(time0, y, '--b', 'DisplayName', 'Setpoint Y');

% Plot Z position
plot(ts, zs, '-.r', 'DisplayName', 'Simscape Z');
plot(time0, z, '-.b', 'DisplayName', 'Setpoint Z');

% Plot Rx orientation
plot(ts, Rxs, ':r', 'DisplayName', 'Simscape Rx');
plot(time0, Rx, ':b', 'DisplayName', 'Setpoint Rx');

% Plot Ry orientation
plot(ts, Rys, '-r', 'DisplayName', 'Simscape Ry');
plot(time0, Ry, '-b', 'DisplayName', 'Setpoint Ry');

% Plot Rz orientation
plot(ts, Rzs, '--r', 'DisplayName', 'Simscape Rz');
plot(time0, Rz, '--b', 'DisplayName', 'Setpoint Rz');

title('Platform Position and Orientation');
xlabel('Time (s)');
ylabel('Values');
legend;
grid on;
hold off;
