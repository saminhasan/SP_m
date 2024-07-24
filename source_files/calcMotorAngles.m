function motorAngles = calcMotorAngles(base,platform,excenter,coupler)

% corner locations on base
base.corner1  = base.Center + base.ro*[sin(base.orientation(1));0;cos(base.orientation(1))];
base.corner2  = base.Center + base.ro*[sin(base.orientation(2));0;cos(base.orientation(2))];
base.corner3  = base.Center + base.ro*[sin(base.orientation(3));0;cos(base.orientation(3))];

% bearing loctaions on base

base.P12L = base.corner1 + (base.corner2-base.corner1)/sqrt(dot(base.corner2-base.corner1,base.corner2-base.corner1))*base.l-base.bearingwidth/2*[sin(base.orientation(3));0;cos(base.orientation(3))];
base.P12R = base.corner2 - (base.corner2-base.corner1)/sqrt(dot(base.corner2-base.corner1,base.corner2-base.corner1))*base.l-base.bearingwidth/2*[sin(base.orientation(3));0;cos(base.orientation(3))];

base.P23L = base.corner2 + (base.corner3-base.corner2)/sqrt(dot(base.corner3-base.corner2,base.corner3-base.corner2))*base.l-base.bearingwidth/2*[sin(base.orientation(1));0;cos(base.orientation(1))];
base.P23R = base.corner3 - (base.corner3-base.corner2)/sqrt(dot(base.corner3-base.corner2,base.corner3-base.corner2))*base.l-base.bearingwidth/2*[sin(base.orientation(1));0;cos(base.orientation(1))];

base.P31L = base.corner3 + (base.corner1-base.corner3)/sqrt(dot(base.corner1-base.corner3,base.corner1-base.corner3))*base.l-base.bearingwidth/2*[sin(base.orientation(2));0;cos(base.orientation(2))];
base.P31R = base.corner1 - (base.corner1-base.corner3)/sqrt(dot(base.corner1-base.corner3,base.corner1-base.corner3))*base.l-base.bearingwidth/2*[sin(base.orientation(2));0;cos(base.orientation(2))];


% platform corners measure from platform zenter
platform.corner1  = platform.ro*[sin(platform.orientation(1));0;cos(platform.orientation(1))];
platform.corner2  = platform.ro*[sin(platform.orientation(2));0;cos(platform.orientation(2))];
platform.corner3  = platform.ro*[sin(platform.orientation(3));0;cos(platform.orientation(3))];

% bearing loctaions measured from platform center
platform.P12L = platform.corner1 + (platform.corner2-platform.corner1)/sqrt(dot(platform.corner2-platform.corner1,platform.corner2-platform.corner1))*platform.l+platform.bearingwidth/2*[sin(platform.orientation(3));0;cos(platform.orientation(3))];
platform.P12R = platform.corner2 - (platform.corner2-platform.corner1)/sqrt(dot(platform.corner2-platform.corner1,platform.corner2-platform.corner1))*platform.l+platform.bearingwidth/2*[sin(platform.orientation(3));0;cos(platform.orientation(3))];

platform.P23L = platform.corner2 + (platform.corner3-platform.corner2)/sqrt(dot(platform.corner3-platform.corner2,platform.corner3-platform.corner2))*platform.l+platform.bearingwidth/2*[sin(platform.orientation(1));0;cos(platform.orientation(1))];;
platform.P23R = platform.corner3 - (platform.corner3-platform.corner2)/sqrt(dot(platform.corner3-platform.corner2,platform.corner3-platform.corner2))*platform.l+platform.bearingwidth/2*[sin(platform.orientation(1));0;cos(platform.orientation(1))];;

platform.P31L = platform.corner3 + (platform.corner1-platform.corner3)/sqrt(dot(platform.corner1-platform.corner3,platform.corner1-platform.corner3))*platform.l+platform.bearingwidth/2*[sin(platform.orientation(2));0;cos(platform.orientation(2))];;
platform.P31R = platform.corner1 - (platform.corner1-platform.corner3)/sqrt(dot(platform.corner1-platform.corner3,platform.corner1-platform.corner3))*platform.l+platform.bearingwidth/2*[sin(platform.orientation(2));0;cos(platform.orientation(2))];;

% rotate platform around Y axis by platform.Ry radians
platform.P12L = (platform.P12L'*roty(platform.Ry/pi*180))';
platform.P12R = (platform.P12R'*roty(platform.Ry/pi*180))';

platform.P23L = (platform.P23L'*roty(platform.Ry/pi*180))';
platform.P23R = (platform.P23R'*roty(platform.Ry/pi*180))';

platform.P31L = (platform.P31L'*roty(platform.Ry/pi*180))';
platform.P31R = (platform.P31R'*roty(platform.Ry/pi*180))';

% rotate platform around Z axis by platform.Rz radians
platform.P12L = (platform.P12L'*rotz(platform.Rz/pi*180))';
platform.P12R = (platform.P12R'*rotz(platform.Rz/pi*180))';

platform.P23L = (platform.P23L'*rotz(platform.Rz/pi*180))';
platform.P23R = (platform.P23R'*rotz(platform.Rz/pi*180))';

platform.P31L = (platform.P31L'*rotz(platform.Rz/pi*180))';
platform.P31R = (platform.P31R'*rotz(platform.Rz/pi*180))';

% rotate platform around X axis by platform.Rx radians
platform.P12L = (platform.P12L'*rotx(platform.Rx/pi*180))';
platform.P12R = (platform.P12R'*rotx(platform.Rx/pi*180))';

platform.P23L = (platform.P23L'*rotx(platform.Rx/pi*180))';
platform.P23R = (platform.P23R'*rotx(platform.Rx/pi*180))';

platform.P31L = (platform.P31L'*rotx(platform.Rx/pi*180))';
platform.P31R = (platform.P31R'*rotx(platform.Rx/pi*180))';


% add platfprm center
platform.P12L = platform.P12L+platform.Center;
platform.P12R = platform.P12R+platform.Center;

platform.P23L = platform.P23L+platform.Center;
platform.P23R = platform.P23R+platform.Center;

platform.P31L = platform.P31L+platform.Center;
platform.P31R = platform.P31R+platform.Center;


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

