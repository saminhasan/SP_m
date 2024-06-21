function [motorData, pose] = generateMotorData(dT, tF)
if nargin < 1
    dT = 1e-4; % Default value for dT if not provided
end

% Time setup
time0 = (0:dT:tF)';
time = filter(dT/2, [1, dT/2-1], time0); %#ok<NASGU>
T1 = 1;
T2 = 3;
time = T1/2 * (time0/T1 - sin(pi*time0/T1)/pi);
time(T1/dT+1:T2/dT) = time(T1/dT) + (dT:dT:T2-T1);
time(T2/dT+1:end) = time(T2/dT+1:end) + 1;

f = 1.5;
%eps = 2.6e-3;
[y_zero, ~] = calcQ();
% Vectorized calculation of pose
y = 0.045 * sin(2 * pi * 2 * f * time) + y_zero ; % y (vertical component)
z = 0.05 * sin(2 * pi * f * time) * 0; % z (horizontal component, front back)
x = 0.05 * sin(2 * pi * f * time) * 0; % x (horizontal component, left right)

Ry = 15 * pi / 180 * sin(2 * pi * f * time);
Rz = 3 * pi / 180 * sin(2 * pi * f * time);
Rx = 3 * pi / 180 * sin(2 * pi * 2 * f * time);

% Preallocate motorAngles array
motorAngles = zeros(length(time0), 6); 
pose(length(time0)) = struct('x', [], 'y', [], 'z', [], 'Rx', [], 'Ry', [], 'Rz', [], 'time0', []);

for i = 1:length(time0)
    % Store values in the pose struct array
    pose(i).x = x(i);
    pose(i).y = y(i);
    pose(i).z = z(i);
    pose(i).Rx = Rx(i);
    pose(i).Ry = Ry(i);
    pose(i).Rz = Rz(i);
    pose(i).time0 = time0(i);

    % Call calcMotorAngles with the current pose
    motorAngles(i, :) = calcMotorAngles(pose(i));
end

motorData = [time0, -motorAngles(:,1), -motorAngles(:,2), ...
             -motorAngles(:,3), -motorAngles(:,4), ...
             -motorAngles(:,5), -motorAngles(:,6)];
end