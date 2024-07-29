clear all; %#ok<CLALL>
clc;
close all;

hexapod = get_params();
[motorZeroY, tips] = calcZeroMotorAngle();

% Define the ranges for the pose parameters
x_range = linspace(-0.15/3, 0.15/3, 2);   % Example range for x
y_range = linspace(-0.15/3, 0.15/3, 2);   % Example range for y
z_range = linspace(-0.15/3, 0.15/3, 2);   % Example range for z
Rx_range = deg2rad(linspace(-30/3, 30/3, 2));  % Example range for Rx
Ry_range = deg2rad(linspace(-30/3, 30/3, 2));  % Example range for Ry
Rz_range = deg2rad(linspace(-30/3, 30/3, 2));  % Example range for Rz

% Total number of tests
total_tests = numel(x_range) * numel(y_range) * numel(z_range) * ...
              numel(Rx_range) * numel(Ry_range) * numel(Rz_range);

% Initialize counters
passed_tests = 0;
failed_tests = 0;
test_number = 0;

% Define threshold for comparison
threshold = 1e-10;  % Define a tolerance threshold

% Loop through all combinations of parameters
for x = x_range
    for y = y_range
        for z = z_range
            % for Rx = Rx_range
            %     for Ry = Ry_range
            %         for Rz = Rz_range
                        % Define the pose
                        pose.x = x;
                        pose.y = y + motorZeroY;
                        pose.z = z;
                        pose.Rx = 0;
                        pose.Ry = 0;
                        pose.Rz = 0;

                        % Calculate motor angles using both functions
                        [motorAngles, h] = calcMotorAngles(pose, hexapod);
                        [motorAngles2, h2] = calcMotorAngles3(pose, hexapod);
                        disp([motorAngles' ,motorAngles2'])
                        % Check if the motor angles are within the threshold
                        angle_diff = rad2deg(motorAngles)' - rad2deg(motorAngles2)';
                        if all(abs(angle_diff) < threshold)
                            passed_tests = passed_tests + 1;
                        else
                            failed_tests = failed_tests + 1;
                        end

                        % Update test number and print progress
                        test_number = test_number + 1;
                        % fprintf('Progress: %.2f%%\n', (test_number / total_tests) * 100);
            %         end
            %     end
            % end
        end
    end
end

% Display the results
fprintf('Total tests: %d\n', total_tests);
fprintf('Passed tests: %d\n', passed_tests);
fprintf('Failed tests: %d\n', failed_tests);
if failed_tests == 0
    disp('All tests passed within the specified threshold.');
else
    disp('Some tests failed. Check the differences for more details.');
end
