clear all; clc; close all; %#ok<CLALL>
% Hexapod components
hexapod = get_params();
excenter = hexapod.excenter;
coupler = hexapod.coupler;
base = hexapod.base;
platform = hexapod.platform;
[y_home, q] = calcQ(hexapod);
    tf = 7.5;
    
    % Specify the filename
    filename = 'Rots_raw.csv';
    % filename = 'Rots_fund.csv';
    
    % Read the CSV file
    data = readtable(filename, 'CommentStyle','#');
    
    % Extract data into variables
    time_sec = data{:, 'time'};
    z_meas_deg = data{:, 'Z_rot'};
    x_meas_deg = data{:, 'X_rot'};
    y_meas_deg = data{:, 'Y_rot'};
    z_meas_m = data{:, 'Z'};
    
    % Calculate the time step
    ts = time_sec(2) - time_sec(1);
    
    % Calculate the number of rows needed to reach tf
    num_rows = ceil(tf / ts) + 1;
    
    % Preallocate arrays
    ext_time_sec = zeros(num_rows, 1);
    ext_z_meas_deg = zeros(num_rows, 1);
    ext_x_meas_deg = zeros(num_rows, 1);
    ext_y_meas_deg = zeros(num_rows, 1);
    ext_z_meas_m = zeros(num_rows, 1);
    
    % Fill the preallocated arrays
    for i = 1:num_rows
        index = mod(i-1, length(time_sec)) + 1;
        ext_time_sec(i) = (i-1) * ts;
        ext_z_meas_deg(i) = z_meas_deg(index) - mean(z_meas_deg);
        ext_x_meas_deg(i) = x_meas_deg(index) - mean(x_meas_deg);
        ext_y_meas_deg(i) = y_meas_deg(index) - mean(y_meas_deg);
        ext_z_meas_m(i) = z_meas_m(index) - mean(z_meas_m);
    end
    
ext_z_meas_m = compute_position(ext_z_meas_m, ts, height(data):height(data):num_rows);
ext_z_meas_deg = compute_position(ext_z_meas_deg, ts, height(data):height(data):num_rows);
ext_y_meas_deg = compute_position(ext_y_meas_deg, ts, height(data):height(data):num_rows);
ext_x_meas_deg = compute_position(ext_x_meas_deg, ts, height(data):height(data):num_rows);

% idx = 100;
% A = [-0.5, 2, -3;
%     0.5, -2, 0.5;
%     -3, 2, -0.5];
% f1 = (-2*ext_z_meas_m(idx - 2)) +  (ext_z_meas_m(idx - 3)/2);
% f2 = (ext_z_meas_m(idx + 3)/2) - ext_z_meas_m(idx + 2) - ext_z_meas_m(idx - 2) + (ext_z_meas_m(idx - 3)/2);
% f3 = (ext_z_meas_m(idx + 3)/2) - 2* ext_z_meas_m(idx + 2);
% f = [f1; f2; f3];
% % x = A\f;
% x = linsolve(A,f);

% ext_z_meas_m(idx + 1) = x(1);
% ext_z_meas_m(idx ) = x(2);
% ext_z_meas_m(idx - 1) = x(3);

% disp([ext_z_meas_m(idx + 1), ext_z_meas_m(idx ), ext_z_meas_m(idx - 1)]);
   % Plot all ext variables vs time
% acc = filter([1, -2, 1],ts^2,ext_z_meas_m);
% idx2 = 101;
% n=3;
% slope = (acc(idx2+ n) - acc(idx2))/n;
% intercept = acc(idx2) - slope*idx2;
% acc(idx2 + 1) = slope * (idx2 + 1) + intercept;
% acc(idx2 + 2) = slope * (idx2 + 2) + intercept;
% 
% 
% % Second cumulative sum to approximate position
% position = ext_z_meas_m;
% position(idx2 + 1) = ext_z_meas_m(idx2)/2 + ext_z_meas_m(idx2+3) - ext_z_meas_m(idx2+4)/2;
% position(idx2 + 2) = ext_z_meas_m(idx2)/6 + ext_z_meas_m(idx2+3)*4/3 - ext_z_meas_m(idx2+4)/2;
% position(idx2) = -((acc(idx2)*ts^2) - (position(idx2 - 1) + position(idx2 + 1)))/2;
% % position(idx2+3) = -((acc(idx2+3)*ts^2) - (position(idx2 +2) + position(idx2 +3)))/2;



