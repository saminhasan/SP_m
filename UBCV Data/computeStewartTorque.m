function tau = computeStewartTorque(theta, q_traj, m, I_plate, Jm, g, dt, hexapod)

    Nn    = size(theta,1);
    tau   = zeros(Nn,6);
    vel   = @(x) filter([1 0 -1],[1], x)/(2*dt);
    acc   = @(x) filter([1 -2 1],[1], x)/(dt^2);

    % precompute all the derivatives
    q_dot   = zeros(Nn,6); q_ddot  = zeros(Nn,6);
    th_dot  = zeros(Nn,6); th_ddot = zeros(Nn,6);
    for k=1:6
      q_dot(:,k)   = vel(   q_traj(:,k));
      q_ddot(:,k)  = acc(   q_traj(:,k));
      th_dot(:,k)  = vel(   theta(:,k));
      th_ddot(:,k) = acc(   theta(:,k));
    end

    eps = 1e-6;
    for i = 1:Nn
      %% 1) numeric Jacobian ∂q/∂θ via patched IK
      K = zeros(6,6);
      for j = 1:6
        % standard ± perturbation in q
        dq = zeros(6,1); dq(j) = eps;
        p_plus  = q_traj(i,:)' + dq;
        p_minus = q_traj(i,:)' - dq;
        % call our wrapper that undoes the internal negation
        th_p = ik_signed(p_plus,  hexapod);
        th_m = ik_signed(p_minus, hexapod);
        K(:,j) = (th_p - th_m)/(2*eps);
      end
      J = inv(K);

      %% 2) build wrench W
      F_lin = m * q_ddot(i,1:3)' + [0; m*g; 0];

      % fetch the “signed” Euler angles + rates
      phi    = -q_traj(i,4);
      thet   = -q_traj(i,5);
      phid   = -q_dot(i,4);
      thetad = -q_dot(i,5);
      psid   = -q_dot(i,6);
      phidd   = -q_ddot(i,4);
      thetadd = -q_ddot(i,5);
      psidd   = -q_ddot(i,6);

      % body-rates & accel (unchanged)
      omega = [ ...
        phid - psid*sin(thet);
        thetad*cos(phi) + psid*sin(phi)*cos(thet);
       -thetad*sin(phi) + psid*cos(phi)*cos(thet)
      ];
      omega_dot = [ ...
        phidd - psidd*sin(thet) - psid*thetadd*cos(thet);
        thetadd*cos(phi) + psidd*sin(phi)*cos(thet) ...
           + psid*(phid*cos(phi)*cos(thet) - thetadd*sin(phi)*cos(thet));
       -thetadd*sin(phi) - thetad*phid*cos(phi) ...
           + psidd*cos(phi)*cos(thet) ...
           - psid*(phid*sin(phi)*cos(thet) + thetadd*cos(phi)*cos(thet))
      ];
      M_rot = I_plate*omega_dot + cross(omega, I_plate*omega);

      W = [F_lin; M_rot];

      %% 3) torque
      tau(i,:) = ( J' * W + Jm * th_ddot(i,:)' )';
    end
end



