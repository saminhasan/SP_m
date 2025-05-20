function [pose, tf, ts] = genPose()
    ts= 1e-3;
    n = 15;
    % ****************
    % Model parameters
    % ****************
    g=9.81;
    gm=1.5*g/2;    % muscle created g, leave at this value
    p=.33;         % stride period: between 0.33 and 0.44
                   % changes the maximum displacement:
                   %    p=0.33 --> -4cm to +2cm
                   %    p=0.40 --> -6cm to +2cm
    amax = 7.5*g;    % maximum accelertaion, little impact on displacement or velocity
    time = 0:ts:p*n' ;
    tf = time(end);

    % internal model parameters, do not touch
    o = (amax - 4*g + 4*gm + sqrt(amax^2 + 8*amax*g - 8*amax*gm))/(4*(g - gm));
    j1=p*(g*o - gm*o + g - gm)/(p*(o + 2)/(2*(o + 1)))^(o + 1);
    dt=p*(o + 2)/(2*(o + 1));
    t0=p/3;
    phi0=2*pi/p*t0;
    v0=gm*p/2/pi*sin(2*pi/p*t0); %#ok<NASGU>
    % time vector needs to restart from zero after each period
    t=mod(time-0.125,p);
    a = (-g + gm)          + gm              * cos(2*pi/p*t+phi0) + j1             * (t.*(t<dt)).^o; %#ok<NASGU>
    v = (-g + gm)   * t    + gm * (p/2/pi)   * sin(2*pi/p*t+phi0) + j1/(o+1)       * min(t,dt).^(o+1); %#ok<NASGU>
    s = (-g + gm)/2 * t.^2 - gm * (p/2/pi)^2 * cos(2*pi/p*t+phi0) + j1/(o+1)/(o+2) * min(t,dt).^(o+2) + j1/(o+1)*((t>dt).*dt).^(o+1).*(t-dt);
    f_trajectory = 1/p;
    y = s - mean(s);%(max(s)-min(s))/2;
    z = 0.05  * sin(2 * pi * f_trajectory * time)*0; % z (horizontal component, front back)
    x = 0.05  * sin(2 * pi * f_trajectory * time)*0; % x (horizontal component, left right)
    
    Ry = deg2rad(15.0)  *  sin(2 * pi * f_trajectory/2 * time + phi0 -pi/2)*0;
    Rz = deg2rad(3.0)  *  sin(2 * pi * f_trajectory/2 * time+ phi0 -pi/2)*0;
    Rx = deg2rad(2.5) * sin(2 * pi *  f_trajectory * time+ phi0 -pi/2)*0;
    pose = [time', x', y', z', Rx', Ry', Rz'];

end