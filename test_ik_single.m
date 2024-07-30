clear all; %#ok<CLALL>
clc;
close all;
hexapod = get_params();
[motorZeroy, q_rots] = calcQ();
pose.x = 0.05;
pose.y = 0.05 + motorZeroy;
pose.z = 0.05;
pose.Rx = deg2rad(5.0);
pose.Ry = deg2rad(5.0);
pose.Rz = deg2rad(5.0);
[motorAngles, h] = calcMotorAngles(pose,hexapod);
[motorAngles2, h2] = calcMotorAngles2(pose,hexapod);
% [motorAngles2, h2] = calcMotorAngles2(pose,hexapod);