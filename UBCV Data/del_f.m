clc;close all;clear all; %#ok<CLALL>

[pose, tf, ts] = genaratePoseImu();
t = pose(:,1);
z = pose(:,3); % orginal z axis data
pose(:,3) = detrend(pose(:,3),2); % new z axis data
hexapod = get_params();


accz = filter([1, -2, 1],ts^2, z); % orginal acc 
acczz = filter([1, -2, 1],ts^2, pose(:,3));% new z axis acc

figure(1)
hold on 
plot(t, pose(:,3), "Color",'b', 'DisplayName','detrend');
plot(t, z, "Color",'r', 'DisplayName','raw');
plot(t,z - pose(:,3), "Color",'g', 'DisplayName',"diff" );

grid minor

legend;
hold off


figure(2)

hold on 
plot(t(3:end), acczz(3:end), "Color",'b', 'DisplayName','detrend');
plot(t, accz, "Color",'r', 'DisplayName','raw');
plot(t(3:end),accz(3:end) - acczz(3:end), "Color",'g', 'DisplayName',"diff" );
grid on
legend;
hold off
% pose(:,3) = detrend(pose(:,3),2) + hexapod.y_home;
% motorAngles = generateMotorData(pose, hexapod);
% plotMotorAngles(motorAngles);
% writematrix(motorAngles(:,1:2),filelist(1).replace(".mat","_mat"))
