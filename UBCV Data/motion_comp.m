function [] = motion_comp(out, pose)
    % Extract data from simulation output
    tsim = out.pose_simscape.Time;
    xs = out.pose_simscape.Data(:,1);
    ys = out.pose_simscape.Data(:,2);
    zs = out.pose_simscape.Data(:,3);
    Rxs = -out.pose_simscape.Data(:,4) - pi/2;
    Rys = -out.pose_simscape.Data(:,6) - pi/2;
    Rzs = out.pose_simscape.Data(:,5);

    % Unpack values from the pose struct array simulation input
    time = pose(:,1);
    x = pose(:,2);
    y = pose(:,3);
    z = pose(:,4);

    Rx = pose(:,5);
    Ry = pose(:,6);
    Rz = pose(:,7);

    
    figure('Name', 'pose vs Time (s)', 'NumberTitle', 'off');

    subplot(3,2,1);
    hold on;
    plot(tsim, xs, '-r', 'DisplayName', 'Simscape X');
    plot(time, x, '-b', 'DisplayName', 'Setpoint X');
    title('X Position');
    xlabel('Time (s)');
    ylabel('X Position (m)');
    legend;
    grid on;
    grid minor;
    hold off;

    subplot(3,2,2);
    hold on;
    plot(time, y, '-b', 'DisplayName', 'Setpoint Y');
    plot(tsim, ys, '-r', 'DisplayName', 'Simscape Y');

    title('Y Position');
    xlabel('Time (s)');
    ylabel('Y Position (m)');
    legend;
    grid on;
    grid minor;
    hold off;

    subplot(3,2,3);
    hold on;
    plot(tsim, zs, '-r', 'DisplayName', 'Simscape Z');
    plot(time, z, '-b', 'DisplayName', 'Setpoint Z');
    title('Z Position');
    xlabel('Time (s)');
    ylabel('Z Position (m)');
    legend;
    grid on;
    grid minor;
    hold off;

    subplot(3,2,4);
    hold on;
    plot(tsim, Rxs, '-r', 'DisplayName', 'Simscape Rx');
    plot(time, Rx, '-b', 'DisplayName', 'Setpoint Rx');
    title('Rx Orientation');
    xlabel('Time (s)');
    ylabel('Rx Orientation (rad)');
    legend;
    grid on;
    grid minor;
    hold off;

    subplot(3,2,5);
    hold on;
    plot(tsim, Rys, '-r', 'DisplayName', 'Simscape Ry');
    plot(time, Ry, '-b', 'DisplayName', 'Setpoint Ry');
    title('Ry Orientation');
    xlabel('Time (s)');
    ylabel('Ry Orientation (rad)');
    legend;
    grid on;
    grid minor;
    hold off;

    subplot(3,2,6);
    hold on;
    plot(tsim, Rzs, '-r', 'DisplayName', 'Simscape Rz');
    plot(time, Rz, '-b', 'DisplayName', 'Setpoint Rz');
    title('Rz Orientation');
    xlabel('Time (s)');
    ylabel('Rz Orientation (rad)');
    legend;
    grid on;
    grid minor;
    hold off;

end
