clc;close all;clear all; %#ok<CLALL>

% Parameters
time_constant = 0.1;
rise_time     = 0.01;
n             = 16;
Ts= 1e-3;
time_vector = (0:Ts:1/gammaincinv(0.5, n)/2);


% f_t = @(t, n, K) n .* gamma(n) .* gammainc(t./K, n) ./ gamma(n+1);


% 1) time to reach y = 1−e^(−1) “time constant”
K = time_constant / gammaincinv(1-exp(-1), n);
% 2) time to  y=10→y=90% rise time
% K = rise_time / (gammaincinv(0.9, n) - gammaincinv(0.1, n));
% 3) time to reach 99%
% K = 0.1/gammaincinv(0.99, n);


% Define transfer function
s = tf('s');
H = (1 / (1 + K * s))^n;
% z-Domain transfer function
% alpha = 2*K/Ts;
% z     = tf('z', Ts);
% H    = ((z+1)/((1+alpha)*z + (1-alpha)))^n;

% Plot step response and show rise time
info = stepinfo(H);
fprintf('Rise time: %.4f s\n', info.RiseTime);
[y, tOut] = step(H, time_vector);
figure();
dy = filter([1,-2,1], 1e-3, y);
plot(tOut, y, tOut, dy);
grid on

bandWidth = (sqrt((2^(1/n)) -1)/ K); % rad/s
fprintf('Bandwidth: %.2f rad/s (%.2f Hz) | Analytically : %.2f rad/s\n', bandwidth(H), bandwidth(H)/ (2*pi), bandWidth);

figure();
freq_start  = 1;        % start freq (Hz)
freq_end    = bandWidth;        % end   freq (Hz)

% 1) sinusoidal linear chirp (like scipy.signal.chirp)
dt          = Ts;    % sample time (set to your Ts)
T           = 10.0;      % total duration
t           = 0:dt:T;   % time vector
% chirp_signal = chirp(t, freq_start, T, freq_end, 'linear');
% u = chirp(t, freq_start, T, freq_end, 'linear');
% 2) if you want a square‐wave chirp instead, compute its phase φ(t)
phi = 2*pi*( freq_start.*t + (freq_end - freq_start)./(2*T).*t.^2 );
u = square( phi );
y = lsim(H,u,t);
plot( t, u,'b', t, y,'r');
legend('filter output','filter input')
grid on