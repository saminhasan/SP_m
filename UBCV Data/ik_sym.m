clc;close all;clear all; %#ok<CLALL>

syms tx ty tz rx ry rz r n real
syms Pix Piy Piz Bix Biy Biz betai real

%% Rotation matrices
Rx = [ 1,       0,        0;
       0,  cos(rx), -sin(rx);
       0,  sin(rx),  cos(rx) ];
Rz = [ cos(rz), -sin(rz), 0;
       sin(rz),  cos(rz), 0;
       0,             0,   1 ];
Ry = [ cos(ry), 0, sin(ry);
            0,  1,       0;
      -sin(ry), 0, cos(ry) ];

R = Rx * Rz * Ry;    % Combined rotation

%% Position vectors
p  = [tx; ty; tz];       % translation
Pi = [Pix; Piy; Piz];    % platform attach point i
Bi = [Bix; Biy; Biz];    % base joint point i

%% Leg vector in base frame
li   = p + R*Pi - Bi;  
lxi  = li(1);
lyi  = li(2);
lzi  = li(3);

%% Link lengths
Ld = n * r;    % connecting-rod length
% crank/servo-arm length = r

%% Intermediate terms
g_i  = lxi^2 + lyi^2 + lzi^2 - (Ld^2 - r^2);
e_i  = 2 * r * lzi;
fk_i = 2 * r * (cos(betai)*lxi + sin(betai)*lyi);

%% Closed-form angle for leg i
theta_i = asin( g_i / sqrt(e_i^2 + fk_i^2) ) ...
        - atan2( fk_i, e_i );

%% (Optional) simplify
theta_i = simplify(theta_i);

%% Display
disp('θ_i =');
pretty(theta_i)
syms z real
% 1) substitute tx=0, ty=0, rx=0, ry=0, rz=0
theta0 = subs(theta_i, [tx ty rx ry rz], [0 0 0 0 0]);

% 2) replace tz with the free variable z
theta0 = subs(theta0, tz, z);

% 3) simplify
theta0 = simplify(theta0);

% 4) display
pretty(theta0)