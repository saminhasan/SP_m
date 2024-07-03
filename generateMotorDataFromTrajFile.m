function [motorData, pose] = generateMotorDataFromTrajFile(ts)
[y_zero, ~] = calcQ();
% filename = 'pose_walk_centered.txt';
filename = 'centered_array.txt';
% Read data from CSV file
M = readmatrix(filename);

% Extract position and rotation data
xyz = M(:, 1:3);
rxyz = M(:, 4:6);
mean_position = mean(xyz, 1);
xyz = xyz - mean_position;
% Number of samples
N = size(M, 1);
tF = N * ts;



% Generate time vector
time0 = linspace(0, tF, N)';

% Preallocate pose struct array
pose = struct('x', num2cell(zeros(N,1)), ...
              'y', num2cell(zeros(N,1)), ...
              'z', num2cell(zeros(N,1)), ...
              'Rx', num2cell(zeros(N,1)), ...
              'Ry', num2cell(zeros(N,1)), ...
              'Rz', num2cell(zeros(N,1)), ...
              'time0', num2cell(time0));

% Preallocate motorAngles array
motorAngles = zeros(N, 6);

% % Populate pose struct array with data from the file
% for i = 1:N
%     pose(i).x = (xyz(i, 2));
%     pose(i).y = (xyz(i, 3) + y_zero);
%     pose(i).z = xyz(i, 1)*0.4;
%     pose(i).Rx = rxyz(i, 2);
%     pose(i).Ry = rxyz(i, 3);
%     pose(i).Rz = rxyz(i, 1);
%     pose(i).time0 = time0(i);
% 
%     % Call calcMotorAngles with the current pose
%     motorAngles(i, :) = calcMotorAngles(pose(i));
% end
% Populate pose struct array with data from the file
for i = 1:N
    pose(i).x = (xyz(i, 1));
    pose(i).y = (xyz(i, 2) + y_zero);
    pose(i).z = xyz(i, 3);
    pose(i).Rx = rxyz(i, 3);
    pose(i).Ry = rxyz(i, 2);
    pose(i).Rz = rxyz(i, 1);
    pose(i).time0 = time0(i);

    % Call calcMotorAngles with the current pose
    motorAngles(i, :) = calcMotorAngles(pose(i));
end
motorData = [time0, -motorAngles(:,1), -motorAngles(:,2), ...
             -motorAngles(:,3), -motorAngles(:,4), ...
             -motorAngles(:,5), -motorAngles(:,6)];
end
