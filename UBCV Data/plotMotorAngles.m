function plotMotorAngles(motorAngles)
    % Create a figure for motor angles
    f1 = figure('Name', 'Motor Angles (degrees) vs Time (s)', 'NumberTitle', 'off');
    f1.Theme = "light";

    time = motorAngles(:,1);
    Ts = mean(diff(time));  % Sampling time

    colors = ['r', 'g', 'b', 'm', 'c', 'k'];

    for i = 1:6
        subplot(3, 2, i); % 3 rows, 2 columns, i-th subplot
        angle_deg = rad2deg(-motorAngles(:, i+1));
        plot(time, angle_deg, 'Color', colors(i));
        title(['Motor ' num2str(i)]);
        xlabel('Time (s)');
        ylabel('Motor Angles (degrees)');
        grid on; grid minor;
    end

    % --- Second Derivative Plot ---
    f2 = figure('Name', 'Motor Angle Acceleration (g) vs Time (s)', 'NumberTitle', 'off');
    f2.Theme = "light";

    for i = 1:6
        subplot(3, 2, i);
        angle_rad = motorAngles(:, i+1);
        ddy = filter([1, -2, 1], Ts^2, angle_rad*0.1/9.8);  % Second derivative
        plot(time, ddy, 'Color', colors(i));
        title(['Motor ' num2str(i) ' Acceleration']);
        xlabel('Time (s)');
        ylabel('Angle Acceleration (g)');
        grid on; grid minor;
    end
fprintf("Sampling time(Motor angles) Ts: %.6e s (%.2f Hz)\n", Ts, 1/Ts);

end
