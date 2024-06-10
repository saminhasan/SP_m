clear all; clc; close all; %#ok<CLALL>
hexapod = get_params();
dT = 1e-4;
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
%writematrix(motorData, 'motorData.txt');