% figure;
% position = compute_position(ext_z_meas_m, ts, height(data));


% hold on
% plot(acc);
% plot(position,'Color','b')
% plot(ext_z_meas_m,'Color','r')
% jerk = filter([1, -2, 0, 2, -1],ts^2,ext_z_meas_m);

% title('Zdd Measured (m/s^2) vs index');
% xlabel('index');
% ylabel('Zdd Measured (m/s^2)');
% grid on;
% subplot(3,1,2)
% plot(ext_time_sec, filter([1, 0, 1],2*ts,ext_z_meas_m));
% title('Zd Measured (m/s) vs Time');
% xlabel('Time (s)');
% ylabel('Zd Measured (m/s)');
% grid on;
% subplot(3,1,3)
% plot(ext_time_sec, ext_z_meas_m);
% title('Z Measured (m) vs Time');
% xlabel('Time (s)');
% ylabel('Z Measured (m)');
% grid on;
function position = compute_position(ext_z_meas_m, ts, idx)
    % Function to calculate position based on acceleration and external measurements
    % Inputs:
    % - ext_z_meas_m: external measurements (position or displacement)
    % - ts: time step (scalar)
    % - idx: index or indices where the calculation should be performed (scalar or vector)
    
    % Step 1: Calculate the acceleration
    acc = filter([1, -2, 1], ts^2, ext_z_meas_m);
    
    % Step 2: Handle idx input (scalar or vector)
    if isscalar(idx)
        % Case when idx is scalar
        idx2 = idx;
        n = 3;  % This can be adjusted or made an input if necessary
        
        % Calculate slope and intercept for linear approximation
        slope = (acc(idx2 + n) - acc(idx2)) / n;
        intercept = acc(idx2) - slope * idx2;
        
        % Update acceleration at idx2 + 1 and idx2 + 2
        acc(idx2 + 1) = slope * (idx2 + 1) + intercept;
        acc(idx2 + 2) = slope * (idx2 + 2) + intercept;
        
        % Step 3: Second cumulative sum to approximate position
        position = ext_z_meas_m;
        position(idx2 + 1) = ext_z_meas_m(idx2) / 2 + ext_z_meas_m(idx2 + 3) - ext_z_meas_m(idx2 + 4) / 2;
        position(idx2 + 2) = ext_z_meas_m(idx2) / 6 + ext_z_meas_m(idx2 + 3) * 4 / 3 - ext_z_meas_m(idx2 + 4) / 2;
        position(idx2) = -((acc(idx2) * ts^2) - (position(idx2 - 1) + position(idx2 + 1))) / 2;
    
    elseif length(idx) > 1
        % Case when idx is a vector (iteratively apply the process for each idx value)
        position = ext_z_meas_m;
        for i = 1:length(idx)
            idx2 = idx(i);
            n = 3;
            
            % Calculate slope and intercept for linear approximation
            slope = (acc(idx2 + n) - acc(idx2)) / n;
            intercept = acc(idx2) - slope * idx2;
            
            % Update acceleration at idx2 + 1 and idx2 + 2
            acc(idx2 + 1) = slope * (idx2 + 1) + intercept;
            acc(idx2 + 2) = slope * (idx2 + 2) + intercept;
            
            % Step 3: Second cumulative sum to approximate position
            position(idx2 + 1) = ext_z_meas_m(idx2) / 2 + ext_z_meas_m(idx2 + 3) - ext_z_meas_m(idx2 + 4) / 2;
            position(idx2 + 2) = ext_z_meas_m(idx2) / 6 + ext_z_meas_m(idx2 + 3) * 4 / 3 - ext_z_meas_m(idx2 + 4) / 2;
            position(idx2) = -((acc(idx2) * ts^2) - (position(idx2 - 1) + position(idx2 + 1))) / 2;
        end
    else
        error('Index input is not valid. Provide a scalar or a vector.');
    end
end
