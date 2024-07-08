% function [] =plot_csv ()
    tf = 7.5;
    
    % Specify the filename
    % filename = 'Rots_raw.csv'; 
    filename = 'Rots_fund.csv'; 

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
        extended_z_measured_deg(i) = z_measured_deg(index);
        extended_x_measured_deg(i) = x_measured_deg(index);
        extended_y_measured_deg(i) = y_measured_deg(index);
        extended_z_measured_m(i) = z_measured_m(index);
        % Printing the variables side by side
        % fprintf('i: %d, index: %d, time: %.12f, rotZ: %.12f, rotX: %.12f, rotY: %.12f, Z: %.12f\n', ...
        %     i, index, extended_time_sec(i), extended_z_measured_deg(i), extended_x_measured_deg(i), extended_y_measured_deg(i), extended_z_measured_m(i));
     end

    mean_z = mean(extended_z_measured_m);
    extended_z_measured_m = extended_z_measured_m - mean_z;    
% Plot all extended variables vs time
    figure;
    plot(extended_time_sec, extended_z_measured_deg);
    title('Z Measured (deg) vs Time');
    xlabel('Time (s)');
    ylabel('Z Measured (deg)');
    grid on;

    figure;
    plot(extended_time_sec, extended_x_measured_deg);
    title('X Measured (deg) vs Time');
    xlabel('Time (s)');
    ylabel('X Measured (deg)');
    grid on;

    figure;
    plot(extended_time_sec, extended_y_measured_deg);
    title('Y Measured (deg) vs Time');
    xlabel('Time (s)');
    ylabel('Y Measured (deg)');
    grid on;

    figure;
    plot(extended_time_sec, extended_z_measured_m);
    title('Z Measured (m) vs Time');
    xlabel('Time (s)');
    ylabel('Z Measured (m)');
    grid on;