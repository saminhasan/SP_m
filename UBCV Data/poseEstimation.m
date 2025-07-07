clc;close all;clear all; %#ok<CLALL>
   
file_number = 1;
DATA_PATH = 'C:\Users\james\OneDrive\Desktop\Matlab Codes\SP_m\UBCV Data\Data';%% change this address 
filelist = string({dir(fullfile(DATA_PATH, '*.mat')).name});
data = load(fullfile(DATA_PATH, filelist(file_number)));
disp(['Filename: ', filelist(file_number)]);
imu_data = data.data_mtl;% Data is saved in matrix name data_mtl
n = length(imu_data);
% plotIMUData(imu_data);
imu_data(:, 1) = imu_data(:, 1) - imu_data(1,1); % Normalize time to start at zero
time = imu_data(:, 1); % Time (s)
dt = mean(diff(time)); 
fs = 1/ dt;
tf = time(end);
ts = dt;
% assume you’ve already loaded imu_data and defined time, dt, fs as you showed

% 1) Extract accel (m/s^2) and gyro (rad/s)  
accel = imu_data(:,2:4);  
gyro  = deg2rad( imu_data(:,5:7) );  % convert from °/s to rad/s

% 2) Create and run the IMU filter  
fuse = imufilter('SampleRate',fs);  
q    = fuse(accel, gyro);            % q is an n×1 quaternion array

% 3) Convert to ZYX Euler angles (yaw, pitch, roll) in degrees  
eulZYX = eulerd(q, 'ZYX', 'frame');  

% 4) Reorder to [roll, pitch, yaw]  
roll  = eulZYX(:,3) - mean(eulZYX(:,3));
pitch = eulZYX(:,2);  
yaw   = eulZYX(:,1) - mean(eulZYX(:,1));

% 5) Build your output matrix  
orientRPY = [ time, roll, pitch, yaw ];  

% orientRPY is now n×4: [time(s), roll(°), pitch(°), yaw(°)]
figure(1)
hold on
plot(time, roll, "DisplayName",'roll');
plot(time, pitch, "DisplayName",'pitch');
plot(time, yaw, "DisplayName",'yaw');
hold off
legend;
grid on