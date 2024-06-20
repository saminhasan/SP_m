ys = out.pose_simscape.Data(:,2);
diffs  = abs(ys -calcZeroMotorAngle());
min(diffs);
find(min(diffs))
% plot(diffs);
reshaped_array = reshape(out.sph_angles.Data, [6, 4, 40001]);

% Extract each quaternion's data
% q1 = squeeze(reshaped_array(1, :, :))'; % 4x40001
% q2 = squeeze(reshaped_array(2, :, :))'; % 4x40001
% q3 = squeeze(reshaped_array(3, :, :))'; % 4x40001
% q4 = squeeze(reshaped_array(4, :, :))'; % 4x40001
% q5 = squeeze(reshaped_array(5, :, :))'; % 4x40001
% q6 = squeeze(reshaped_array(6, :, :))'; % 4x40001
% [q1(1,:)', q2(1,:)', q3(1,:), q4(1,:), q5(1,:), q6(1,:)]
% Combine the first rows of q1, q2, q3, q4, q5, q6 into a cell array
% q = {q1(1,:), q2(1,:), q3(1,:), q4(1,:), q5(1,:), q6(1,:)};

% Quaternion Array:
%    0.582482372510718                   0  -0.091970900922745   0.807623451304966
%    0.582482372510718                   0   0.091970900922745   0.807623451304966
%    0.582482372510718                   0  -0.091970900922745   0.807623451304966
%    0.582482372510718                   0   0.091970900922745   0.807623451304966
%    0.582482372510718                   0  -0.091970900922745   0.807623451304966
%    0.582482372510718                   0   0.091970900922745   0.807623451304966