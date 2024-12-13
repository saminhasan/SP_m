function [motorAngles] = calcMotorAngles(pose,hexapod)
    translation = [pose(2), pose(3), pose(4)]';
    rotation = -[pose(5), pose(6), pose(7)]';

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
% simplified equations if excenter.phi is not zero
% translation = [pose.x, pose.y, pose.z]';
% rotation = -[pose.Rx, pose.Ry, pose.Rz]';
% excenter = hexapod.excenter;
% coupler = hexapod.coupler;
% base = hexapod.base;
% platform = hexapod.platform;
% R = rotz((rotation(3))) * roty((rotation(2))) * rotx((rotation(1)));
% % Calculate leg lengths for each leg
% l = repmat(translation, 1, 6)  + (R * platform.bearings) - base.bearings;
% % Calculate servo angles
% ldl = coupler.L;
% lhl = excenter.R;
% r = excenter.R * sin(excenter.phi);
% h = excenter.R * cos(excenter.phi);
% g = (vecnorm(l).^2 - (ldl^2 - lhl^2))/2 ;
% ek = ( -(r* l(1, :).*sin(base.beta)) +(h*l(2, :)) - (r*l(3, :).*cos(base.beta))) ;
% fk = ((h*l(1, :).*sin(base.beta)) + (r*l(2, :)) + (h*l(3, :).*cos(base.beta)) );
% motorAngles = -( asin(g ./ sqrt(ek.^2 + fk.^2)) - atan2(fk, ek));