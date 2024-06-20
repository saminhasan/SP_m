clear all; clc; close all; %#ok<CLALL>
dt = 1e-4;
tf = 4;
[motorData, pose] = generateMotorData(dt);
[y_zero, q] = calcQ();
sim_params

out = sim('hp_v2.slx');
% out = sim('hp_val.slx');
% out = sim('hp_v10x2DCopy.slx');
motion_comp(out, pose);
torque_calc(out);
disp(">>Done")

% % v2 model(with controller)
% %
% % taus_load = out.simout.Data(:, (2:4:22) + 2);
% % taus_load(end,:)
% % ans =
% %    2.808744059233134   2.808744174417760   2.808744085309209   2.808744202443711   2.808743976658388   2.808744284122025
% % taus_load(1,:)
% % ans =
% %    1.0e-06 *
% %    0.204882902924550  -0.112133029877132   0.135215289433333  -0.032223923559998   0.356715863210433  -0.260082993228327


% % v1 model(with angle input auto torque)
% % 
% % taus_load = out.simout.Data(:, (2:4:22) + 2);
% % taus_load(end,:)
% % 
% % ans =
% % 
% %    2.812181105066641   2.812181105066751   2.812181105066640   2.812181105066636   2.812181105066775   2.812181105066577
% % 
% % taus_load(1,:)
% % 
% % ans =
% % 
% %    2.812181105066659   2.812181105066763   2.812181105066607   2.812181105066663   2.812181105066785   2.812181105066564
