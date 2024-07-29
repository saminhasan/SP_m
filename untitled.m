% Clear all variables, close all figures, and clear command window
clear all; clc; close all; %#ok<CLALL>

% Get parameters and calculate motor zero angles and tips
hexapod = get_params();
[motor_zero, tips] = calcZeroMotorAngle();

% Assign motor zero angles to the platform points
hexapod.platform.P12L(2) = motor_zero;
hexapod.platform.P12R(2) = motor_zero;
hexapod.platform.P23L(2) = motor_zero;
hexapod.platform.P23R(2) = motor_zero;
hexapod.platform.P31L(2) = motor_zero;
hexapod.platform.P31R(2) = motor_zero;
hexapod.platform.corner1(2) = motor_zero;
hexapod.platform.corner2(2) = motor_zero;
hexapod.platform.corner3(2) = motor_zero;

% Assign tips to the corresponding base points
hexapod.base.P12Lh = tips(:,1);
hexapod.base.P12Rh = tips(:,2);
hexapod.base.P23Lh = tips(:,3);
hexapod.base.P23Rh = tips(:,4);
hexapod.base.P31Lh = tips(:,5);
hexapod.base.P31Rh = tips(:,6);

% Create a 3D figure
figure;
hold on;
grid on;
axis equal;
xlabel('X');
ylabel('Y');
zlabel('Z');
title('Hexapod 3D Scatter Plot');

% Plot base points
basePoints = [hexapod.base.corner1, hexapod.base.corner2, hexapod.base.corner3, ...
    hexapod.base.P12L, hexapod.base.P12R, hexapod.base.P23L, hexapod.base.P23R, ...
    hexapod.base.P31L, hexapod.base.P31R, hexapod.base.P12Lh, hexapod.base.P12Rh, ...
    hexapod.base.P23Lh, hexapod.base.P23Rh, hexapod.base.P31Lh, hexapod.base.P31Rh];

scatter3(basePoints(1,:), basePoints(2,:), basePoints(3,:), 'filled');

% Plot platform points
platformPoints = [hexapod.platform.corner1, hexapod.platform.corner2, hexapod.platform.corner3, ...
    hexapod.platform.P12L, hexapod.platform.P12R, hexapod.platform.P23L, hexapod.platform.P23R, ...
    hexapod.platform.P31L, hexapod.platform.P31R];

scatter3(platformPoints(1,:), platformPoints(2,:), platformPoints(3,:), 'filled');

% Connect base corners
fill3([hexapod.base.corner1(1), hexapod.base.corner2(1), hexapod.base.corner3(1)], ...
      [hexapod.base.corner1(2), hexapod.base.corner2(2), hexapod.base.corner3(2)], ...
      [hexapod.base.corner1(3), hexapod.base.corner2(3), hexapod.base.corner3(3)], 'r', 'FaceAlpha', 0.3);

% Connect platform corners
fill3([hexapod.platform.corner1(1), hexapod.platform.corner2(1), hexapod.platform.corner3(1)], ...
      [hexapod.platform.corner1(2), hexapod.platform.corner2(2), hexapod.platform.corner3(2)], ...
      [hexapod.platform.corner1(3), hexapod.platform.corner2(3), hexapod.platform.corner3(3)], 'b', 'FaceAlpha', 0.3);

% Connect platform points
fill3([hexapod.platform.P12L(1), hexapod.platform.P12R(1), hexapod.platform.P23L(1), hexapod.platform.P23R(1), hexapod.platform.P31L(1), hexapod.platform.P31R(1)], ...
      [hexapod.platform.P12L(2), hexapod.platform.P12R(2), hexapod.platform.P23L(2), hexapod.platform.P23R(2), hexapod.platform.P31L(2), hexapod.platform.P31R(2)], ...
      [hexapod.platform.P12L(3), hexapod.platform.P12R(3), hexapod.platform.P23L(3), hexapod.platform.P23R(3), hexapod.platform.P31L(3), hexapod.platform.P31R(3)], 'g', 'FaceAlpha', 0.3);

