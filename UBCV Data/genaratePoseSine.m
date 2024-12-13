function [pose, tf, ts] = genaratePoseSine()
    n=10;
    f_trajectory = 1/0.75;
    tf = n / f_trajectory;
    ts = 1e-3;
    time = (0:ts:tf)';
    warpedTime = warpTime(time,1/f_trajectory);
    y = 0.06 * sin(2 * pi * 2 * f_trajectory * warpedTime); % y (vertical component)
    z = 0.05  * sin(2 * pi * f_trajectory * warpedTime)*0; % z (horizontal component, front back)
    x = 0.05  * sin(2 * pi * f_trajectory * warpedTime)*0; % x (horizontal component, left right)
    
    Ry = deg2rad(3.5)  *  sin(2 * pi * f_trajectory * warpedTime);
    Rz = deg2rad(0.5)  *  sin(2 * pi * f_trajectory * warpedTime);
    Rx = deg2rad(0.86) * sin(2 * pi * 2 * f_trajectory * warpedTime);
    
    pose = [time, x, y, z, Rx, Ry, Rz];

end

