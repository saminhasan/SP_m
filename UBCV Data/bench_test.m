%bench test
clc;
close all;
clear all; %#ok<CLALL>
%  write comparison test here.
hexapod = get_params();
file_number = 1;
DATA_PATH = 'C:\Users\james\OneDrive\Desktop\UBCV Data\Data';
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
acl = imu_data(:, 4) - 9.81;  % Z Linear Acceleration (m/s^2)
% Double integrator with Highpass
fa=1;
acHP=HPFilter(acl,fs,fa);
ZposAcHP=filter(dt^2,[1,-2,1],acHP);
% filename = 'z_reponse_position_controller.txt';
filename = 'z_response_pv.txt';
% filename = 'C:\Users\james\OneDrive\Desktop\serial_logging\teensy_log_2024-12-06_16-42-21.txt'
% filename = 'z_reponse_position_controller.txt';
motor_data = readmatrix(filename, 'NumHeaderLines', 1);
% theya_ref = inv_k(z);
% Process motor data (remove mean offset for theta and theta_ref)
Theta_ref = motor_data(:, 4);% (rad)
% Theta_ref = Theta_ref - mean(Theta_ref);
Theta = motor_data(:, 5);% (rad)
% Theta = Theta - mean(Theta);

Omega = motor_data(:, 6);% (rad/s)

yfk = fk_z(Theta);
ddyfk = filter([1, -2, 1], dt^2, yfk);
% ddyfk = -filter([-1, 1], dt, Omega) * hexapod.excenter.R;
ddyfk = LPFilter(ddyfk, dt, 100); 

f1 = figure('Name','Position','NumberTitle','off');
f1.Theme = "light";
hold on
plot(time(500:end), ZposAcHP(500:end) * 100, Color='b', DisplayName='$z_{imu}$') % ref z cm
plot(time(500:end), -yfk(500:end) * 100, Color='r', DisplayName='$z_{act}$') % Actual z in cm
grid on;
grid minor;
xlabel('Time (s)');
ylabel('Position (cm)');
% title('Position ($z$)', 'Interpreter', 'latex');
legend('Interpreter', 'latex','FontSize',14, 'Location', 'southeast');

% Plot accelerations
f2 = figure('Name','Acceleration','NumberTitle','off');
f2.Theme = "light";

hold on
plot(time(500:end-10), -ddyfk(500:end-10)/ 9.8, Color='r',DisplayName='$\ddot{z_{act}}$')
plot(time(500:end-10), acl(500:end-10)/ 9.8, Color='b',DisplayName='$\ddot{z_{imu}}$');
grid on;
grid minor;
xlabel('Time (s)');
ylabel('Acceleration (g)');
% title('Acceleration');
% title('Acceleration ($\ddot{z}$)', 'Interpreter', 'latex');
legend('Interpreter', 'latex','FontSize',16, 'Location', 'southeast');

% plot_fft(ZposAcHP,yfk, time);


f3 = figure('Name','Position','NumberTitle','off');
f3.Theme = "light";
hold on
plot(time, -rad2deg(Theta_ref), Color='b', DisplayName='$\theta_{ref}$') % ref z cm
plot(time, -rad2deg(Theta), Color='r', DisplayName='$\theta_{meas}$') % Actual z in cm
grid on;
grid minor;
xlabel('Time (s)');
ylabel('Angular position (deg)');
% title('Position ($z$)', 'Interpreter', 'latex');
legend('Interpreter', 'latex','FontSize',14, 'Location', 'southeast');
