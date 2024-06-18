% sim params
hexapod = get_params();

excenter = hexapod.excenter;
coupler = hexapod.coupler;
base = hexapod.base;
platform = hexapod.platform;

base_points = [
base.P12L(3), base.P12L(1)
base.P12R(3), base.P12R(1)
base.P23L(3), base.P23L(1)
base.P23R(3), base.P23R(1)
base.P31L(3) base.P31L(1)
base.P31R(3), base.P31R(1)
];
platform_points =[
platform.P12L(3), platform.P12L(1)
platform.P12R(3), platform.P12R(1)
platform.P23L(3), platform.P23L(1)
platform.P23R(3), platform.P23R(1)
platform.P31L(3), platform.P31L(1)
platform.P31R(3), platform.P31R(1)
];
platform_mass = 20; % kg
rho = 7850; % kg/m^3
% Define six colors using RGB values
red = [1 0 0];
green = [0 1 0];
blue = [0 0 1];
yellow = [1 1 0];
cyan = [0 1 1];
magenta = [1 0 1];

g = 9.80665;
N = 1; % gear ratio
J_r = (platform_mass / 6) * excenter.R^2;  % robot equivalent inertia in robot axis frame
J_m = 12e-6 *0; % motor inertia in motor axis frame
tau_0 = ((platform_mass/6) * g  * excenter.R^2);
motor_spring_constant =  ((((platform_mass / 6) * excenter.R^2) + J_m * N^2 )* (2*pi*3)^2) ;%pi / 0.128; % Nm/rad
motor_spring_offset = (tau_0/motor_spring_constant);% - deg2rad(37.1);%tau_0 / motor_spring_constant + deg2rad(20);%deg2rad(20); % deg



K_r =  motor_spring_constant; %spring constant in robot axis frame
K_m = K_r / N; % spring constant in motor axis frame

J_e = (J_m + J_r/ N^2);% eq inertia motor axis frame
K_e = K_r / N; % spring constant in motor axis frame
w_traj = 3*2*pi; % trajectory frequency
w_n =  5 * w_traj; % controller bandwidth
zeta = 1;
P = w_n^2 * J_e - K_e;
D = 2 * zeta * w_n * J_e;
w_f = w_n *10;

