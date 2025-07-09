function torques = ikd(poses, thetas, dt, m_p, I_plate, r, l, JmN2,hexapod, g) %#ok<*INUSD>

if nargin < 10
    g = 9.81;
end

len = size(poses,1);%#ok<*NASGU>

velocities    = filter([1,0,-1], 2*dt,poses); 
accelerations = filter([1,-2, 1], dt^2,poses);
thetas_dot    = filter([1,0,-1], 2*dt,thetas);
thetas_ddot   = filter([1,-2, 1], dt^2,thetas);

torques = zeros(len,6);

for i = 1:len
    pos   = poses(i,1:3)';         % 3×1
    rot   = poses(i,4:6)';         % 3×1 [Rx Ry Rz]
    acc   = accelerations(i,1:3)'; % 3×1 linear accel
    alpha = accelerations(i,4:6)'; % 3×1 angular accel
    theta_dd = thetas_ddot(i,:)';  % 6×1

    % gravity wrench (force and torque)
    W_p = [0;-m_p*g; 0 ];
    Tau_g = cross(zeros(3,1), W_p);  % zero, but kept for clarity

    % platform net wrench
    F_platform   = m_p*(acc + [0;g;0]);
    Tau_platform = I_plate*alpha + cross(accelerations(i,4:6)', I_plate*accelerations(i,4:6)');
    wrench = [F_platform; Tau_platform];
    R = rotz(rad2deg(rot(3))) * roty(rad2deg(rot(2))) * rotx(rad2deg(rot(1)));
    % build inverse Jacobian transpose (6×6)
    J_theta = zeros(6,6);
    % geta = deg2rad([-120,60, 0,180,120,-60]);
    for leg = 1:6
        P_i    = R * hexapod.platform.bearings(:,leg) + pos;
        B_i    = hexapod.base.bearings(:,leg);
        L_i    = P_i - B_i;
        l_norm = norm(L_i);
        u_L    = L_i / l_norm;

        beta =  hexapod.base.beta_sim(leg) + pi;
        z_crank = [cos(beta); 0; -sin(beta)];
        lever   = r * cross(z_crank, u_L);

        Jv = cross(lever, u_L) / l_norm;  % 1×3
        Jw = u_L;                         % 3×1

        J_theta(leg,1:3) = Jv';
        J_theta(leg,4:6) = Jw';
    end

    Tau_to_joints = J_theta * wrench;
    % add rotor inertia term
    torques(i,:) = (Tau_to_joints + JmN2 * theta_dd)';
end
end

