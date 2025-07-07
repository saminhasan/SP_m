function [motorAngles] = ik_hexapod(pose,hexapod)
    translation = [pose(1), pose(2), pose(3)]';
    rotation = -[pose(4), pose(5), pose(6)]';

    excenter = hexapod.excenter;
    coupler = hexapod.coupler;
    base = hexapod.base;
    platform = hexapod.platform;
    % rot functions expect args in degrees
    R = rotz(rad2deg(rotation(3))) * roty(rad2deg(rotation(2))) * rotx(rad2deg(rotation(1)));

    l = repmat(translation, 1, 6)  + (R * platform.bearings) - base.bearings;
    lll = vecnorm(l);
    lx = l(1, :);
    ly = l(2, :);
    lz = l(3, :);
    ldl = coupler.L;
    lhl = excenter.R;

    g = lll.^2 - (ldl^2 - lhl^2);
    ek = 2 * lhl * ly;
    fk = 2 * lhl *(lx .* sin(base.beta) + lz .*cos(base.beta));

    motorAngles = -(asin(g ./ (sqrt(ek.^2 + fk.^2)) ) - atan2(fk, ek));
end