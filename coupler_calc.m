cd = out.hj.Data; % Assuming this is your input 3D array
[N, ~, numTimeSteps] = size(cd); % Get the dimensions of the input array

% Initialize an array to store the Euler angles
euler_angles = zeros(numTimeSteps, 18);

for t = 1:numTimeSteps
    % Reshape cd(:,:,t) to a 4x6 matrix
    quats = reshape(cd(:,:,t), 4, 6)';
    
    % Convert all quaternions to Euler angles at once using arrayfun
    eul = arrayfun(@(row) quat2eul(quats(row,:)), 1:size(quats, 1), 'UniformOutput', false);
    eul = cell2mat(eul');
    
    % Store the Euler angles in the appropriate row of euler_angles
    euler_angles(t, :) = reshape(eul', 1, []);
end

% Convert radians to degrees
euler_angles_deg = rad2deg(euler_angles);

% Create 6 subplots for each joint
figure;

for joint = 1:6
    subplot(3, 2, joint);
    hold on;
    plot(1:numTimeSteps, euler_angles_deg(:, (joint-1)*3 + 1), 'r'); 
    plot(1:numTimeSteps, euler_angles_deg(:, (joint-1)*3 + 2), 'g');
    plot(1:numTimeSteps, euler_angles_deg(:, (joint-1)*3 + 3), 'b');
    hold off;
    title(['Joint ' num2str(joint)]);
    xlabel('Time Step');
    ylabel('Angle (degrees)');
    legend('R_z', 'R_y', 'R_x');
    % legend('R_y', 'R_x');
    grid on;
end
