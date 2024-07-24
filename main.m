clear all; clc; close all; %#ok<CLALL>

% Generate motor data and initial pose
[motorData, pose, tf, ts] = generateMotorData();
% [motorData, pose, tf, ts] = rw();
% [motorData, pose, tf, ts] = rr();
f_resonance = 2/0.75; %
% f_resonance = find_fft_peaks(pose);
% calculate, for which all motor angles are zero
% and returns the quat of the couplers for the same condition.
[y_zero, q] = calcQ();
% Hexapod components
hexapod = get_params();
excenter = hexapod.excenter;
coupler = hexapod.coupler;
base = hexapod.base;
platform = hexapod.platform;

% Base points
base_points = [
    base.P12L(3), base.P12L(1);
    base.P12R(3), base.P12R(1);
    base.P23L(3), base.P23L(1);
    base.P23R(3), base.P23R(1);
    base.P31L(3), base.P31L(1);
    base.P31R(3), base.P31R(1)
    ];

% Platform points
platform_points = [
    platform.P12L(3), platform.P12L(1);
    platform.P12R(3), platform.P12R(1);
    platform.P23L(3), platform.P23L(1);
    platform.P23R(3), platform.P23R(1);
    platform.P31L(3), platform.P31L(1);
    platform.P31R(3), platform.P31R(1)
    ];
plt_refs = atan2(platform_points(:,2),platform_points(:,1));
% Define colors for different servo arms
red = [1 0 0];
green = [0 1 0];
blue = [0 0 1];
yellow = [1 1 0];
cyan = [0 1 1];
magenta = [1 0 1];

% Motor parameters
efficiency = 0.8;
% N = 36; % gear ratio
% peak_torque = 0.4*efficiency; % motor peak torque in motor frame
% rated_torque = 0.27*efficiency; % motor rated torque in motor frame
% J_m = 12e-6; % motor inertia in motor frame

N = 9; % MIT gear ratio*********************
peak_torque = 0.28*20*efficiency; % mit motor peak torque in motor frame
rated_torque = 0.28*5*efficiency; % mit motor rated torque in motor frame
J_m = 12e-5; % mit motor inertia in motor frame

% Physical constants and parameters
g = 9.80665; % acceleration due to gravity, m/s^2
rho = 7850; % kg/m^3 density of steel
platform_mass = 20; % kg
% set up cylinder height same as excenter arm (arbitrary value),
% density as calculated to simulate reflected
height = excenter.R;
% Radius of the cylinder in meters / width of excenter arm and coupler
% arbitrary choice for simulation visualization.
radius = 0.01;
% Calculate the density for cylinder which acts as motor inertia
% in robot frame
density_cyl = (2 * (J_m * N^2)) / (pi * radius^4 * height);
coupler_mass = coupler.L * radius^2 * rho; % mass of each coupler.
excenter_mass = excenter.R * radius^2 * rho; % mass of each servo arm.



J_mr = J_m * N^2; % motor inertia in robot frame.
J_r = (platform_mass / 6) * excenter.R^2; % robot equivalent inertia in robot frame

% angular spring properties
% holding torque required to hold platform at zero motor angle using angular springs.
% tau_0 = ((platform_mass / 6) * excenter.R * g ) + (excenter_mass * g * excenter.R / 2);
tau_0 = ((platform_mass / 6) * g * excenter.R) + (excenter_mass * g * excenter.R / 2) ...
    + (coupler_mass* g * excenter.R);
% angular spring constant in robot frame to maintain resonance given
% equivalent inertia in robot frame
angular_spring_constant = ((((platform_mass / 6) * excenter.R^2) + (coupler_mass * excenter.R^2) ...
    + (excenter_mass * (excenter.R/2)^2) + J_mr) * (2 * pi * f_resonance)^2);
% angular offset needed to genarate holding torque.
angular_spring_offset = (tau_0 / angular_spring_constant);

% total inertia in robot frame
J_e = (J_mr + J_r);
% Linear Spring
% any length should work, however longer spring
% will reduce affect any axis that is not y
linear_spring_length = 1;
M_eq = (platform_mass + 6*coupler_mass + 6 * excenter_mass/2 + 6 * J_m * (N / excenter.R)^2) ;
linear_spring_constant = (2 * pi * f_resonance)^2 * M_eq;
linear_spring_offset = (((platform_mass + 6 * coupler_mass+ 6 * excenter_mass/2) * g) / linear_spring_constant);

K_e = angular_spring_constant;
% Control parameters
w_traj = f_resonance * 2 * pi; % trajectory frequency
w_n = 5 * w_traj; % controller bandwidth (approx).
zeta = 1; % damping ratio
P = w_n^2 * J_e - K_e; % proportional gain
D = 2 * zeta * w_n * J_e; % derivative gain
w_f = w_n * 10; % filter frequency


model_name = 'hp_v1.slx';
fprintf('>> Starting Simulation: %s\n', model_name);

% Run the simulation and perform calculations
out = sim(model_name);
motion_comp(out, pose);
torque_calc(out, N, rated_torque, peak_torque);
disp(">>Done.")
% torque_calc_3d(out, N, rated_torque, peak_torque);

model_name = 'hp_v2.slx';
fprintf('>> Starting Simulation: %s\n', model_name);

% Run the simulation and perform calculations
out = sim(model_name);
motion_comp(out, pose);
torque_calc(out, N, rated_torque, peak_torque);
disp(">>Done.")
model_name = 'hp_v3.slx';
fprintf('>> Starting Simulation: %s\n', model_name);

% Run the simulation and perform calculations
out = sim(model_name);
motion_comp(out, pose);
torque_calc(out, N, rated_torque, peak_torque);
disp(">>Done.")
model_name = 'hp_v4.slx';
fprintf('>> Starting Simulation: %s\n', model_name);

% Run the simulation and perform calculations
out = sim(model_name);
motion_comp(out, pose);
torque_calc(out, N, rated_torque, peak_torque);
disp(">>Done.")