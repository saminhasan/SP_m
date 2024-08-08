function [motorZeroy, q_rots] = calcQ(hexapod)
    q_rots = zeros(6, 4);
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

    U = [1, 0, 0]; % body frame


    % bt = excenter_tips - base.bearings;
    tp = platform.bearings - excenter_tips;
    % bt =bt ./ vecnorm(bt, 2, 1);
    
    for i = 1:6
        ux = roty(rad2deg(base.beta(i)))*[0, 0, 1]';
        uy = [0, 1, 0]';
        uz = cross(ux, uy);
        ux = rodrigues_rot(ux, uz, excenter.phi);
        uy = rodrigues_rot(uy, uz, excenter.phi);

        u = [ux uy uz];
        v1 = u\tp(:,i);
        q_rots(i, :) = calculate_quaternion(U, v1);
    end
end