function plotMotorAngles(motorAngles)
% Create a figure
f = figure('Name', 'Motor Angles (degrees) vs Time (s)', 'NumberTitle', 'off');
f.Theme = "light";
    time = motorAngles(:,1);

% Define colors for each motor
colors = ['r', 'g', 'b', 'm', 'c', 'k'];

    for i = 1:6
        subplot(3, 2, i); % 3 rows, 2 columns, i-th subplot
        plot(time, rad2deg(-motorAngles(:, i+1)), 'Color', colors(i));
        title(['Motor ' num2str(i)]);
        xlabel('Time (s)');
        ylabel('Motor Angles (degrees)');
        grid on; grid minor;
    end
end