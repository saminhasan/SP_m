function plotIMUData(imu_data)
    % Load data into variables with meaningful names
    time = imu_data(:, 1); % Time (s)
    % Extract data components
    x_acc = imu_data(:, 2); % X Linear Acceleration (m/s^2)
    y_acc = imu_data(:, 3); % Y Linear Acceleration (m/s^2)
    z_acc = imu_data(:, 4); % Z Linear Acceleration (m/s^2)
    x_ang_vel = deg2rad(imu_data(:, 5)); % X Angular Velocity (rad/s)
    y_ang_vel = deg2rad(imu_data(:, 6)); % Y Angular Velocity (rad/s)
    z_ang_vel = deg2rad(imu_data(:, 7)); % Z Angular Velocity (rad/s)

    % Create figure
    figure;

    % Linear Acceleration Subplot
    subplot(2, 1, 1);
    hold on;
    plot(time, x_acc, 'r', 'DisplayName', 'X Linear');
    plot(time, y_acc, 'g', 'DisplayName', 'Y Linear');
    plot(time, z_acc, 'b', 'DisplayName', 'Z Linear');
    hold off;
    title('Linear Acceleration (m/s^2)');
    xlabel('Time (s)');
    ylabel('Acceleration (m/s^2)');
    legend show;
    grid on;

    % Angular Velocity Subplot
    subplot(2, 1, 2);
    hold on;
    plot(time, x_ang_vel, 'c', 'DisplayName', 'X');
    plot(time, y_ang_vel, 'm', 'DisplayName', 'Y');
    plot(time, z_ang_vel, 'k', 'DisplayName', 'Z '); % 'k' for black
    hold off;
    title('Angular Velocity (rad/s)');
    xlabel('Time (s)');
    ylabel('Angular Velocity (rad/s)');
    legend show;
    grid on;

    % Add super title
    sgtitle('IMU Data');
end
