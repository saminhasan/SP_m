% genarate motorAngle references for bench testing + code migration
clc;close all;clear all; %#ok<CLALL>

hexapod = get_params();
% [pose, tf, ts] = genaratePoseSine();
% [pose, tf, ts] = genaratePoseImu();
[pose, tf, ts] = genaratePoseTK();
pose(:,3) = pose(:,3)  + hexapod.y_home;
motorAngles = generateMotorData(pose, hexapod);

simParams
% out = sim("hp_v3.slx"); %% no controller
out = sim("hp_v4.slx");
motion_comp(out, pose);
torque_calc(out, N, rated_torque, peak_torque);

% writematrix(motorAngles(:,1:2),filelist(1).replace(".mat","_mat"))

% tsim = out.pose_simscape.Time;
% ys = out.pose_simscape.Data(:,2);
% yfk = fk_z(motorAngles);
% figure(1)
% hold on;
% plot(pose(:,1), pose(:,3), Color='b', DisplayName='sim_Z');
% plot(tsim, ys, Color='r', DisplayName='FK_Z');
% legend