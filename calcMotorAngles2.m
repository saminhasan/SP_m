function [motorAngles, hexapod] = calcMotorAngles2(pose,hexapod)
    translation = [pose.x, pose.y, pose.z];
    rotation = -[pose.Rx, pose.Ry, pose.Rz];
    translation = translation(:);
    excenter = hexapod.excenter;
    coupler = hexapod.coupler;
    base = hexapod.base;
    platform = hexapod.platform;
    R = rotz(rad2deg(rotation(3))) * roty(rad2deg(rotation(2))) * rotx(rad2deg(rotation(1)));
    % Calculate leg lengths for each leg
    l = repmat(translation, 1, 6)  + (R * platform.bearings) - base.bearings;
    lll = vecnorm(l);
    lx = l(1, :);
    ly = l(2, :);
    lz = l(3, :);
    % Calculate servo angles
    ldl = coupler.L;
    lhl = excenter.R;
    g = lll.^2 - (ldl^2 - lhl^2);
    ek = 2 * lhl * ly;
    fk = 2 * lhl *(lx .* sin(base.beta) + lz .*cos(base.beta));
    motorAngles = -(asin(g ./ (sqrt(ek.^2 + fk.^2)) ) - atan2(fk, ek));
end
