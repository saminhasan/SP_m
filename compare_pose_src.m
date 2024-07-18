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
[y_zero, ~] = calcQ();
% Vectorized calculation of pose
y = 0.045 * sin(2 * pi * 2 * f * (time + 0.1)) + y_zero ; % y (vertical component)

Ry = 15.43 * pi / 180 * sin(2 * pi * f * (time - 0.2));
Rz = 3 * pi / 180 * sin(2 * pi * f * (time + 0.1));
Rx = 2.5 * pi / 180 * sin(2 * pi * 2 * f * (time + 0.1));
[y_zero, ~] = calcQ();

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
    extended_z_measured_m(i) = z_measured_m(index) - mean(z_measured_m) + y_zero;
end
% Convert measured angles from degrees to radians
extended_y_measured_rad = deg2rad(extended_y_measured_deg);
extended_z_measured_rad = deg2rad(extended_z_measured_deg);
extended_x_measured_rad = deg2rad(extended_x_measured_deg);

% Plot y with z_measured_m
figure;
plot(time, y, 'b', extended_time_sec, extended_z_measured_m, 'r');
title('Comparison of y with z\_measured\_m');
xlabel('Time (s)');
ylabel('Displacement (m)');
legend('y', 'z\_measured\_m');
grid on;

% Plot Rx with extended_y_measured_rad
figure;
plot(time, Rx, 'b', extended_time_sec, extended_y_measured_rad, 'r');
title('Comparison of Rx with extended\_y\_measured\_rad');
xlabel('Time (s)');
ylabel('Rotation (rad)');
legend('Rx', 'extended\_y\_measured\_rad');
grid on;

% Plot Ry with extended_z_measured_rad
figure;
plot(time, Ry, 'b', extended_time_sec, extended_z_measured_rad, 'r');
title('Comparison of Ry with extended\_z\_measured\_rad');
xlabel('Time (s)');
ylabel('Rotation (rad)');
legend('Ry', 'extended\_z\_measured\_rad');
grid on;

% Plot Rz with extended_x_measured_rad
figure;
plot(time, Rz, 'b', extended_time_sec, extended_x_measured_rad, 'r');
title('Comparison of Rz with extended\_x\_measured\_rad');
xlabel('Time (s)');
ylabel('Rotation (rad)');
legend('Rz', 'extended\_x\_measured\_rad');
grid on;


