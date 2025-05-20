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
    plot(tsim, rad2deg(Rxs), '-r', 'DisplayName', 'Simscape Rx');
    plot(time, rad2deg(Rx), '-b', 'DisplayName', 'Setpoint Rx');
    title('Rx Orientation');
    xlabel('Time (s)');
    ylabel('Rx Orientation (deg)');
    legend;
    grid on;
    grid minor;
    hold off;

    subplot(3,2,5);
    hold on;
    plot(tsim, rad2deg(Rys), '-r', 'DisplayName', 'Simscape Ry');
    plot(time, rad2deg(Ry), '-b', 'DisplayName', 'Setpoint Ry');
    title('Ry Orientation');
    xlabel('Time (s)');
    ylabel('Ry Orientation (deg)');
    legend;
    grid on;
    grid minor;
    hold off;

    subplot(3,2,6);
    hold on;
    plot(tsim, rad2deg(Rzs), '-r', 'DisplayName', 'Simscape Rz');
    plot(time, rad2deg(Rz), '-b', 'DisplayName', 'Setpoint Rz');
    title('Rz Orientation');
    xlabel('Time (s)');
    ylabel('Rz Orientation (deg)');
    legend;
    grid on;
    grid minor;
    hold off;

    figure('Name', 'acceleration Z vs Time (s)', 'NumberTitle', 'off');
    hold on;
    Ts = mean(diff(time));
    Tss = mean(diff(tsim));
    Tss
   ddy = filter([1,-2,1],Ts^2,y);
   ddys = filter([1,-2,1],Tss^2,ys);
   plot(time (3:end)+ Ts*3,ddy(3:end)/9.81, '-b', 'DisplayName', 'Setpoint accZ');
   plot(tsim(3:end) + Tss*3,ddys(3:end)/9.81, '-r', 'DisplayName', 'Simscape accZ');
   % plot(ddy(3:end)/9.81, '-b', 'DisplayName', 'Setpoint accZ');
   % plot(ddys(3:end)/9.81, '-r', 'DisplayName', 'Simscape accZ');
   title('Z axis acceleration');
   xlabel('Time (s)');
   ylabel('acceleration Z(g)');
   legend;
   grid on;
   grid minor;
   hold off;
    fprintf("Peak acceleration: Setpoint = %.3fg, Actual = %.3fg\n", max(ddy(3:end)/9.81), max(ddys(3:end)/9.81));
end
