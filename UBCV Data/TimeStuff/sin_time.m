clc; close all; clear all; %#ok<CLALL>
% Parameters
Vm = 1;       % Maximum velocity
Am = 1;       % Maximum acceleration
Throw = 5;    % Travel endpoint
Sgn = sign(Throw);
Yf = abs(Throw);
Ys = Yf / 2;
Yaux = Vm^2 / Am;

% Determine motion parameters
if Ys <= Yaux
    Ya = Ys;
    Vw = sqrt(Ys * Am);
else
    Ya = Yaux;
    Vw = Vm;
end
To = Vw / Am;
Ta = 2 * To;
w = 2 * pi / Ta;
Ks = (Ta * Vw) / (4 * pi^2);
Tk = 2 * (Ys - Yaux) / Vm;
Ts = Ta + (Tk / 2);
Tt = 2 * Ts;

% Introduce a time step and final time
dt = 0.001;          % Sampling time
T_end = Tt;          % Final time
t = (0:dt:T_end)';   % Column vector for time

% --- Compute first half profile (0 to Ts) ---
y_half = zeros(size(t));
idx0 = (t <= 0);     % t <= 0
idx1 = (t > 0 & t <= Ta);       % 0 < t <= Ta
idx2 = (t > Ta & t <= Ts);      % Ta < t <= Ts

y_half(idx0) = 0;
y_half(idx1) = ((Am / 4) .* t(idx1).^2) + Ks .* (cos(w .* t(idx1)) - 1);
y_half(idx2) = Ys + Vw .* (t(idx2) - Ts);

% For times beyond Ts, we use symmetry:
% For t in (Ts, Tt], y(t) = Yf - y_hat(Tt - t)
% Since Tt - t maps back to [0, Ts], we can use y_half again.
idx3 = (t > Ts & t <= Tt);
t_reflected = Tt - t(idx3);
% Use interpolation or direct indexing if t matches discretization exactly.
% Since t is uniform, we can map back easily:
% The index for t_reflected can be found by round(t_reflected/dt)+1
% But we must ensure perfect alignment. If not, we can use nearest index.
ref_idx = round(t_reflected/dt) + 1;  
% Ensure indices do not exceed array bounds due to rounding
ref_idx(ref_idx < 1) = 1;
ref_idx(ref_idx > length(t)) = length(t);

y_profile = zeros(size(t));
y_profile(t <= Ts) = y_half(t <= Ts);
y_profile(idx3) = Yf - y_half(ref_idx);

% Apply sign to handle direction
y_profile = Sgn * y_profile;

% Plot the motion profile
figure;
plot(t, y_profile, 'LineWidth', 2);
grid on;
xlabel('Time (s)');
ylabel('Position (y_t)');
title('Sinusoidal Velocity Profile Motion Generation (Vectorized)');
