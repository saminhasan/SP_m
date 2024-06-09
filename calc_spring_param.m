clear all; clc; close all; %#ok<CLALL>
hexapod = get_params();
dT = 1e-3;
time0 = (0:dT:4)'; 
time = filter(dT/2,[1,dT/2-1],time0); %#ok<NASGU>
T1=1;
T2=3;
time =T1/2*(time0/T1-sin(pi*time0/T1)/pi);
time(T1/dT+1:T2/dT)= time(T1/dT)+(dT:dT:T2-T1);
time(T2/dT+1:end)=time(T2/dT+1:end)+1;

f=1.5;

% Vectorized calculation of pose
y = 0.045 * sin(2 * pi * 2 * f * time) + calcZeroMotorAngle() + 2.6e-3;    % y (vertical component)
z = 0.05 * sin(2 * pi * f * time) * 0;        % z (horizontal component, front back)0
x = 0.05 * sin(2 * pi * f * time) * 0;        % x (horizontal component, left right)0

Ry = 15 * pi / 180 * sin(2 * pi * f * time);
Rz = 3 * pi / 180 * sin(2 * pi * f * time);
Rx = 3 * pi / 180 * sin(2 * pi * 2 * f * time);

% Preallocate motorAngles array
motorAngles = zeros(length(time), 6); 

for i = 1:length(time)
    pose.x = x(i);
    pose.y = y(i) ;
    pose.z = z(i);
    pose.Rx = Rx(i);
    pose.Ry = Ry(i);
    pose.Rz = Rz(i);
    % Call calcMotorAngles with scalar values
    motorAngles(i, :) = calcMotorAngles(pose);
end

motorData = [time0, -motorAngles(:,1), -motorAngles(:,2), ...
              -motorAngles(:,3), -motorAngles(:,4), ...
              -motorAngles(:,5), -motorAngles(:,6)];

sim_params
disp(">>Done.")

% Create a logical index for the time range 1 < time < 3
time_mask = time0 > 1 & time0 <= 3;

% Create a copy of motorAngles to modify
filtered_motorAngles = motorAngles;
motorAnglesmask = motorAngles(time_mask, :);
% Set rows to zero where the time is not in the valid range
filtered_motorAngles(~time_mask, :) = 0;
% Define colors for different motors
colors = ['r', 'g', 'b', 'm', 'c', 'k'];

figure;
hold on;
for i = 1:6
    plot(time0, rad2deg(filtered_motorAngles(:, i)), 'Color', colors(i), 'DisplayName', ['Motor ' num2str(i)]);
end

ylabel('Angular Position (degress)');
xlabel('Time (s)');
title('Motor Angle (degress) vs Time (s)');
legend;
grid on;
hold off;

% Sampling frequency (replace with your actual sampling frequency)
Fs = dT;
n = length(motorAnglesmask);
% Preallocate frequency array
frequencies = zeros(1, 6);

% Loop through each column and calculate the frequency
for col = 1:6
    % Perform FFT
    Y = fft(motorAnglesmask(:, col));
    
    % Compute the two-sided spectrum P2
    P2 = abs(Y / n);
    
    % Compute the single-sided spectrum P1
    P1 = P2(1:n/2+1);
    P1(2:end-1) = 2 * P1(2:end-1);
    
    % Define the frequency domain f
    f = Fs * (0:(n/2)) / n;
    
    % Find the peak frequency
    [~, idx] = max(P1);
    frequencies(col) = f(idx);
end

% Display the frequencies
disp('Frequencies for each column:');
disp(frequencies);