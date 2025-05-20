function [motorData, pose] = generateMotorData(pose, hexapod)
ts = mean(diff(pose(:,1)));
n_pose = length(pose);
motorAngles = zeros(n_pose, 6);
for l = 1:n_pose
    [motorAngles(l, :)] = calcMotorAngles(pose(l,:),hexapod);
end
motorData = [
    pose(:,1), ...
    -motorAngles(:,1), -motorAngles(:,2), ...
    -motorAngles(:,3), -motorAngles(:,4), ...
    -motorAngles(:,5), -motorAngles(:,6) ...
    ];
for k = 2:7
    motorData(:,k) = motorData(:,k).*smoothStep(pose(:,1), ts, 1).*smoothStep(pose(:,1), pose(end,1), pose(end,1)-1);
end
% plotMotorAngles(motorData);
    function plotMotorAngles(motorAngles) %#ok<DEFNU>
        % Create a figure
        f = figure('Name', 'Motor Angles (degrees) vs Time (s)', 'NumberTitle', 'off');
        f.Theme = "light";
        time = motorAngles(:,1);

        % Define colors for each motor
        colors = ['r', 'g', 'b', 'm', 'c', 'k'];

        % Plot each motor in its own subplot
        for i = 1:6
            subplot(3, 2, i); % 3 rows, 2 columns, i-th subplot
            plot(time, rad2deg(-motorAngles(:, i+1)), 'Color', colors(i));

            % Set title and labels
            title(['Motor ' num2str(i)]);
            xlabel('Time (s)');
            ylabel('Motor Angles (degrees)');

            % Enable grid
            grid on; grid minor;
        end
    end
end