function X_full = acc_solver(z, a, dt)
    start_idx = 1;
    end_idx = length(z);
    % Solve the second difference equation:
    % z(i+1) - 2z(i) + z(i-1) = a(i)*dt^2
    %
    % We keep z(start_idx) and z(end_idx) fixed (known). We only solve for
    % z(start_idx+1) to z(end_idx-1).
    %
    % This ensures stable boundary conditions and reduces spikes.
    
    % Number of points in [start_idx : end_idx]
    N = end_idx - start_idx + 1;
    
    % If the region is too small to have interior points, just return as is
    if N <= 2
        X_full = z(start_idx:end_idx);
        return;
    end
    
    % Unknowns: z(start_idx+1) ... z(end_idx-1)
    M = N - 2;  % number of interior points to solve for
    
    % Preallocate the system
    A = zeros(M,M);
    b = zeros(M,1);
    
    % The unknown vector X represents z(start_idx+1) ... z(end_idx-1).
    %
    % For i from start_idx+1 to end_idx-1:
    %   z(i+1) - 2*z(i) + z(i-1) = a(i)*dt^2
    %
    % Boundary conditions:
    % At i = start_idx+1 (the first interior eq):
    %   z(start_idx+2) - 2*z(start_idx+1) + z(start_idx) = a(start_idx+1)*dt^2
    %   => -2*X(1) + X(2) = a(start_idx+1)*dt^2 - z(start_idx)
    %
    % At i = end_idx-1 (the last interior eq):
    %   z(end_idx) - 2*z(end_idx-1) + z(end_idx-2) = a(end_idx-1)*dt^2
    %   => X(M-1) - 2*X(M) = a(end_idx-1)*dt^2 - z(end_idx)
    %
    % For any interior i (start_idx+1 < i < end_idx-1):
    %   z(i+1) - 2*z(i) + z(i-1) = a(i)*dt^2
    % Translate to X indexing:
    % If i_local = i - (start_idx+1) + 1, then i_local runs from 1 to M
    % and i = start_idx + i_local.
    %
    % z(i-1) = X(i_local-1), z(i) = X(i_local), z(i+1)=X(i_local+1), with a shift.
    % mapping:
    % X(1) = z(start_idx+1)
    % X(2) = z(start_idx+2)
    % ...
    % X(M) = z(end_idx-1)
    %
    % Then:
    % z(i-1)   corresponds to X(i_local-1) if i_local>1 else z(start_idx) if i_local=1
    % z(i)     corresponds to X(i_local)
    % z(i+1)   corresponds to X(i_local+1) if i_local<M else z(end_idx) if i_local=M
    
    for i_local = 1:M
        i_global = start_idx + i_local;  % This corresponds to i in [start_idx+1 : end_idx-1]
    
        % Coefficients for current equation:
        % z(i+1) - 2*z(i) + z(i-1)
        % Map i-1, i, i+1 to X indices:
        % i corresponds to i_local:
        % (i-1) corresponds to i_local-1
        % (i+1) corresponds to i_local+1
    
        % Initialize row
        row = zeros(1,M);
    
        % The -2*z(i) term:
        row(i_local) = -2;
    
        % The z(i-1) term:
        if i_local == 1
            % z(i-1) = z(start_idx), known boundary
            lhs_minus = 0;
            rhs_minus = z(start_idx);
        else
            row(i_local-1) = 1;
            rhs_minus = 0;
        end
    
        % The z(i+1) term:
        if i_local == M
            % z(i+1) = z(end_idx), known boundary
            lhs_plus = 0;
            rhs_plus = z(end_idx);
        else
            row(i_local+1) = 1;
            rhs_plus = 0;
        end
    
        A(i_local,:) = row;
        b(i_local) = a(i_global)*dt^2 - rhs_minus - rhs_plus;
    end
    
    % Solve the linear system for the interior points
    X_interior = A\b;
    
    % Construct full solution:
    % Keep boundaries as is and insert the solved interior
    X_full = z(start_idx:end_idx);      % start with original
    X_full(2:end-1) = X_interior(:);    % replace interior
end
