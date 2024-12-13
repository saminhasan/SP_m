% function [motorData, pose, tf, ts] = rr4()
    clear all; clc; close all; %#ok<CLALL>
    % % Hexapod components
    % hexapod = get_params();
    % excenter = hexapod.excenter;
    % coupler = hexapod.coupler;
    % base = hexapod.base;
    % platform = hexapod.platform;
    % [y_home, q] = calcQ(hexapod);
    % Specify the filename
    filename = 'Rots_raw.csv';
    % filename = 'Rots_fund.csv';
    
    % Read the CSV file
    data = readtable(filename, 'CommentStyle','#');
    
    % Extract data into variables
    t = data{:, 'time'};
    Rz = data{:, 'Z_rot'};
    Rx = data{:, 'X_rot'};
    Ry = data{:, 'Y_rot'};
    z = data{:, 'Z'};
    n_data = length(t);
    n = 3; % number of full cycles.
    % Calculate the time step
    ts = t(2) - t(1);
    tf = t(end) * n;
    % Calculate the number of rows needed to reach tf
    num_rows = length(t) * n;
     % Preallocate arrays
    t_r = zeros(num_rows, 1);
    Rz_r = zeros(num_rows, 1);
    Rx_r = zeros(num_rows, 1);
    Ry_r = zeros(num_rows, 1);
    z_r = zeros(num_rows, 1);
    loop_point_idx = n_data+1:n_data:n_data*n;
    for i = 1:num_rows
        index =  mod(i-1,n_data) + 1;
        t_r(i) = ts * (i-1);
        Rz_r(i) = Rz(index);
        Rx_r(i) = Rx(index);
        Ry_r(i) = Ry(index);
        z_r(i) = z(index);
        % disp([i, ts * (i-1)])
    end
% Rz_rs = smoothCycle(loop_point_idx, Rz_r, ts);
% Rx_rs = smoothCycle(loop_point_idx, Rx_r, ts);
% Ry_rs = smoothCycle(loop_point_idx, Ry_r, ts);
z_rs = smoothCycle(loop_point_idx-1, z_r, ts);

% Plot all extended variables vs time
% figure;
% 
% subplot(3,1,1)
% plot(t_r, Rz_r);
% title('Rz Measured (deg) vs Time');
% xlabel('Time (s)');
% ylabel('Rz Measured (deg)');
% grid on;
% 
% subplot(3,1,2)
% plot(t_r, filter([1,0,1],2*ts,Rz_r));
% title('Rz Measured (deg/s) vs Time');
% xlabel('Time (s)');
% ylabel('Rz Measured (deg/s)');
% grid on;
% 
% subplot(3,1,3)
% plot(t_r, filter([1,-2,1],ts^2,Rz_r));
% title('Rz Measured (deg/s^2) vs Time');
% xlabel('Time (s)');
% ylabel('Rz Measured (deg/s^2)');
% grid on;



figure;
subplot(3,1,1)
plot(t_r, z_rs);
title('Z Measured (m) vs Time');
xlabel('Time (s)');
ylabel('Z Measured (m)');
grid on;

subplot(3,1,2)
plot(t_r, filter([1,0,1], 2*ts, z_rs));
title('Zd Measured (m/s) vs Time');
xlabel('Time (s)');
ylabel('Zd Measured (m/s)');
grid on;

subplot(3,1,3)
plot(t_r, filter([1,-2,1], ts^2, z_rs));
title('Zdd Measured (m/s^2) vs Time');
xlabel('Time (s)');
ylabel('Zdd Measured (m/s^2)');
grid on;