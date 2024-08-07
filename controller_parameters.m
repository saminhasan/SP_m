N = 36; % gear ratio
J_r = (20 /6) * 0.08^2;  % robot equivalent inertia in robot axis frame
J_m = 0*12e-6; % motor inertia in motor axis frame
K_r =  motor_spring_constant; %spring constant in robot axis frame
% K_m = K_r /N; % spring constant in motor axis frame

J_e = (J_m + J_r/N^2);% eq inertia motor axis frame
K_e = K_r /N; % spring constant in motor axis frame
w_traj = 3*2*pi; % trajectory frequency
w_n =  5 * w_traj; % controller bandwidth
zeta = 1;
P = w_n^2 * J_e - K_e;
D = 2 * zeta * w_n * J_e;
w_f = w_n *10;
