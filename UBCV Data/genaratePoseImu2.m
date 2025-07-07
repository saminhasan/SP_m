function [pose, tf, ts] = genaratePoseImu2()
    %— load & prep ——————————————————————————————————————
    file_number = 1;
    DATA_PATH   = 'C:\Users\james\OneDrive\Desktop\Matlab Codes\SP_m\UBCV Data\Data';
    filelist    = string({ dir(fullfile(DATA_PATH,'*.mat')).name });
    data        = load(fullfile(DATA_PATH, filelist(file_number)));
    imu_data    = data.data_mtl;      % n×8: [t, ax, ay, az, gx, gy, gz]
    
    % normalize time → zero
    imu_data(:,1) = imu_data(:,1) - imu_data(1,1);
    time = imu_data(:,1);
    dt   = mean(diff(time));
    fs   = 1/dt;
    tf   = time(end);
    ts   = dt;
    
    %— positions via HP + double‐integral ——————————————————
    % subtract gravity only on Z
    accel = imu_data(:,2:4);
    gyro  = deg2rad( imu_data(:,5:7) );  % convert from °/s to rad/s
    % 2) Create and run the IMU filter  
    fuse = imufilter('SampleRate',fs);  
    q    = fuse(accel, gyro);            % q is an n×1 quaternion array
   
    
    % 3) Convert to ZYX Euler angles (yaw, pitch, roll) in degrees  
    eulZYX = deg2rad(eulerd(q, 'XYZ', 'frame'));  
    
    % 4) Reorder to [roll, pitch, yaw]  
    Ry  = clip(eulZYX(:,2) - mean(eulZYX(:,2)), -pi/6, pi/6);
    Rx  = clip(eulZYX(:,1) - mean(eulZYX(:,1)), -pi/6, pi/6);
    Rz  = clip(eulZYX(:,3) - mean(eulZYX(:,3)), -pi/6, pi/6);

    % 5) Z extraction
    accel(:,3) = accel(:,3) - 9.81;
    fa   = 1;    % cutoff for HP filter (Hz)
    pos  = zeros(size(accel));  % will hold [Xpos, Ypos, Zpos]
    acHP      = HPFilter(accel(:,3), fs, fa);
    pos(:,2) = filter(dt^2, [1 -2 1], acHP);

    %— pack it all into pose(n×7) ————————————————————
    %    [ time,  Xpos,  Ypos,  Zpos,  roll, pitch, yaw ]
    pose = [ time, pos, Rx, Ry, Rz ];
    % figure(1)
    % hold on
    % plot(time, rad2deg(roll), "DisplayName",'roll');
    % plot(time, rad2deg(pitch), "DisplayName",'pitch');
    % plot(time, rad2deg(yaw), "DisplayName",'yaw');
    % hold off
    % legend;
    % grid on
end