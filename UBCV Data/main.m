% genarate motorAngle references for bench testing + code migration
clc;close all;clear all; %#ok<CLALL>

hexapod = get_params();
% [pose, tf, ts] = genaratePoseSine();
% [pose, tf, ts] = genaratePoseImu();
% [pose, tf, ts] = genaratePoseTK();
[pose, tf, ts]= genPose();
plotPose(pose);
pose(:,3) = pose(:,3)  + hexapod.y_home;
motorAngles = generateMotorData(pose, hexapod);
plotMotorAngles(motorAngles);
simParams
% out = sim("hp_v3.slx"); %% no controller
out = sim("hp_v4.slx");
motion_comp(out, pose);
torque_calc(out, N, rated_torque, peak_torque);
% writematrix(motorAngles(:,2:7),'C:\Users\james\OneDrive\Desktop\newSerial\Python\data\TK_6x_1_5g_no_cap.txt');
% writematrix(motorAngles(:,1:2),filelist(1).replace(".mat","_mat"))
% writematrix(motorAngles(:,2:7),'TK_6x_1_5g.txt');
% tsim = out.pose_simscape.Time;
% ys = out.pose_simscape.Data(:,2);
% yfk = fk_z(motorAngles);
