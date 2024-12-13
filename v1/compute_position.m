function position = compute_position(ext_z_meas_m, ts, idx)
    disp(idx)
    % Function to calculate position based on acceleration and external measurements
    % Inputs:
    % - ext_z_meas_m: external measurements (position or displacement)
    % - ts: time step (scalar)
    % - idx: index or indices where the calculation should be performed (scalar or vector)
    
    % Step 1: Calculate the acceleration
    acc = filter([1, -2, 1], ts^2, ext_z_meas_m);
    
    % Step 2: Handle idx input (scalar or vector)
    if isscalar(idx)
        % Case when idx is scalar
        idx2 = idx;
        n = 3;  % This can be adjusted or made an input if necessary
        
        % Calculate slope and intercept for linear approximation
        slope = (acc(idx2 + n) - acc(idx2)) / n;
        intercept = acc(idx2) - slope * idx2;
        
        % Update acceleration at idx2 + 1 and idx2 + 2
        acc(idx2 + 1) = slope * (idx2 + 1) + intercept;
        acc(idx2 + 2) = slope * (idx2 + 2) + intercept;
        
        % Step 3: Second cumulative sum to approximate position
        position = ext_z_meas_m;
        position(idx2 + 1) = ext_z_meas_m(idx2) / 2 + ext_z_meas_m(idx2 + 3) - ext_z_meas_m(idx2 + 4) / 2;
        position(idx2 + 2) = ext_z_meas_m(idx2) / 6 + ext_z_meas_m(idx2 + 3) * 4 / 3 - ext_z_meas_m(idx2 + 4) / 2;
        position(idx2) = -((acc(idx2) * ts^2) - (position(idx2 - 1) + position(idx2 + 1))) / 2;
    
    elseif length(idx) > 1
        % Case when idx is a vector (iteratively apply the process for each idx value)
        position = ext_z_meas_m;
        for i = 1:length(idx)
            idx2 = idx(i);
            n = 3;
            
            % Calculate slope and intercept for linear approximation
            slope = (acc(idx2 + n) - acc(idx2)) / n;
            intercept = acc(idx2) - slope * idx2;
            
            % Update acceleration at idx2 + 1 and idx2 + 2
            acc(idx2 + 1) = slope * (idx2 + 1) + intercept;
            acc(idx2 + 2) = slope * (idx2 + 2) + intercept;
            
            % Step 3: Second cumulative sum to approximate position
            position(idx2 + 1) = ext_z_meas_m(idx2) / 2 + ext_z_meas_m(idx2 + 3) - ext_z_meas_m(idx2 + 4) / 2;
            position(idx2 + 2) = ext_z_meas_m(idx2) / 6 + ext_z_meas_m(idx2 + 3) * 4 / 3 - ext_z_meas_m(idx2 + 4) / 2;
            position(idx2) = -((acc(idx2) * ts^2) - (position(idx2 - 1) + position(idx2 + 1))) / 2;
        end
    else
        error('Index input is not valid. Provide a scalar or a vector.');
    end
end
