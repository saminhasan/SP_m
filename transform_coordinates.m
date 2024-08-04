function tp_transformed = transform_coordinates(bt, tp)
    % Normalize bt to get ux
    bt_norm = vecnorm(bt, 2, 1); % Calculate the norm of each column
    ux = bt ./ bt_norm; % Element-wise division of each column by its norm

    % Define a reference vector which is not collinear with ux
    ref_vector = repmat([0; 0; 1], 1, size(ux, 2));

    % Compute uz as the cross product of ux and ref_vector
    uz = cross(ux, ref_vector, 1);

    % Handle cases where ux is collinear with ref_vector
    for i = 1:size(ux, 2)
        if norm(uz(:, i)) < 1e-10 % Check if uz is close to zero vector
            ref_vector(:, i) = [1; 0; 0]; % Use a different reference vector
            uz(:, i) = cross(ux(:, i), ref_vector(:, i));
        end
    end

    % Normalize uz
    uz_norm = vecnorm(uz, 2, 1);
    uz = uz ./ uz_norm;

    % Compute uy as the cross product of uz and ux
    uy = cross(uz, ux, 1);

    % Construct the transformation matrix T for each vector set
    tp_transformed = zeros(size(tp));
    for i = 1:size(ux, 2)
        T = [ux(:, i), uy(:, i), uz(:, i)];
        tp_transformed(:, i) = T * tp(:, i);
    end
end
