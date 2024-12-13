% hexabod simulation

clear all %#ok<CLALL>

% Excenter arm
excenter.R = 0.08;   % excenter radius
excenter.o = .00;   % excenter offset to universal joint
excenter.phi = atan2(excenter.o,excenter.R);


% connectimg rod
coupler.L=(.02+.12)*2;

% base and platform traingles are in the Z-X plane, with one side parrallel
% to X

base.L=0.3;     % Length of base
base.h=sqrt(base.L^2-(base.L/2)^2);
base.ri = base.h/3;     % inkreisradius
base.ro = 2*base.ri;    % umkreisradius
base.bearingwidth = 0.03;

base.l=0.12;    % offset of bearings from corners

base.Center = [0;0;0];  % center point
base.orientation = [0,120,240]*pi/180; % corner directions referenced to z !!  First corner in z direction!!

% platform triangle

platform.L=0.3;     % Length of base
platform.h=sqrt(platform.L^2-(platform.L/2)^2);
platform.ri = platform.h/3;     % umkreisradius
platform.ro = 2*platform.ri;    % inkreis readius
platform.bearingwidth = 0.03;

platform.l=0.13;    % offset of bearings from corners

% platform.e = .277920448115412;   % platform elevation measured in y direction!
% platform.e = .276172432;   % platform elevation measured in y direction!
platform.e = .2836456;   % platform elevation measured in y direction! this value makes the starting angle zero

platform.Center = [0;platform.e;0];  % center point
platform.orientation = [0,120,240]*pi/180; % corner directions referenced to z !!  First corner in z direction!!



% calcMotorAngles(base,platform,excenter,coupler)

% calculate angles for z movement
dT=0.01;
time0 = [0:dT:4]; %#ok<NBRAK2>
time = filter(dT/2,[1,dT/2-1],time0); %#ok<NASGU>
T1=1;
T2=3;
time =T1/2*(time0/T1-sin(pi*time0/T1)/pi);
time(T1/dT+1:T2/dT)= time(T1/dT)+[dT:dT:T2-T1]; %#ok<NBRAK1>
time(T2/dT+1:end)=time(T2/dT+1:end)+1;

f=1.5;
for i = 1:length(time)
    y=0.045*sin(2*pi*2*f*time(i));        % y (vertical component)
    z=0.05*sin(2*pi*f*time(i))*0;         % z (horizontal component, front back)
    x=0.05*sin(2*pi*f*time(i))*0;           % x (horizontal component, (left right)

    platform.Ry=15 *pi/180*sin(2*pi*f*time(i));
    platform.Rz=3*pi/180*sin(2*pi*f*time(i));
    platform.Rx=3*pi/180*sin(2*pi*2*f*time(i));

    platform.Center = [x;platform.e+y;z];  % center point

    motorAngles(i,:) = calcMotorAngles(base,platform,excenter,coupler);
end

writematrix([time0',-motorAngles(:,3)*180/pi],'motor1.txt')
writematrix([time0',-motorAngles(:,4)*180/pi],'motor2.txt')
writematrix([time0',-motorAngles(:,5)*180/pi],'motor3.txt')
writematrix([time0',-motorAngles(:,6)*180/pi],'motor4.txt')
writematrix([time0',-motorAngles(:,1)*180/pi],'motor5.txt')
writematrix([time0',-motorAngles(:,2)*180/pi],'motor6.txt')
