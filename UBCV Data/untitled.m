clc; close all; clear all; %#ok<CLALL>
% random tests
% Time vector
ts = 0.001;
tf = 10;
t = (0:ts:10)';
wT = warpTime(t,1);
ff = 17;
signal = sin(ff*t);
signal = signal.*smoothStep(t, ts, 2).*smoothStep(t, tf, tf-1);
figure(1);
hold on
plot(t,signal, Color='r', DisplayName='signal vs t');
grid on;
legend