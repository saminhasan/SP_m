% Simulation parameters
hexapod = get_params();

% Hexapod components
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
rho = 7850; % kg/m^3
g = 9.80665; % acceleration due to gravity, m/s^2

% Mechanical parameters
N = 1; % gear ratio
J_m = 12e-6*0; % motor inertia in motor axis frame

% Calculations involving excenter.R
J_r = (platform_mass / 6) * excenter.R^2; % robot equivalent inertia in robot axis frame
% tau_0 = ((platform_mass / 6) * g * excenter.R^2); % torque due to gravity % zeroAngleTorqueCalc();
tau_0 = zeroAngleTorqueCalc(); % torque due to gravity % zeroAngleTorqueCalc();

% Motor spring properties
motor_spring_constant = ((((platform_mass / 6) * excenter.R^2) + J_m * N^2) * (2 * pi * 3)^2); % spring constant in motor axis frame
motor_spring_offset = (tau_0 / motor_spring_constant); % spring offset

% Spring constants
K_r = motor_spring_constant; % spring constant in robot axis frame
K_m = K_r / N; % spring constant in motor axis frame

% Equivalent inertia and spring constants
J_e = (J_m + J_r / N^2); % equivalent inertia in motor axis frame
K_e = K_r / N; % spring constant in motor axis frame

% Control parameters
w_traj = 3 * 2 * pi; % trajectory frequency
w_n = 10 * w_traj; % controller bandwidth
zeta = 1; % damping ratio
P = w_n^2 * J_e - K_e; % proportional gain
D = 2 * zeta * w_n * J_e; % derivative gain
w_f = w_n * 10; % filter frequency

height = excenter.R; % Height of the cylinder in meters
radius = 0.01; % Radius of the cylinder in centimeters

% Calculate the density
density_cyl = (2 * (12e-6 / N^2)) / (pi * radius^4 * height);% 12375888.37482578121125698089599609375; kg / m^3 for N = 36
coupler_mass = coupler.L * radius^2 * rho; % 0.219800000000000 kg 
excenter_mass = excenter.R * radius^2 * rho; % 0.062800000000000 kg

%
% Display the result
% fprintf('The density of the cylinder is %.64f kg/m^3\n', density_cyl);
