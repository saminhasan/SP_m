 clear all; clc; close all; %#ok<CLALL>

% Generate motor data and initial pose
% [motorData, pose, tf, ts] = generateMotorData();
% [motorData, pose, tf, ts] = rw();
[motorData, pose, tf, ts] = rr();
[y_zero, q] = calcQ(); % returns y_zero, for which all motor angles are zero and returns the quat of the couplers 

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

% Define colors using RGB values
red = [1 0 0];
green = [0 1 0];
blue = [0 0 1];
yellow = [1 1 0];
cyan = [0 1 1];
magenta = [1 0 1];

% Physical constants and parameters
platform_mass = 20; % kg
height = excenter.R; % Height of the cylinder in meters 
radius = 0.01; % Radius of the cylinder in meters / width of excenter arm and coupler.
rho = 7850; % kg/m^3 density of steel
g = 9.80665; % acceleration due to gravity, m/s^2
coupler_mass = coupler.L * radius^2 * rho;
excenter_mass = excenter.R * radius^2 * rho;

% Mechanical parameters
N = 36; % gear ratio
J_m = 12e-6; % motor inertia in motor frame
J_mr = J_m * N^2;
J_r = (platform_mass / 6) * excenter.R^2; % robot equivalent inertia in robot frame
tau_0 = ((platform_mass / 6 + coupler_mass) * excenter.R * g ) + (excenter_mass * g * excenter.R / 2);

% Motor spring properties
motor_spring_constant = ((((platform_mass / 6) * excenter.R^2) + J_mr) * (2 * pi * 2)^2); % spring constant in motor frame
motor_spring_offset = (tau_0 / motor_spring_constant); % spring offset

% Spring constants
K_r = motor_spring_constant; % spring constant in robot frame
K_m = K_r / N; % spring constant in motor frame

% Equivalent inertia and spring constants in robot frame
J_e = (J_mr + J_r); % equivalent inertia in motor frame
K_e = K_r; % spring constant in motor frame

% Control parameters
w_traj = 3 * 2 * pi; % trajectory frequency
w_n = 5 * w_traj; % controller bandwidth
zeta = 1; % damping ratio
P = w_n^2 * J_e - K_e; % proportional gain
D = 2 * zeta * w_n * J_e; % derivative gain
w_f = w_n * 10; % filter frequency

% Calculate the density for cylinder which acts as motor inertia
density_cyl = (2 * (12e-6 * 36^2)) / (pi * radius^4 * height);

% Run the simulation and perform calculations
out = sim('hp_v1.slx');
% out = sim('hp_v2.slx');
motion_comp(out, pose);
torque_calc(out, N);
% 
disp(">>Done")
