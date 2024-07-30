function [motorData, pose, tf, ts] = rr()
    hexapod = get_params();

    [y_zero, ~] = calcQ();
    tf = 7.5;
    
    % Specify the filename
    filename = 'Rots_raw.csv'; 
    % filename = 'Rots_fund.csv'; 

    % Read the CSV file
    data = readtable(filename, 'CommentStyle','#');

    % Extract data into variables
    time_sec = data{:, 'time'};
    z_measured_deg = data{:, 'Z_rot'};
    x_measured_deg = data{:, 'X_rot'};
    y_measured_deg = data{:, 'Y_rot'};
    z_measured_m = data{:, 'Z'};

    % Calculate the time step
    ts = time_sec(2) - time_sec(1);
    
    % Calculate the number of rows needed to reach tf
    num_rows = ceil(tf / ts) + 1;
    
    % Preallocate arrays
    extended_time_sec = zeros(num_rows, 1);
    extended_z_measured_deg = zeros(num_rows, 1);
    extended_x_measured_deg = zeros(num_rows, 1);
    extended_y_measured_deg = zeros(num_rows, 1);
    extended_z_measured_m = zeros(num_rows, 1);

    % Fill the preallocated arrays
    for i = 1:num_rows
        index = mod(i-1, length(time_sec)) + 1;
        extended_time_sec(i) = (i-1) * ts;
        extended_z_measured_deg(i) = z_measured_deg(index) - mean(z_measured_deg);
        extended_x_measured_deg(i) = x_measured_deg(index) - mean(x_measured_deg);
        extended_y_measured_deg(i) = y_measured_deg(index) - mean(y_measured_deg);
        extended_z_measured_m(i) = z_measured_m(index) - mean(z_measured_m);
    end

    % Preallocate motorAngles array
    motorAngles = zeros(length(extended_time_sec), 6); 
    pose(length(extended_time_sec)) = struct('x', [], 'y', [], 'z', [], 'Rx', [], 'Ry', [], 'Rz', [], 'time0', []);
    % for i = 1:length(extended_time_sec)
    %     % Store values in the pose struct array
    %     pose(i).x = 0;
    %     pose(i).y = extended_z_measured_m(i) + y_zero;
    %     pose(i).z = 0;
    %     pose(i).Rx = deg2rad(extended_y_measured_deg(i));
    %     pose(i).Ry = deg2rad(extended_z_measured_deg(i));
    %     pose(i).Rz = deg2rad(extended_x_measured_deg(i));
    %     pose(i).time0 = extended_time_sec(i);
    % 
    %     % Call calcMotorAngles with the current pose
    %     motorAngles(i, :) = calcMotorAngles(pose(i));
    % end
    % Calculate smoothstep values for the ramp up and ramp down
    ramp_up = smoothstep(extended_time_sec, 0, 0.5);
    ramp_down = 1 - smoothstep(extended_time_sec, tf-0.5, tf);
    % Apply the smoothing to the data
    for i = 1:length(extended_time_sec)
        % Store values in the pose struct array
        pose(i).x = 0;
        pose(i).y = (extended_z_measured_m(i) * ramp_up(i) * ramp_down(i)) + + y_zero;
        pose(i).z = 0;
        pose(i).Rx = deg2rad(extended_y_measured_deg(i)) * ramp_up(i) * ramp_down(i);
        pose(i).Ry = deg2rad(extended_z_measured_deg(i)) * ramp_up(i) * ramp_down(i);
        pose(i).Rz = deg2rad(extended_x_measured_deg(i)) * ramp_up(i) * ramp_down(i);
        pose(i).time0 = extended_time_sec(i);
    
        % Call calcMotorAngles with the current pose
        [motorAngles(i, :),~] = calcMotorAngles3(pose(i), hexapod);
    end
motorData = [extended_time_sec, -motorAngles(:,1), -motorAngles(:,2), ...
             -motorAngles(:,3), -motorAngles(:,4), ...
             -motorAngles(:,5), -motorAngles(:,6)];
    % % Plot all extended variables vs time
    % figure;
    % plot(extended_time_sec, extended_z_measured_deg);
    % title('Z Measured (deg) vs Time');
    % xlabel('Time (s)');
    % ylabel('Z Measured (deg)');
    % grid on;
    % 
    % figure;
    % plot(extended_time_sec, extended_x_measured_deg);
    % title('X Measured (deg) vs Time');
    % xlabel('Time (s)');
    % ylabel('X Measured (deg)');
    % grid on;
    % 
    % figure;
    % plot(extended_time_sec, extended_y_measured_deg);
    % title('Y Measured (deg) vs Time');
    % xlabel('Time (s)');
    % ylabel('Y Measured (deg)');
    % grid on;
    % 
    % figure;
    % plot(extended_time_sec, extended_z_measured_m);
    % title('Z Measured (m) vs Time');
    % xlabel('Time (s)');
    % ylabel('Z Measured (m)');
    % grid on;



end
