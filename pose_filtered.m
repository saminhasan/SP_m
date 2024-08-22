function pose_filtered(out, pose, ts)
    % Extract data from simulation output
    tsim = out.pose_simscape.Time;
    xs = out.pose_simscape.Data(:,1);
    ys = out.pose_simscape.Data(:,2);
    zs = out.pose_simscape.Data(:,3);
    Rxs = -out.pose_simscape.Data(:,4) - pi/2;
    Rys = -out.pose_simscape.Data(:,6) - pi/2;
    Rzs = out.pose_simscape.Data(:,5);

    % Unpack values from the pose struct array simulation input
    [x, y, z, Rx, Ry, Rz, time0] = deal(zeros(1, length(pose)));
    for i = 1:length(pose)
        x(i) = pose(i).x;
        y(i) = pose(i).y;
        z(i) = pose(i).z;
        Rx(i) = pose(i).Rx;
        Ry(i) = pose(i).Ry;
        Rz(i) = pose(i).Rz;
        time0(i) = pose(i).time0;
    end

    % Apply the filter to the data
    xf = filt(x, ts);
    yf = filt(y, ts);
    zf = filt(z, ts);
    Rxf = filt(Rx, ts);
    Ryf = filt(Ry, ts);
    Rzf = filt(Rz, ts);

    % Plot the results
    figure('Name', 'pose vs Time (s)', 'NumberTitle', 'off');

    subplot(3,2,1);
    hold on;
    plot(tsim, xs, '-r', 'DisplayName', 'Simscape X');
    plot(time0, x, '-b', 'DisplayName', 'Setpoint X');
    plot(time0, xf, '-g', 'DisplayName', 'Filtered X');
    title('X Position');
    xlabel('Time (s)');
    ylabel('X Position (m)');
    legend;
    grid on;grid minor;
    hold off;

    subplot(3,2,2);
    hold on;
    plot(tsim, ys, '-r', 'DisplayName', 'Simscape Y');
    plot(time0, y, '-b', 'DisplayName', 'Setpoint Y');
    plot(time0, yf, '-g', 'DisplayName', 'Filtered Y');
    title('Y Position');
    xlabel('Time (s)');
    ylabel('Y Position (m)');
    legend;
    grid on;grid minor;
    hold off;

    subplot(3,2,3);
    hold on;
    plot(tsim, zs, '-r', 'DisplayName', 'Simscape Z');
    plot(time0, z, '-b', 'DisplayName', 'Setpoint Z');
    plot(time0, zf, '-g', 'DisplayName', 'Filtered Z');
    title('Z Position');
    xlabel('Time (s)');
    ylabel('Z Position (m)');
    legend;
    grid on;grid minor;
    hold off;

    subplot(3,2,4);
    hold on;
    plot(tsim, Rxs, '-r', 'DisplayName', 'Simscape Rx');
    plot(time0, Rx, '-b', 'DisplayName', 'Setpoint Rx');
    plot(time0, Rxf, '-g', 'DisplayName', 'Filtered Rx');
    title('Rx Orientation');
    xlabel('Time (s)');
    ylabel('Rx Orientation (rad)');
    legend;
    grid on;grid minor;
    hold off;

    subplot(3,2,5);
    hold on;
    plot(tsim, Rys, '-r', 'DisplayName', 'Simscape Ry');
    plot(time0, Ry, '-b', 'DisplayName', 'Setpoint Ry');
    plot(time0, Ryf, '-g', 'DisplayName', 'Filtered Ry');
    title('Ry Orientation');
    xlabel('Time (s)');
    ylabel('Ry Orientation (rad)');
    legend;
    grid on;grid minor;
    hold off;

    subplot(3,2,6);
    hold on;
    plot(tsim, Rzs, '-r', 'DisplayName', 'Simscape Rz');
    plot(time0, Rz, '-b', 'DisplayName', 'Setpoint Rz');
    plot(time0, Rzf, '-g', 'DisplayName', 'Filtered Rz');
    title('Rz Orientation');
    xlabel('Time (s)');
    ylabel('Rz Orientation (rad)');
    legend;
    grid on;grid minor;
    hold off;

    % Nested Filter function definition
    function filtered_data = filt(data, ts)
        tau = 0.001;
        sample_time = ts;
        % Define the numerator and denominator of the transfer function
        numerator = 1;
        denominator = [tau^2, 2*tau, 1];
        
        % Create the transfer function
        H = tf(numerator, denominator);
        
        % Generate a time vector based on the sample time and length of data
        t = (0:length(data)-1) * sample_time;
        
        % Apply the filter to the data
        filtered_data = lsim(H, data, t);
    end
end


