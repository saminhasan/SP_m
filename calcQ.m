function [motorZeroy, q_rots] = calcQ()
    % clc; clear all; %#ok<CLALL>
    hexapod = get_params();
    excenter = hexapod.excenter;
    coupler = hexapod.coupler;
    base = hexapod.base;
    platform = hexapod.platform;

    excenter_vector = [0, 0, excenter.R];
    excenter_tips = zeros(3, length(base.beta)); % Preallocate the array
    for i = 1:6
        excenter_tips(:, i) = base.bearings(:, i) + roty(rad2deg(base.beta(i))) * excenter_vector';
    end
    % Calculate dist_xy
    dist_zx = (excenter_tips(3,:) - platform.bearings(3,:)).^2 + (excenter_tips(1,:) - platform.bearings(1,:)).^2;
    
    % Calculate y_zero
    y_min = mean(sqrt(coupler.L^2 - dist_zx));
    motorZeroy = y_min;
    q_rots = zeros(6, 4);
    U = [1, 0, 0]; % body frame

    for i = 1:6
        platform.bearings(2,i) = motorZeroy;
        bp = roty(rad2deg(base.beta(i) - pi/2)) \ (platform.bearings(:,i) - excenter_tips(:,i));
        % Calculate quaternion
        q_rots(i, :) = calculate_quaternion(U, bp);
    end
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

% motorZeroy =
% 
%    0.263438797446390
% 
% 
% q_rots =
% 
%    0.582482372510718                   0  -0.091970900922745   0.807623451304966
%    0.582482372510718                   0   0.091970900922745   0.807623451304966
%    0.582482372510718                   0  -0.091970900922745   0.807623451304966
%    0.582482372510718                   0   0.091970900922745   0.807623451304966
%    0.582482372510718                   0  -0.091970900922745   0.807623451304966
%    0.582482372510718                   0   0.091970900922745   0.807623451304966