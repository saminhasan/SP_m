clc; close all; clear all; %#ok<CLALL>

% Time vector
ts = 0.001;
t = (0:ts:10)';
wT = warpTime(t,1);
ff = 17;
signal = sin(ff*t);
wSignal = sin(ff*wT);

figure(1);
hold on
plot(t,signal, Color='r', DisplayName='signal vs t');
plot(t,  wSignal, Color='g', DisplayName='signal vs wT');
grid on;
legend

figure(2);
hold on
% plot(t, filter([1, -2, 1], ts^2, signal), Color='b', DisplayName='Dsignal');
plot(t, filter([1, -2, 1], ts^2, wSignal), Color='w', DisplayName='Dresampled');
grid on;
legend