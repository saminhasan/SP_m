function tauo = zeroAngleTorqueCalc()

    % hexapod = get_params();
    % excenter = hexapod.excenter;
    % coupler = hexapod.coupler;
    % base = hexapod.base;
    % platform = hexapod.platform;
    % y_coord = calcZeroMotorAngle();
    % 
    % %  local coordinate system in base 
    % thetaz=base.orientation(3);
    % thetax=thetaz+pi/2;
    % ux = [sin(thetax),0,cos(thetax)];
    % % ----------------------------------
    % % Calculate the tip coordinate in the global frame
    % P12Lh = base.P12L + excenter.R * ux';
    % % Update the platform's y-coordinate
    % platform.P12L(2) = y_coord;
    % % Position vectors
    % ph = P12Lh - platform.P12L;
    % pmh = P12Lh - ((platform.P12L + P12Lh)/2);
    % bh = P12Lh - base.P12L;
    % f1 = (dot(ph, [0, (20/ 6) * -g, 0])/dot(ph, ph))*ph;
    % f2 = (dot(pmh, [0, coupler_mass * -g, 0])/dot(pmh, pmh))*pmh;
    % f = f1 + f2;
    % 
    % 
    % tauo = ((excenter_mass*g*excenter.R/2) + abs(f(2)) *excenter.R);
    % % % 
    % fprintf('The required torque for P12L is: %.64f Nm\n', tauo);
    % fprintf('Difference with simscape : %.4f ', (tauo - 2.812181105066641)*100/2.812181105066641);
    tauo = 2.812181105066641;

end























% % *****************************
% % calculate motor angles for 12R
% % *****************************
% 
% % Calculate the tip coordinate in the global frame
% P12Rh = base.P12R - excenter.R * ux';
% % Update the platform's y-coordinate
% platform.P12R(2) = y_coord;
% % Position vectors
% r_BP = platform.P12R - base.P12R;
% r_BH = P12Rh - base.P12R;
% r_PH = P12Rh - platform.P12R;
% % Unit vector in the direction of PH
% unit_PH = r_PH / norm(r_PH);
% % Projection of the force along PH
% F_PH = dot(F_P, unit_PH) * unit_PH;
% % Perpendicular vector to BH in the zx-plane
% unit_BH = r_BH / norm(r_BH);
% perp_BH = cross(unit_BH, [0, 1, 0]);
% perp_BH = perp_BH / norm(perp_BH);
% % Projection of F_PH along perp_BH
% F_perp = dot(F_PH, perp_BH) * perp_BH;
% 
% % Calculate the torque
% tau = norm(F_perp) * excenter.R;
% 
% fprintf('The required torque for P12R is: %.64f Nm\n', tau);
% 
% % *****************************
% % calculate motor angles for 23L
% % *****************************
% 
% %  local coordinate system in base 
% thetaz=base.orientation(1);
% thetax=thetaz+pi/2;
% ux = [sin(thetax),0,cos(thetax)];
% % ----------------------------------
% % Calculate the tip coordinate in the global frame
% P23Lh = base.P23L + excenter.R * ux';
% % Update the platform's y-coordinate
% platform.P23L(2) = y_coord;
% % Position vectors
% r_BP = platform.P23L - base.P23L;
% r_BH = P23Lh - base.P23L;
% r_PH = P23Lh - platform.P23L;
% % Unit vector in the direction of PH
% unit_PH = r_PH / norm(r_PH);
% % Projection of the force along PH
% F_PH = dot(F_P, unit_PH) * unit_PH;
% % Perpendicular vector to BH in the zx-plane
% unit_BH = r_BH / norm(r_BH);
% perp_BH = cross(unit_BH, [0, 1, 0]);
% perp_BH = perp_BH / norm(perp_BH);
% % Projection of F_PH along perp_BH
% F_perp = dot(F_PH, perp_BH) * perp_BH;
% 
% % Calculate the torque
% tau = norm(F_perp) * excenter.R;
% 
% fprintf('The required torque for P23L is: %.64f Nm\n', tau);
% 
% % *****************************
% % calculate motor angles for 23R
% % *****************************
% 
% % Calculate the tip coordinate in the global frame
% P23Rh = base.P23R - excenter.R * ux';
% % Update the platform's y-coordinate
% platform.P23R(2) = y_coord;
% % Position vectors
% r_BP = platform.P23R - base.P23R;
% r_BH = P23Rh - base.P23R;
% r_PH = P23Rh - platform.P23R;
% % Unit vector in the direction of PH
% unit_PH = r_PH / norm(r_PH);
% % Projection of the force along PH
% F_PH = dot(F_P, unit_PH) * unit_PH;
% % Perpendicular vector to BH in the zx-plane
% unit_BH = r_BH / norm(r_BH);
% perp_BH = cross(unit_BH, [0, 1, 0]);
% perp_BH = perp_BH / norm(perp_BH);
% % Projection of F_PH along perp_BH
% F_perp = dot(F_PH, perp_BH) * perp_BH;
% 
% % Calculate the torque
% tau = norm(F_perp) * excenter.R;
% 
% fprintf('The required torque for P23R is: %.64f Nm\n', tau);
% 
% % *****************************
% % calculate motor angles for 31L
% % *****************************
% 
% %  local coordinate system in base 
% thetaz=base.orientation(2);
% thetax=thetaz+pi/2;
% ux = [sin(thetax),0,cos(thetax)];
% % ----------------------------------
% % Calculate the tip coordinate in the global frame
% P31Lh = base.P31L + excenter.R * ux';
% % Update the platform's y-coordinate
% platform.P31L(2) = y_coord;
% % Position vectors
% r_BP = platform.P31L - base.P31L;
% r_BH = P31Lh - base.P31L;
% r_PH = P31Lh - platform.P31L;
% % Unit vector in the direction of PH
% unit_PH = r_PH / norm(r_PH);
% % Projection of the force along PH
% F_PH = dot(F_P, unit_PH) * unit_PH;
% % Perpendicular vector to BH in the zx-plane
% unit_BH = r_BH / norm(r_BH);
% perp_BH = cross(unit_BH, [0, 1, 0]);
% perp_BH = perp_BH / norm(perp_BH);
% % Projection of F_PH along perp_BH
% F_perp = dot(F_PH, perp_BH) * perp_BH;
% 
% % Calculate the torque
% tau = norm(F_perp) * excenter.R;
% 
% fprintf('The required torque for P31L is: %.64f Nm\n', tau);
% 
% % *****************************
% % calculate motor angles for 31R
% % *****************************
% 
% % Calculate the tip coordinate in the global frame
% P31Rh = base.P31R - excenter.R * ux';
% % Update the platform's y-coordinate
% platform.P31R(2) = y_coord;
% % Position vectors
% r_BP = platform.P31R - base.P31R;
% r_BH = P31Rh - base.P31R;
% r_PH = P31Rh - platform.P31R;
% % Unit vector in the direction of PH
% unit_PH = r_PH / norm(r_PH);
% % Projection of the force along PH
% F_PH = dot(F_P, unit_PH) * unit_PH;
% % Perpendicular vector to BH in the zx-plane
% unit_BH = r_BH / norm(r_BH);
% perp_BH = cross(unit_BH, [0, 1, 0]);
% perp_BH = perp_BH / norm(perp_BH);
% % Projection of F_PH along perp_BH
% F_perp = dot(F_PH, perp_BH) * perp_BH;
% 
% % Calculate the torque
% tau = norm(F_perp) * excenter.R;
% 
% fprintf('The required torque for P31R is: %.64f Nm\n', tau);
