function [motorData, pose, tf, ts] = rr2(hexapod, y_home)

    tf = 7.5;
    cutoff_frequency = 4;  % Define the cutoff frequency for filtering

    % Specify the filename
    filename = 'Rots_raw.csv';

    % Read the CSV file and extend signals using the process_and_filter_signals function
    [extended_time_sec, filtered_z_rad, filtered_x_rad, filtered_y_rad, filtered_z_m, ts] = filter_signal(filename, tf, cutoff_frequency);
    % [extended_time_sec, filtered_z_rad, filtered_x_rad, filtered_y_rad, filtered_z_m, ts] = filter_signal(filename, tf, [cutoff_frequency-1,cutoff_frequency+1]);

    % Preallocate motorAngles array
    motorAngles = zeros(length(extended_time_sec), 6);
    pose(length(extended_time_sec)) = struct('x', [], 'y', [], 'z', [], 'Rx', [], 'Ry', [], 'Rz', [], 'time0', []);

    % Calculate smoothstep values for the ramp up and ramp down
    rt = 1;
    ramp_up = smoothstep(extended_time_sec, 0, rt);
    ramp_down = 1 - smoothstep(extended_time_sec, tf-rt, tf);

    % Process each time step to calculate pose and motor angles
    for i = 1:length(extended_time_sec)
        % Store values in the pose struct array, using filtered values
        pose(i).x = 0;
        pose(i).y = (filtered_z_m(i) * ramp_up(i) * ramp_down(i)) + y_home;
        pose(i).z = 0;
        pose(i).Rx = filtered_y_rad(i) * ramp_up(i) * ramp_down(i);
        pose(i).Ry = filtered_z_rad(i) * ramp_up(i) * ramp_down(i);
        pose(i).Rz = filtered_x_rad(i) * ramp_up(i) * ramp_down(i);
        pose(i).time0 = extended_time_sec(i);

        % Call calcMotorAngles3 with the current pose and hexapod configuration
        [motorAngles(i, :),~] = calcMotorAngles3(pose(i), hexapod);
    end

    % Prepare motorData for output
    motorData = [extended_time_sec, -motorAngles(:,1), -motorAngles(:,2), ...
                 -motorAngles(:,3), -motorAngles(:,4), -motorAngles(:,5), -motorAngles(:,6)];

    % % Plot motor angles vs time
    % figure('Name', 'Motor Angles (degrees) vs Time (s)', 'NumberTitle', 'off');
    % hold on;
    % angle_plots = gobjects(1, 6);
    % labels = cell(1, 6);
    % colors = ['r', 'g', 'b', 'm', 'c', 'k'];
    % 
    % for i = 1:6
    %     % Plot motor angles vs time for each motor
    %     angle_plots(i) = plot(extended_time_sec, rad2deg(-motorAngles(:,i)), 'Color', colors(i));
    %     labels{i} = ['Motor ' num2str(i)];
    % end

    % % Add legend with motor labels
    % legend(angle_plots, labels, 'Location', 'northwest');
    % xlabel('Time (s)');
    % ylabel('Motor Angles (degrees)');
    % title('Motor Angles (degrees) vs Time (s)');
    % grid on;
    % hold off;

end
