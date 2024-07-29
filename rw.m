function [motorData, pose, tf, ts] = rw()
    hexapod = get_params();
    ts = 1/240;
    [y_zero, ~] = calcQ();
    file_name = 'Traj.csv';
    
    % Reading the file while skipping the unnecessary header rows
    data = readtable(file_name, 'HeaderLines', 1);
    % Number of samples
    N = size(data, 1);
    tf = N * ts;
    % Extracting the coordinates for each marker
    T1 = [data.T1Y, data.T1Z, data.T1X] / 1000;
    T10 = [data.T10Y, data.T10Z, data.T10X] / 1000;
    Sternum = [data.SternumY, data.SternumZ, data.SternumX] / 1000;
    Rnip = [data.RnipY, data.RnipZ, data.RnipX] / 1000; %#ok<NASGU>
    Lnip = [data.LnipY, data.LnipZ, data.LnipX] / 1000; %#ok<NASGU>
    
    
    %center of gravity
    cg = (T1 + T10 + Sternum) / 3;
    
    v1 = T1 - T10;
    v2 = T1 - Sternum;
    
    % Calculate unit vectors
    uy = v1 ./ vecnorm(v1, 2, 2);
    ux_cross = cross(uy, v2, 2);
    ux = ux_cross ./ vecnorm(ux_cross, 2, 2);
    
    % Calculate Euler angles
    Ry = asin(-ux(:, 3)); % beta
    Rz = asin(ux(:, 2) ./ cos(Ry)); % alpha
    Rx = asin(uy(:, 3) ./ cos(Ry)); % gamma
    
    % Mean centering
    mean_cg = mean(cg, 1);
    cg_centered = cg - mean_cg;
    
    mean_Rx = mean(Rx);
    Rx_centered = Rx - mean_Rx;
    
    mean_Ry = mean(Ry);
    Ry_centered = Ry - mean_Ry;
    
    mean_Rz = mean(Rz);
    Rz_centered = Rz - mean_Rz;
    
    % Generate time vector
    time0 = linspace(0, tf, N)';
    
    % Preallocate pose struct array
    pose = struct('x', num2cell(zeros(N,1)), ...
              'y', num2cell(zeros(N,1)), ...
              'z', num2cell(zeros(N,1)), ...
              'Rx', num2cell(zeros(N,1)), ...
              'Ry', num2cell(zeros(N,1)), ...
              'Rz', num2cell(zeros(N,1)), ...
              'time0', num2cell(time0));
    
    % Preallocate motorAngles array
    motorAngles = zeros(N, 6);
    ramp_up = smoothstep(time0, 0, 0.5);
    ramp_down = 1 - smoothstep(time0, tf-0.5, tf);
    for i = 1:N
        pose(i).x = cg_centered(i, 1)* ramp_up(i) * ramp_down(i);
        pose(i).y = (cg_centered(i, 2)* ramp_up(i) * ramp_down(i)) + y_zero;
        pose(i).z = cg_centered(i, 3)* ramp_up(i) * ramp_down(i);
        pose(i).Rx = Rx_centered(i)* ramp_up(i) * ramp_down(i);
        pose(i).Ry = Ry_centered(i)* ramp_up(i) * ramp_down(i);
        pose(i).Rz = Rz_centered(i)* ramp_up(i) * ramp_down(i);
        pose(i).time0 = time0(i);
    
        % Call calcMotorAngles with the current pose
        [motorAngles(i, :),~] = calcMotorAngles2(pose(i), hexapod);
    end
    motorData = [time0, -motorAngles(:,1), -motorAngles(:,2), ...
                 -motorAngles(:,3), -motorAngles(:,4), ...
                 -motorAngles(:,5), -motorAngles(:,6)];
end