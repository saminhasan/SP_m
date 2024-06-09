function hexapod = get_params()
% param start

% Excenter arm
excenter.R = 0.08;   % excenter radius
excenter.o = .00;   % excenter offset to universal joint
excenter.phi = atan2(excenter.o, excenter.R);

% Connecting rod
coupler.L = (.02 + .12) * 2;

% Base and platform triangles are in the Z-X plane, with one side parallel to X
base.L = 0.3; % Length of base
base.h = sqrt(base.L^2 - (base.L / 2)^2);
base.ri = base.h / 3; % Inkreisradius
base.ro = 2 * base.ri; % Umkreisradius
base.bearingwidth = 0.03;
base.l = 0.12; % Offset of bearings from corners
base.Center = [0; 0; 0]; % Center point
base.orientation = [0, 120, 240] * pi / 180; % Corner directions referenced to z !! First corner in z direction!!

% Corner locations on base
base.corner1 = base.Center + base.ro * [sin(base.orientation(1)); 0; cos(base.orientation(1))];
base.corner2 = base.Center + base.ro * [sin(base.orientation(2)); 0; cos(base.orientation(2))];
base.corner3 = base.Center + base.ro * [sin(base.orientation(3)); 0; cos(base.orientation(3))];

% Bearing locations on base
base.P12L = base.corner1 + (base.corner2 - base.corner1) / sqrt(dot(base.corner2 - base.corner1, base.corner2 - base.corner1)) * base.l - base.bearingwidth / 2 * [sin(base.orientation(3)); 0; cos(base.orientation(3))];
base.P12R = base.corner2 - (base.corner2 - base.corner1) / sqrt(dot(base.corner2 - base.corner1, base.corner2 - base.corner1)) * base.l - base.bearingwidth / 2 * [sin(base.orientation(3)); 0; cos(base.orientation(3))];

base.P23L = base.corner2 + (base.corner3 - base.corner2) / sqrt(dot(base.corner3 - base.corner2, base.corner3 - base.corner2)) * base.l - base.bearingwidth / 2 * [sin(base.orientation(1)); 0; cos(base.orientation(1))];
base.P23R = base.corner3 - (base.corner3 - base.corner2) / sqrt(dot(base.corner3 - base.corner2, base.corner3 - base.corner2)) * base.l - base.bearingwidth / 2 * [sin(base.orientation(1)); 0; cos(base.orientation(1))];

base.P31L = base.corner3 + (base.corner1 - base.corner3) / sqrt(dot(base.corner1 - base.corner3, base.corner1 - base.corner3)) * base.l - base.bearingwidth / 2 * [sin(base.orientation(2)); 0; cos(base.orientation(2))];
base.P31R = base.corner1 - (base.corner1 - base.corner3) / sqrt(dot(base.corner1 - base.corner3, base.corner1 - base.corner3)) * base.l - base.bearingwidth / 2 * [sin(base.orientation(2)); 0; cos(base.orientation(2))];

% Platform triangle
platform.L = 0.3; % Length of base
platform.h = sqrt(platform.L^2 - (platform.L / 2)^2);
platform.ri = platform.h / 3; % Umkreisradius
platform.ro = 2 * platform.ri; % Inkreisradius
platform.bearingwidth = 0.03;
platform.l = 0.13; % Offset of bearings from corners
platform.orientation = [0, 120, 240] * pi / 180; % Corner directions referenced to z !! First corner in z direction!!

% Platform corners measure from platform center
platform.corner1 = platform.ro * [sin(platform.orientation(1)); 0; cos(platform.orientation(1))];
platform.corner2 = platform.ro * [sin(platform.orientation(2)); 0; cos(platform.orientation(2))];
platform.corner3 = platform.ro * [sin(platform.orientation(3)); 0; cos(platform.orientation(3))];

platform.P12L = platform.corner1 + (platform.corner2 - platform.corner1) / sqrt(dot(platform.corner2 - platform.corner1, platform.corner2 - platform.corner1)) * platform.l + platform.bearingwidth / 2 * [sin(platform.orientation(3)); 0; cos(platform.orientation(3))];
platform.P12R = platform.corner2 - (platform.corner2 - platform.corner1) / sqrt(dot(platform.corner2 - platform.corner1, platform.corner2 - platform.corner1)) * platform.l + platform.bearingwidth / 2 * [sin(platform.orientation(3)); 0; cos(platform.orientation(3))];

platform.P23L = platform.corner2 + (platform.corner3 - platform.corner2) / sqrt(dot(platform.corner3 - platform.corner2, platform.corner3 - platform.corner2)) * platform.l + platform.bearingwidth / 2 * [sin(platform.orientation(1)); 0; cos(platform.orientation(1))];
platform.P23R = platform.corner3 - (platform.corner3 - platform.corner2) / sqrt(dot(platform.corner3 - platform.corner2, platform.corner3 - platform.corner2)) * platform.l + platform.bearingwidth / 2 * [sin(platform.orientation(1)); 0; cos(platform.orientation(1))];

platform.P31L = platform.corner3 + (platform.corner1 - platform.corner3) / sqrt(dot(platform.corner1 - platform.corner3, platform.corner1 - platform.corner3)) * platform.l + platform.bearingwidth / 2 * [sin(platform.orientation(2)); 0; cos(platform.orientation(2))];
platform.P31R = platform.corner1 - (platform.corner1 - platform.corner3) / sqrt(dot(platform.corner1 - platform.corner3, platform.corner1 - platform.corner3)) * platform.l + platform.bearingwidth / 2 * [sin(platform.orientation(2)); 0; cos(platform.orientation(2))];

% param end

hexapod.excenter = excenter;
hexapod.coupler = coupler;
hexapod.base = base;
hexapod.platform = platform;

end