% Connect base points to their corresponding elevated points
plot3([hexapod.base.P12L(1), hexapod.base.P12Lh(1)], [hexapod.base.P12L(2), hexapod.base.P12Lh(2)], [hexapod.base.P12L(3), hexapod.base.P12Lh(3)], 'k');
plot3([hexapod.base.P12R(1), hexapod.base.P12Rh(1)], [hexapod.base.P12R(2), hexapod.base.P12Rh(2)], [hexapod.base.P12R(3), hexapod.base.P12Rh(3)], 'k');
plot3([hexapod.base.P23L(1), hexapod.base.P23Lh(1)], [hexapod.base.P23L(2), hexapod.base.P23Lh(2)], [hexapod.base.P23L(3), hexapod.base.P23Lh(3)], 'k');
plot3([hexapod.base.P23R(1), hexapod.base.P23Rh(1)], [hexapod.base.P23R(2), hexapod.base.P23Rh(2)], [hexapod.base.P23R(3), hexapod.base.P23Rh(3)], 'k');
plot3([hexapod.base.P31L(1), hexapod.base.P31Lh(1)], [hexapod.base.P31L(2), hexapod.base.P31Lh(2)], [hexapod.base.P31L(3), hexapod.base.P31Lh(3)], 'k');
plot3([hexapod.base.P31R(1), hexapod.base.P31Rh(1)], [hexapod.base.P31R(2), hexapod.base.P31Rh(2)], [hexapod.base.P31R(3), hexapod.base.P31Rh(3)], 'k');

% Connect platform points to their corresponding base elevated points
plot3([hexapod.platform.P12L(1), hexapod.base.P12Lh(1)], [hexapod.platform.P12L(2), hexapod.base.P12Lh(2)], [hexapod.platform.P12L(3), hexapod.base.P12Lh(3)], 'k');
plot3([hexapod.platform.P12R(1), hexapod.base.P12Rh(1)], [hexapod.platform.P12R(2), hexapod.base.P12Rh(2)], [hexapod.platform.P12R(3), hexapod.base.P12Rh(3)], 'k');
plot3([hexapod.platform.P23L(1), hexapod.base.P23Lh(1)], [hexapod.platform.P23L(2), hexapod.base.P23Lh(2)], [hexapod.platform.P23L(3), hexapod.base.P23Lh(3)], 'k');
plot3([hexapod.platform.P23R(1), hexapod.base.P23Rh(1)], [hexapod.platform.P23R(2), hexapod.base.P23Rh(2)], [hexapod.platform.P23R(3), hexapod.base.P23Rh(3)], 'k');
plot3([hexapod.platform.P31L(1), hexapod.base.P31Lh(1)], [hexapod.platform.P31L(2), hexapod.base.P31Lh(2)], [hexapod.platform.P31L(3), hexapod.base.P31Lh(3)], 'k');
plot3([hexapod.platform.P31R(1), hexapod.base.P31Rh(1)], [hexapod.platform.P31R(2), hexapod.base.P31Rh(2)], [hexapod.platform.P31R(3), hexapod.base.P31Rh(3)], 'k');

hold off;
% Save the points to a text file
% save_points_to_file(hexapod, 'hexapod_points.txt');
% 
% function save_points_to_file(hexapod, filename)
%     % Open the text file for writing
%     fileID = fopen(filename, 'w');
% 
%     % Define the points to save
%     points = {
%         'base.corner1', hexapod.base.corner1;
%         'base.corner2', hexapod.base.corner2;
%         'base.corner3', hexapod.base.corner3;
%         'base.P12L', hexapod.base.P12L;
%         'base.P12R', hexapod.base.P12R;
%         'base.P23L', hexapod.base.P23L;
%         'base.P23R', hexapod.base.P23R;
%         'base.P31L', hexapod.base.P31L;
%         'base.P31R', hexapod.base.P31R;
%         'base.P12Lh', hexapod.base.P12Lh;
%         'base.P12Rh', hexapod.base.P12Rh;
%         'base.P23Lh', hexapod.base.P23Lh;
%         'base.P23Rh', hexapod.base.P23Rh;
%         'base.P31Lh', hexapod.base.P31Lh;
%         'base.P31Rh', hexapod.base.P31Rh;
%         'platform.corner1', hexapod.platform.corner1;
%         'platform.corner2', hexapod.platform.corner2;
%         'platform.corner3', hexapod.platform.corner3;
%         'platform.P12L', hexapod.platform.P12L;
%         'platform.P12R', hexapod.platform.P12R;
%         'platform.P23L', hexapod.platform.P23L;
%         'platform.P23R', hexapod.platform.P23R;
%         'platform.P31L', hexapod.platform.P31L;
%         'platform.P31R', hexapod.platform.P31R;
%     };
% 
%     % Loop through the points and write to the file in the required format
%     for i = 1:size(points, 1)
%         varValue = points{i, 2};
%         fprintf(fileID, '%f, %f, %f\n', varValue(1)*1000, varValue(2)*1000, varValue(3)*1000);
%     end
% 
%     % Close the text file
%     fclose(fileID);
% end
