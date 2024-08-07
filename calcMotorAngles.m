function [motorAngles, hexapod] = calcMotorAngles(pose,hexapod)
excenter = hexapod.excenter;
coupler = hexapod.coupler;
base = hexapod.base;
platform = hexapod.platform;

% rotation order - YZX - yrp, if z axis was up it would have been - ryp
% rotate platform around X axis by pose.Rx radians
platform.P12L = (platform.P12L'*rotx(rad2deg(pose.Rx)))';
platform.P12R = (platform.P12R'*rotx(rad2deg(pose.Rx)))';

platform.P23L = (platform.P23L'*rotx(rad2deg(pose.Rx)))';
platform.P23R = (platform.P23R'*rotx(rad2deg(pose.Rx)))';

platform.P31L = (platform.P31L'*rotx(rad2deg(pose.Rx)))';
platform.P31R = (platform.P31R'*rotx(rad2deg(pose.Rx)))';

% rotate platform around Y axis by pose.Ry radians
platform.P12L = (platform.P12L'*roty(rad2deg(pose.Ry)))';
platform.P12R = (platform.P12R'*roty(rad2deg(pose.Ry)))';

platform.P23L = (platform.P23L'*roty(rad2deg(pose.Ry)))';
platform.P23R = (platform.P23R'*roty(rad2deg(pose.Ry)))';

platform.P31L = (platform.P31L'*roty(rad2deg(pose.Ry)))';
platform.P31R = (platform.P31R'*roty(rad2deg(pose.Ry)))';

% rotate platform around Z axis by pose.Rz radians
platform.P12L = (platform.P12L'*rotz(rad2deg(pose.Rz)))';
platform.P12R = (platform.P12R'*rotz(rad2deg(pose.Rz)))';

platform.P23L = (platform.P23L'*rotz(rad2deg(pose.Rz)))';
platform.P23R = (platform.P23R'*rotz(rad2deg(pose.Rz)))';

platform.P31L = (platform.P31L'*rotz(rad2deg(pose.Rz)))';
platform.P31R = (platform.P31R'*rotz(rad2deg(pose.Rz)))';

% % add platfprm center
platform.P12L = platform.P12L+[pose.x;pose.y; pose.z];
platform.P12R = platform.P12R+[pose.x;pose.y; pose.z];

platform.P23L = platform.P23L+[pose.x;pose.y; pose.z];
platform.P23R = platform.P23R+[pose.x;pose.y; pose.z];

platform.P31L = platform.P31L+[pose.x;pose.y; pose.z];
platform.P31R = platform.P31R+[pose.x;pose.y; pose.z];

platform.bearings = [platform.P12L, platform.P12R, platform.P23L, platform.P23R, platform.P31L, platform.P31R];

% disp('1 : ');
% (platform.bearings - base.bearings)

% *****************************
% calculate motor angles for 12
% *****************************

%  local coordinate system in base 
thetaz=base.orientation(3);
thetax=thetaz+pi/2;

ux = [sin(thetax),0,cos(thetax)];
uy = [0,1,0];
uz = [sin(thetaz),0,cos(thetaz)];

% distance between left bearings in global coordinate system
Delta.global = platform.P12L - base.P12L;
Delta.local = [dot(Delta.global,ux);dot(Delta.global,uy);dot(Delta.global,uz)];
a=excenter.R;
b=sqrt(Delta.local(1)^2+Delta.local(2)^2);
c=sqrt(coupler.L^2-Delta.local(3)^2);
theta = atan2(Delta.local(2),Delta.local(1));
theta = theta - acos((a^2+b^2-c^2)/2/a/b) - excenter.phi;
% transfrom to local motor angle
theta12L = - theta;


% distance between bearings in global coordinate system
Delta.global = platform.P12R - base.P12R;
Delta.local = [dot(Delta.global,ux);dot(Delta.global,uy);dot(Delta.global,uz)];


a=excenter.R;
b=sqrt(Delta.local(1)^2+Delta.local(2)^2);
c=sqrt(coupler.L^2-Delta.local(3)^2);
theta = atan2(Delta.local(2),Delta.local(1));
theta = theta + acos((a^2+b^2-c^2)/2/a/b) + excenter.phi;

% transfrom to local motor angle
theta12R = theta - pi;


% *****************************
% calculate motor angles for 23
% *****************************

%  local coordinate system in base 
thetaz=base.orientation(1);
thetax=thetaz+pi/2;

ux = [sin(thetax),0,cos(thetax)];
uy = [0,1,0];
uz = [sin(thetaz),0,cos(thetaz)];

% distance between left bearings in global coordinate system
Delta.global = platform.P23L - base.P23L;
Delta.local = [dot(Delta.global,ux);dot(Delta.global,uy);dot(Delta.global,uz)];


a=excenter.R;
b=sqrt(Delta.local(1)^2+Delta.local(2)^2);
c=sqrt(coupler.L^2-Delta.local(3)^2);
theta = atan2(Delta.local(2),Delta.local(1));
theta = theta - acos((a^2+b^2-c^2)/2/a/b) - excenter.phi;
% transfrom to local motor angle
theta23L = - theta;


% distance between bearings in global coordinate system
Delta.global = platform.P23R - base.P23R;
Delta.local = [dot(Delta.global,ux);dot(Delta.global,uy);dot(Delta.global,uz)];
a=excenter.R;
b=sqrt(Delta.local(1)^2+Delta.local(2)^2);
c=sqrt(coupler.L^2-Delta.local(3)^2);
theta = atan2(Delta.local(2),Delta.local(1));
theta = theta + acos((a^2+b^2-c^2)/2/a/b) + excenter.phi;

% transfrom to local motor angle
theta23R = theta - pi;



% *****************************
% calculate motor angles for 31
% *****************************

%  local coordinate system in base 
thetaz=base.orientation(2);
thetax=thetaz+pi/2;

ux = [sin(thetax),0,cos(thetax)];
uy = [0,1,0];
uz = [sin(thetaz),0,cos(thetaz)];

% distance between left bearings in global coordinate system
Delta.global = platform.P31L - base.P31L;
Delta.local = [dot(Delta.global,ux);dot(Delta.global,uy);dot(Delta.global,uz)];
a=excenter.R;
b=sqrt(Delta.local(1)^2+Delta.local(2)^2);
c=sqrt(coupler.L^2-Delta.local(3)^2);
theta = atan2(Delta.local(2),Delta.local(1));
theta = theta - acos((a^2+b^2-c^2)/2/a/b) - excenter.phi;
% transfrom to local motor angle
theta31L = - theta;


% distance between bearings in global coordinate system
Delta.global = platform.P31R - base.P31R;
Delta.local = [dot(Delta.global,ux);dot(Delta.global,uy);dot(Delta.global,uz)];
a=excenter.R;
b=sqrt(Delta.local(1)^2+Delta.local(2)^2);
c=sqrt(coupler.L^2-Delta.local(3)^2);
theta = atan2(Delta.local(2),Delta.local(1));
theta = theta + acos((a^2+b^2-c^2)/2/a/b) + excenter.phi;

% transfrom to local motor angle
theta31R = theta - pi;

motorAngles = [theta12L,theta12R,theta23L,theta23R,theta31L,theta31R];

end