clear all; clc; close all; %#ok<CLALL>
dt = 1e-4;
[motorData, pose] = generateMotorData(dt);
sim_params
out = sim('hp_v2.slx');
% out = sim('hp_v10x2DCopy.slx');
motion_comp(out, pose);
torque_calc(out);
disp(">>Done.")
% % % taus_load = out.simout.Data(:, (2:4:22) + 2);
% % % size(taus_load)
% % % ans =
% % %        40001           6
% % % taus_load(1,:)
% % % ans =
% % %     2.8764    2.8764    2.8764    2.8764    2.8764    2.8764
% % % taus_load(end,:)
% % %     2.8732    2.8745    2.8734    2.8747    2.8732    2.8746
