function [motorZeroy, q_rots] = calcQ()
    hexapod = get_params();
    excenter = hexapod.excenter;
    coupler = hexapod.coupler;
    base = hexapod.base;
    platform = hexapod.platform;

    excenter_vector = [0, excenter.h, excenter.b]';
    excenter_tips = zeros(3, 6); % Preallocate the array
    for i = 1:6
        excenter_tips(:, i) = base.bearings(:, i) + roty(rad2deg(base.beta(i))) * excenter_vector;
    end
    % Calculate dist_xy
    dist_zx = (excenter_tips(3,:) - platform.bearings(3,:)).^2 + (excenter_tips(1,:) - platform.bearings(1,:)).^2;
    
    % Calculate y_zero
    motorZeroy = mean(sqrt(coupler.L^2 - dist_zx)) + excenter.h;
    platform.bearings(2,:) = motorZeroy;

    q_rots = zeros(6, 4);
    U = [1, 0, 0]; % body frame


    bt = excenter_tips - base.bearings;
    tp = platform.bearings - excenter_tips;
    bt =bt ./ vecnorm(bt, 2, 1);
    
    for i = 1:6
        ux = bt(:,i);
        uz = (roty(rad2deg(   (pi/2)*(-1^i)    )))*ux;
        uz = uz / norm(uz);
        uy = -cross(ux,uz);
        uy = uy / norm(uy);
        u = [ux uy uz];
        v1 = u\tp(:,i);
        q_rots(i, :) = calculate_quaternion(U, v1);
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