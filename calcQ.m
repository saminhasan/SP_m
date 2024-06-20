function [motorZeroy, q_rots] = calcQ()
    hexapod = get_params();
    excenter = hexapod.excenter;
    coupler = hexapod.coupler;
    base = hexapod.base;
    platform = hexapod.platform;

    y_coords = zeros(6, 1);
    q_rots = zeros(6, 4);

    % *****************************
    % calculate motor angles for 12
    % *****************************

    % Local coordinate system in base 
    thetaz = base.orientation(3);
    thetax = thetaz + pi/2;

    ux = [sin(thetax), 0, cos(thetax)];
    uy = [0, 1, 0]; 
    uz = [sin(thetaz), 0, cos(thetaz)];
    u = [ux; uy; uz]';

    % Calculate the tip coordinate in the global frame
    P12Lh = base.P12L + excenter.R * ux';
    dist_xz = sqrt((platform.P12L(1) - P12Lh(1))^2 + (platform.P12L(3) - P12Lh(3))^2);
    y_coords(1) = sqrt(coupler.L^2 - dist_xz^2);
    platform.P12L(2) = y_coords(1);

    bp = platform.P12L - P12Lh;
    bp = u \ bp;
    U = [1, 0, 0]; % body frame

    % Calculate quaternion
    q_rots(1, :) = calculate_quaternion(U, bp);

    % Calculate the tip coordinate in the global frame
    P12Rh = base.P12R - excenter.R * ux';
    dist_xz = sqrt((platform.P12R(1) - P12Rh(1))^2 + (platform.P12R(3) - P12Rh(3))^2);
    y_coords(2) = sqrt(coupler.L^2 - dist_xz^2);
    platform.P12R(2) = y_coords(2);

    bp = platform.P12R - P12Rh;
    ux = [sin(thetax - pi), 0, cos(thetax- pi)];
    uy = [0, 1, 0]; 
    uz = [sin(thetaz- pi), 0, cos(thetaz- pi)];
    u = [ux; uy; uz]';
    bp = u \ bp;

    % Calculate quaternion
    q_rots(2, :) = calculate_quaternion(U, bp);

    % *****************************
    % calculate motor angles for 23
    % *****************************

    % Local coordinate system in base 
    thetaz = base.orientation(1);
    thetax = thetaz + pi/2;

    ux = [sin(thetax),0,cos(thetax)];
    uy = [0,1,0];
    uz = [sin(thetaz),0,cos(thetaz)];
    u = [ux; uy; uz]';

    % Calculate the tip coordinate in the global frame
    P23Lh = base.P23L + excenter.R * ux';
    dist_xz = sqrt((platform.P23L(1) - P23Lh(1))^2 + (platform.P23L(3) - P23Lh(3))^2);
    y_coords(3) = sqrt(coupler.L^2 - dist_xz^2);
    platform.P23L(2) = y_coords(3);
    bp = platform.P23L - P23Lh;
    bp = u \ bp;

    % Calculate quaternion
    q_rots(3, :) = calculate_quaternion(U, bp);

    % Calculate the tip coordinate in the global frame
    P23Rh = base.P23R - excenter.R * ux';
    dist_xz = sqrt((platform.P23R(1) - P23Rh(1))^2 + (platform.P23R(3) - P23Rh(3))^2);
    y_coords(4) = sqrt(coupler.L^2 - dist_xz^2);
    platform.P23R(2) = y_coords(4);
    bp = platform.P23R - P23Rh;
    ux = [sin(thetax-pi),0,cos(thetax-pi)];
    uy = [0,1,0];
    uz = [sin(thetaz-pi),0,cos(thetaz-pi)];
    u = [ux; uy; uz]';
    bp = u \ bp;

    % Calculate quaternion
    q_rots(4, :) = calculate_quaternion(U, bp);

    % *****************************
    % calculate motor angles for 31
    % *****************************

    % Local coordinate system in base 
    thetaz = base.orientation(2);
    thetax = thetaz + pi/2;

    ux = [sin(thetax),0,cos(thetax)];
    uy = [0,1,0];
    uz = [sin(thetaz),0,cos(thetaz)];
    u = [ux; uy; uz]';

        % Calculate the tip coordinate in the global frame
    P31Lh = base.P31L + excenter.R * ux';
    dist_xz = sqrt((platform.P31L(1) - P31Lh(1))^2 + (platform.P31L(3) - P31Lh(3))^2);
    y_coords(5) = sqrt(coupler.L^2 - dist_xz^2);
    platform.P31L(2) = y_coords(5);
    bp = platform.P31L - P31Lh;
    bp = u \ bp;

    % Calculate quaternion
    q_rots(5, :) = calculate_quaternion(U, bp);

    % Calculate the tip coordinate in the global frame
    P31Rh = base.P31R - excenter.R * ux';
    dist_xz = sqrt((platform.P31R(1) - P31Rh(1))^2 + (platform.P31R(3) - P31Rh(3))^2);
    y_coords(6) = sqrt(coupler.L^2 - dist_xz^2);
    platform.P31R(2) = y_coords(6);
    bp = platform.P31R - P31Rh;
    ux = [sin(thetax-pi),0,cos(thetax-pi)];
    uy = [0,1,0];
    uz = [sin(thetaz-pi),0,cos(thetaz-pi)];
    u = [ux; uy; uz]';
    bp = u \ bp;

    % Calculate quaternion
    q_rots(6, :) = calculate_quaternion(U, bp);

    tolerance = 1e-12;
    if all(abs(diff(y_coords)) < tolerance)
        motorZeroy = mean(y_coords);
    else
        fprintf('The value of y_zero is: %.64f\n', y_coords);
        error('Not all y-coordinates are equal within the specified tolerance.');
    end

    % % Display the quaternion array
    % disp('Quaternion Array:');
    % disp(q_rots);

    % Nested function to calculate quaternion
    function quaternion = calculate_quaternion(U, bp)
        cross_product = cross(U, bp);
        angle_radians = acos(dot(U, bp) / (norm(U) * norm(bp)));
        axis_of_rotation = cross_product / norm(cross_product);
        qw = cos(angle_radians / 2);
        qx = axis_of_rotation(1) * sin(angle_radians / 2);
        qy = axis_of_rotation(2) * sin(angle_radians / 2);
        qz = axis_of_rotation(3) * sin(angle_radians / 2);
        quaternion = [qw, qx, qy, qz];
        quaternion = quaternion / norm(quaternion);
    end
end