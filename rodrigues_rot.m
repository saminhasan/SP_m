function v_rot = rodrigues_rot(v, r, theta)
    r = r / norm(r);
    cos_theta = cos(theta);
    sin_theta = sin(theta);
    k_dot_bt = dot(r, v);
    k_cross_bt = cross(r, v);

    % Rodrigues' rotation formula
    v_rot = v * cos_theta + k_cross_bt * sin_theta + r * k_dot_bt * (1 - cos_theta);
end