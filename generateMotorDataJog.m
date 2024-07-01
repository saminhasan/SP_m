
function [motorData, pose] = generateMotorDataJog(dT, tF)
if nargin < 1
    dT = 1e-4; % Default value for dT if not provided
end
[y_zero, ~] = calcQ();
% Linear time setup
time0 = (0:dT:tF)';

% Preallocate arrays
n = length(time0);
pose = struct('x', num2cell(zeros(n,1)), ...
              'y', num2cell(zeros(n,1)), ...
              'z', num2cell(zeros(n,1)), ...
              'Rx', num2cell(zeros(n,1)), ...
              'Ry', num2cell(zeros(n,1)), ...
              'Rz', num2cell(zeros(n,1)), ...
              'time0', num2cell(time0));

motorAngles = zeros(n, 6);

% Determine segment boundaries
oneThird = floor(n / 3);
twoThird = 2 * oneThird;

% Roll: 0 to -15 to +15 to 0 degrees in the first third
Rx = 15 * pi / 180 * sin(2 * pi * (0:oneThird-1)' / (2*oneThird)); % radians
for i = 1:oneThird
    pose(i).y = y_zero;
    pose(i).Rx = Rx(i);
    pose(i).Ry = 0;
    pose(i).Rz = 0;
    pose(i).time0 = time0(i);
    motorAngles(i, :) = calcMotorAngles(pose(i));
end

% Pitch: 0 to +15 to -15 to 0 degrees in the second third
Ry = 15 * pi / 180 * sin(2 * pi * (0:oneThird-1)' / (2*oneThird)); % radians
for i = oneThird+1:twoThird
    pose(i).y = y_zero;

    pose(i).Rx = 0;
    pose(i).Ry = Ry(i - oneThird);
    pose(i).Rz = 0;
    pose(i).time0 = time0(i);
    motorAngles(i, :) = calcMotorAngles(pose(i));
end

% Yaw: 0 to -15 to +15 to 0 degrees in the last third
Rz = 15 * pi / 180 * sin(2 * pi * (0:(n - twoThird - 1))' / (2*(n - twoThird))); % radians
for i = twoThird+1:n
    pose(i).y = y_zero;

    pose(i).Rx = 0;
    pose(i).Ry = 0;
    pose(i).Rz = Rz(i - twoThird);
    pose(i).time0 = time0(i);
    motorAngles(i, :) = calcMotorAngles(pose(i));
end

motorData = [time0, -motorAngles(:,1), -motorAngles(:,2), ...
             -motorAngles(:,3), -motorAngles(:,4), ...
             -motorAngles(:,5), -motorAngles(:,6)];
end
