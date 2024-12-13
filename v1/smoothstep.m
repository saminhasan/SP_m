function y = smoothstep(t, t1, t2)
    % Set default values for t1 and t2 if not provided
    if nargin < 2
        t1 = 0;
    end
    if nargin < 3
        t2 = 1;
    end
    
    % Ensure t1 and t2 are scalars
    t1 = double(t1);
    t2 = double(t2);
    
    % Calculate the k values
    k = max(0, min(1, (t - t1) / (t2 - t1)));
    
    % Calculate the smooth step function values
    y = k.^2 .* (3 - 2 .* k);
end


