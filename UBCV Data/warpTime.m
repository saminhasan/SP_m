% https://studylib.net/doc/8267759/sinusoidal-velocity-profiles-for-motion-control
function warpedTime =  warpTime(t, Ta)
    dt = mean(diff(t));
    % User-specified parameters
    Tt = t(end);   % Total time
    % Ta = 1;    % Specified rise time parameter (acceleration time until Vmax)
    Vmax = 1;  % Fixed maximum velocity
    
    % Derived parameters
    Am = 2/Ta;        % From Vmax=1 and Ta, Am must be 2/Ta
    Yf = Tt - Ta;      % Total travel distance
    Ys = Yf / 2;
    Yaux = (Vmax^2) / Am;  % = 1/Am
    To = Vmax / Am;         %#ok<NASGU> % = 1/Am
    w = 2*pi/Ta;            % Omega for sinusoidal segment
    Ks = (Ta*Vmax)/(4*pi^2);% Constant from original code
    
    % Determine if there's a coasting segment
    % Ta is known, Tt is known.
    % Ts = Tt/2
    % T_k = T_t - 2T_a
    Ts = Tt/2;
    Tk = Tt - 2*Ta;
    
    % Check conditions
    % If Ys <= Yaux, no coasting, else coasting
    if Ys <= Yaux
        % No coasting scenario: The profile barely hits Vmax at midpoint
        Tk = 0; % In this case
    end
    
    
    
    % Compute the position profile without loops:
    warpedTime = zeros(size(t));
    
    % Indices for different segments
    idx1 = (t > 0 & t <= Ta);
    idx2 = (t > Ta & t <= Ts);
    idx3 = (t > Ts & t <= Tt);
    
    % First half calculation:
    % Segment 1 (0 < t <= Ta): sinusoidal acceleration phase
    warpedTime(idx1) = ((Am/4)* t(idx1).^2) + Ks*(cos(w * t(idx1)) - 1);
    
    % Segment 2 (Ta < t <= Ts): coasting at Vmax if needed
    if Tk > 0
        warpedTime(idx2) = Ys + Vmax*(t(idx2)-Ts);
    else
        % If no coasting: This segment might not exist, Ts=Ta in that case
        % If Ts > Ta but no coasting, something's off with chosen parameters.
        % Normally Ts=Ta when no coasting occurs.
    end
    
    % For second half (Ts < t <= Tt), use symmetry:
    % y(t) = Yf - y_hat(Tt - t)
    % We'll map t in second half back to [0, Ts].
    idx_sec_half = find(idx3);
    t_reflected = Tt - t(idx_sec_half); %#ok<FNDSB>
    ref_idx = round(t_reflected/dt) + 1;
    ref_idx(ref_idx < 1) = 1;
    ref_idx(ref_idx > length(t)) = length(t);
    
    y_half = warpedTime;  % Copy first half
    % Apply symmetry
    warpedTime(idx3) = Yf - y_half(ref_idx);
    % plotWarpedtime(t,warpedTime,dt);
        function plotWarpedtime(t,y, dt) %#ok<DEFNU>
    
            v = filter([1 0 -1], 2*dt, y); % Velocity
            a = filter([1 -2 1], dt^2, y); % Acceleration
            j = filter([1 0 -2 0 1], 2*dt^3, y); % Jerk
            s = filter([1 -4 6 -4 1], dt^4, y); % Snap
    
            % Plot the motion profile
            figure;
            plot(t, y, 'r');
            grid on;
            xlabel('Time (s)');
            ylabel('Position (y_t)');
            title('Position Profile');
    
            figure;
            plot(t, v, 'g');
            grid on;
            xlabel('Time (s)');
            ylabel('Velocity (v_t)');
            title('Velocity Profile');
    
            figure;
            plot(t, a, 'b');
            grid on;
            xlabel('Time (s)');
            ylabel('Acceleration (a_t)');
            title('Acceleration Profile');
    
            figure;
            plot(t, j, 'c');
            grid on;
            xlabel('Time (s)');
            ylabel('Jerk (j_t)');
            title('Jerk Profile');
    
    
            figure;
            plot(t, s, 'c');
            grid on;
            xlabel('Time (s)');
            ylabel('Snap (s_t)');
            title('Snap Profile');
        end
end