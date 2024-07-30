function [motorAngles, hexapod] = calcMotorAngles3(pose,hexapod)
    translation = [pose.x, pose.y, pose.z]';
    rotation = -[pose.Rx, pose.Ry, pose.Rz]';
    excenter = hexapod.excenter;
    coupler = hexapod.coupler;
    base = hexapod.base;
    platform = hexapod.platform;
    base.beta = deg2rad([-30,150, 90, 270, 210, 390]);
    R = rotz(rad2deg(rotation(3))) * roty(rad2deg(rotation(2))) * rotx(rad2deg(rotation(1)));
    % Calculate leg lengths for each leg
    l = repmat(translation, 1, 6)  + (R * platform.bearings) - base.bearings;
    % Calculate servo angles
    ldl = coupler.L;
    lhl = excenter.R;
    r = excenter.o * sin((pi/2) - excenter.phi);
    h = excenter.R * cos(excenter.phi);
    g = (vecnorm(l).^2 - (ldl^2 - lhl^2))/2 ;
    ek = ( -(r* l(1, :).*sin(base.beta)) +(h*l(2, :)) - (r*l(3, :).*cos(base.beta))) ;
    fk = ((h*l(1, :).*sin(base.beta)) + (r*l(2, :)) + (h*l(3, :).*cos(base.beta)) );
    motorAngles = -( asin(g ./ sqrt(ek.^2 + fk.^2)) - atan2(fk, ek));

end
