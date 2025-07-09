function tau = ikd_lagrangian(q_traj, theta, ts, m_p, I_plate, r, l, J_mr, hexapod, g)
    N = size(q_traj, 1);
    dt = ts;
    % Numerical differentiation
    % vel = gradient(, ts);
    % acc = gradient(vel, ts);
    % theta_dot  = gradient(theta, ts);
    % theta_ddot = gradient(theta_dot, ts);
    vel    = filter([1,0,-1], 2*dt,q_traj); 
    acc = filter([1,-2, 1], dt^2,q_traj);
    theta_dot    = filter([1,0,-1], 2*dt,theta);
    theta_ddot   = filter([1,-2, 1], dt^2,theta);
    tau = zeros(N, 6);

    for idx = 1:N
        pos = q_traj(idx, 1:3)';
        rot = q_traj(idx, 4:6)';
        
        v = vel(idx, 1:3)';
        omega = vel(idx, 4:6)';
        a = acc(idx, 1:3)';
        alpha = acc(idx, 4:6)';

        % % Rotation matrices (Y-up)
        % Rx = @(a)[1 0 0;0 cos(a) -sin(a);0 sin(a) cos(a)];
        % Ry = @(a)[cos(a) 0 sin(a);0 1 0;-sin(a) 0 cos(a)];
        % Rz = @(a)[cos(a) -sin(a) 0;sin(a) cos(a) 0;0 0 1];
        % 
        % R = Ry(rot(2))*Rx(rot(1))*Rz(rot(3)); % Yaw(Y), Pitch(X), Roll(Z)
        R = rotz(rad2deg(rot(3))) * roty(rad2deg(rot(2))) * rotx(rad2deg(rot(1)));
        % Forces and Torques (Lagrangian model simplified)
        F = m_p * (a + [0; g; 0]);                   % force (N)
        T = I_plate*alpha + cross(omega, I_plate*omega); % torque (Nm)
        wrench = [F; T];

        % Jacobian transpose (J_theta^T) calculation
        J_theta_T = zeros(6,6);
        for i = 1:6
            % Platform joint positions
            P_i = pos + R * hexapod.platform.bearings(:, i);
            B_i = hexapod.base.bearings(:, i);
            L_i = P_i - B_i;
            u_L = L_i / norm(L_i);

            % Crank axis orientation (Y vertical)
            beta =  hexapod.base.beta(i);
            z_crank = [sin(beta +(pi/2)); 0; cos(beta+(pi/2))];

            lever_arm = r * cross(z_crank, u_L);

            % Jacobian (linear & angular components)
            Jv = cross(lever_arm, u_L)/norm(L_i);
            Jw = u_L;

            J_theta_T(:,i) = [Jv; Jw];
        end
        
        % Torques (ignoring masses other than platform)
        tau(idx,:) = (J_theta_T'*wrench)' + J_mr*theta_ddot(idx,:);
    end
end