function motorZeroy = calcZeroMotorAngle()
hexapod = get_params();
excenter = hexapod.excenter;
coupler = hexapod.coupler;
base = hexapod.base;
platform = hexapod.platform;

y_coords = zeros(6,1);

% *****************************
% calculate motor angles for 12
% *****************************

%  local coordinate system in base 
thetaz=base.orientation(3);
thetax=thetaz+pi/2;

ux = [sin(thetax),0,cos(thetax)];

% ----------------------------------
% Calculate the tip coordinate in the global frame
P12Lh = base.P12L + excenter.R * ux';
% Calculate the distance in the x-z plane
dist_xz = sqrt((platform.P12L(1) - P12Lh(1))^2 + (platform.P12L(3) - P12Lh(3))^2);
% Update the y-coordinate of platform.P12L
y_coords(1) = sqrt(coupler.L^2 - dist_xz^2);

% ----------------------------------



% ----------------------------------
% Calculate the tip coordinate in the global frame
P12Rh = base.P12R - excenter.R * ux';
% Calculate the distance in the x-z plane
dist_xz = sqrt((platform.P12R(1) - P12Rh(1))^2 + (platform.P12R(3) - P12Rh(3))^2);
% Update the y-coordinate of platform.P12L
y_coords(2)  = sqrt(coupler.L^2 - dist_xz^2) ;
% ----------------------------------


% *****************************
% calculate motor angles for 23
% *****************************

%  local coordinate system in base 
thetaz=base.orientation(1);
thetax=thetaz+pi/2;

ux = [sin(thetax),0,cos(thetax)];

% ----------------------------------
% Calculate the tip coordinate in the global frame
P23Lh = base.P23L + excenter.R * ux';
% Calculate the distance in the x-z plane
dist_xz = sqrt((platform.P23L(1) - P23Lh(1))^2 + (platform.P23L(3) - P23Lh(3))^2);
% Update the y-coordinate of platform.P12L
y_coords(3) = sqrt(coupler.L^2 - dist_xz^2);

% ----------------------------------



% ----------------------------------
% Calculate the tip coordinate in the global frame
P23Rh = base.P23R - excenter.R * ux';
% Calculate the distance in the x-z plane
dist_xz = sqrt((platform.P23R(1) - P23Rh(1))^2 + (platform.P23R(3) - P23Rh(3))^2);
% Update the y-coordinate of platform.P12L
y_coords(4) = sqrt(coupler.L^2 - dist_xz^2) ;

% ----------------------------------

% *****************************
% calculate motor angles for 31
% *****************************

%  local coordinate system in base 
thetaz=base.orientation(2);
thetax=thetaz+pi/2;
ux = [sin(thetax),0,cos(thetax)];


% ----------------------------------
% Calculate the tip coordinate in the global frame
P31Lh = base.P31L + excenter.R * ux';
% Calculate the distance in the x-z plane
dist_xz = sqrt((platform.P31L(1) - P31Lh(1))^2 + (platform.P31L(3) - P31Lh(3))^2);
% Update the y-coordinate of platform.P31L
y_coords(5) = sqrt(coupler.L^2 - dist_xz^2);

% ----------------------------------




% ----------------------------------
% Calculate the tip coordinate in the global frame
P31Rh = base.P31R - excenter.R * ux';
% Calculate the distance in the x-z plane
dist_xz = sqrt((platform.P31R(1) -P31Rh(1))^2 + (platform.P31R(3) - P31Rh(3))^2);
% Update the y-coordinate of platform.P31L
y_coords(6) = sqrt(coupler.L^2 - dist_xz^2);

% ----------------------------------

tolerance = 1e-12;
if all(abs(diff(y_coords)) < tolerance)
    fprintf('The value of y_zero is: %.64f\n', y_coords);

    motorZeroy = mean(y_coords);
else
    fprintf('The value of y_zero is: %.64f\n', y_coords);
    error('Not all y-coordinates are equal within the specified tolerance.');
end
