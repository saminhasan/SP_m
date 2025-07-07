%% Helper: wraps your existing ik_hexapod to absorb its internal "-" 
function theta = ik_signed(pose, hexapod)
    % your original ik_hexapod *expects* pose(4:6) negated,
    % so we negate them here so the main needn't.
    pose_signed = pose;
    pose_signed(4:6) = -pose_signed(4:6);
    theta = ik_hexapod(pose_signed, hexapod);
end