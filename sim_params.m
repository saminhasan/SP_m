% sim params
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

% f = 3;
% omega_n = 2*pi*f;
% I = (platform_mass / 6) * excenter.R^2;
% k = ((platform_mass / 6) * excenter.R^2) * (2*pi*3)^2;
tau_0 =2.52 *0;%16.0;%20 *20 * pi / 360;
motor_spring_constant =  (((platform_mass / 6) * excenter.R^2) * (2*pi*3)^2) ;%pi / 0.128; % Nm/rad
motor_spring_offset = tau_0/motor_spring_constant;%tau_0 / motor_spring_constant + deg2rad(20);%deg2rad(20); % deg