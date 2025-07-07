function y = fk_z(motorAngles)
    hexapod = get_params();
    excenter = hexapod.excenter;
    coupler = hexapod.coupler;
    base = hexapod.base;
    platform = hexapod.platform;
    excenter_vector = [0.0, 0.0, excenter.b]';
    numRows = size(motorAngles, 1);
    y = zeros(numRows, 1); 
    
    for j = 1:numRows
        angle = motorAngles(j);
        excenter_tips = zeros(3, 6);
        bt = zeros(3, 6);
        
        for i = 1:6
            excenter_tips(:, i) = base.bearings(:, i) + roty(rad2deg(base.beta(i))) * excenter_vector;
            ux = roty(rad2deg(base.beta(i))) * [0.0, 0.0, 1.0]'; % Unit vector along servo arm
            uz = roty(rad2deg(base.beta(i))) * [1.0, 0.0, 0.0]'; % Servo motor axis
            ur = rodrigues_rot(ux, uz, angle); % Rotated vector
            ur = ur / vecnorm(ur);
            bt(:, i) = (ur * vecnorm(excenter_vector)) + base.bearings(:, i);
        end
        dist_zx = (platform.bearings(3, :) - bt(3, :)).^2 + ...
                  (platform.bearings(1, :) - bt(1, :)).^2;
        y(j) = mean(sqrt(coupler.L^2 - dist_zx) + bt(2, :)) - hexapod.y_home;
    end
end