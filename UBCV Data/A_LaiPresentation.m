% genarate motorAngle references for bench testing
clc;
close all;
clear all; %#ok<CLALL>

hexapod = get_params();
[pose, tf, ts] = genaratePoseImu();
pose(:,3) = pose(:,3)  + hexapod.y_home;
motorAngles = generateMotorData(pose, hexapod);
simParams
out = sim("hp_v1.slx");



    
    