function [motorData, pose, tf, ts] = generateMotorData(hexapod, y_home)
    
    % Time setup
    tf = 4;
    ts = 1e-4;
    time0 = (0:ts:tf)';
    time = filter(ts/2, [1, ts/2-1], time0); %#ok<NASGU>
    T1 = 1;
    T2 = 3;
    time = T1/2 * (time0/T1 - sin(pi*time0/T1)/pi);
    time(T1/ts+1:T2/ts) = time(T1/ts) + (ts:ts:T2-T1);
    time(T2/ts+1:end) = time(T2/ts+1:end) + 1;
    
    f = 1/0.75;
    %eps = 2.6e-3;
    % Vectorized calculation of pose
    % z = 0.05 * sin(2 * pi * f * time) * 0; % z (horizontal component, front back)
    % x = 0.05 * sin(2 * pi * f * time) * 0; % x (horizontal component, left right)
    %
    % y = 0.045 * sin(2 * pi * 2 * f * (time + 0.1)) + y_home ; % y (vertical component)
    %
    % Ry = 15.43 * pi / 180 * sin(2 * pi * f * (time - 0.2));
    % Rz = 3 * pi / 180 * sin(2 * pi * f * (time + 0.1));
    % Rx = 2.5 * pi / 180 * sin(2 * pi * 2 * f * (time + 0.1));
    % % Vectorized calculation of pose
    y = 0.045 * sin(2 * pi * 2 * f * time) + y_home ; % y (vertical component)
    z = 0.05 * sin(2 * pi * f * time) * 0; % z (horizontal component, front back)
    x = 0.05 * sin(2 * pi * f * time) * 0; % x (horizontal component, left right)
    
    Ry = 3.5 * pi / 180 * sin(2 * pi * f * time);
    Rz = 0.5 * pi / 180 * sin(2 * pi * f * time);
    Rx = 0.86 * pi / 180 * sin(2 * pi * 2 * f * time);
    
    % Preallocate motorAngles array
    motorAngles = zeros(length(time0), 6);
    pose(length(time0)) = struct('x', [], 'y', [], 'z', [], 'Rx', [], 'Ry', [], 'Rz', [], 'time0', []);
    
    for i = 1:length(time0)
        % Store values in the pose struct array
        pose(i).x = x(i);
        pose(i).y = y(i);
        pose(i).z = z(i);
        pose(i).Rx = Rx(i);
        pose(i).Ry = Ry(i);
        pose(i).Rz = Rz(i);
        pose(i).time0 = time0(i);
    
        % Call calcMotorAngles with the current pose
        [motorAngles(i, :),~] = calcMotorAngles3(pose(i),hexapod);
    end
    
    motorData = [time0, -motorAngles(:,1), -motorAngles(:,2), ...
        -motorAngles(:,3), -motorAngles(:,4), ...
        -motorAngles(:,5), -motorAngles(:,6)];


    figure('Name', 'Motor Angles (degrees) vs Time (s)', 'NumberTitle', 'off');
    hold on;
    angle_plots = gobjects(1, 6);
    labels = cell(1, 6);
    colors = ['r', 'g', 'b', 'm', 'c', 'k'];
    for i = 1:6
        % Plot motor angles vs time for each motor
        angle_plots(i) = plot(time0, rad2deg(-motorAngles(:,i)), 'Color', colors(i));
        labels{i} = ['Motor ' num2str(i)]; % Store labels in a cell array
    end
    % Add legend with motor labels
    legend(angle_plots, labels, 'Location', 'northwest');
    
    xlabel('Time (s)');
    ylabel('Motor Angles (degrees)');
    title('Motor Angles (degrees) vs Time (s)');
    grid on;grid minor;
    hold off;
end