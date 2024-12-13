clear all

% motor parameters
R=2.9245;           % resistance [ohms]
L=3e-3;             % inductance [H]
Kt=.054;            % motor Constant [Nm/Amp]
J=0.000012;         % Motor Inertia [kg m^2]
Trated=0.27;        % rated Torque [Nm]
Tpeak=0.4;          % peak torque [Nm]
omega_max=6000;     % Maximum motor speed [RPM]

% Gear box
N=1/36;             % gear ratio
eta=.8;             % efficiency

% Torso
mT=7;
rH=0.0776;
JT=mT*rH^2*N^2;

% Energy storage spring
k=0.25*0;              % spring constant [Nm/rad]
theta0 = 60*pi/180  % preload position [rad] ... spring zero position needs to be aboce maximum heigth

% Controller
load('motor1.txt')  % Motor trajectory1
load('motor2.txt')  % Motor trajectory2
load('motor3.txt')  % Motor trajectory3
load('motor4.txt')  % Motor trajectory4
load('motor5.txt')  % Motor trajectory5
load('motor6.txt')  % Motor trajectory6

fc=40;              % controller Bandwidth [Hz]
wc=2*pi*fc;         % controller Bandwidth [rad/sec]
zc=0.707;           % controller damping ratio
dT=1e-3;            % sampling period [sec]
Umax=480;            % max voltage [V]

Cp=wc^2*(J+JT)*R/Kt;             % Proportional Gain
Cd=(2*zc*wc*((J+JT)*R)-Kt^2)/Kt  % derivative gain

simResults = sim('Hexapod006_Motor.slx');

%Motor1
time(:,1) = simResults.motor1.theta_r_ref.Time;
theta_ref(:,1)=simResults.motor1.theta_r_ref.Data;
theta_sen(:,1)=simResults.motor1.theta_r_sen.Data;
omega_m(:,1)=simResults.motor1.wm.Data;
U(:,1)=simResults.motor1.U.Data;
Tm(:,1)=simResults.motor1.Tm.Data;
index=find(time(:,1)>0.1);

subplot(4,6,1)
plot(time(index,1),theta_ref(index,1)*180/pi,time(index,1),theta_sen(index,1)*180/pi)
legend('theta_r_e_f','theta_s_e_n')
xlabel('sec'); ylabel('deg')
grid on

subplot(4,6,7)
plot(time(index,1),U(index,1))
legend('Motor Voltage')
xlabel('sec'); ylabel('V')
grid on


subplot(4,6,13)
plot(omega_m(index,1)/2/pi*60,Tm(index,1),...
    [-omega_max,omega_max],[Trated,Trated],'g-',...
    [-omega_max,omega_max],[Tpeak,Tpeak],'r-',...
    [-omega_max,omega_max],[-Trated,-Trated],'g',...
    [-omega_max,omega_max],[-Tpeak,-Tpeak],'r-')
legend('Load Curve', ...
    'Rated Torque',...
    'Peak Torque')
xlabel('RPM'); ylabel('Nm')
grid on

subplot(4,6,19)
plot(time(index,1),Tm(index,1),...
    [0,time(end,end)],[Trated,Trated],'g-',...
    [0,time(end,end)],[Tpeak,Tpeak],'r-',...
    [0,time(end,end)],[-Trated,-Trated],'g',...
    [0,time(end,end)],[-Tpeak,-Tpeak],'r-')
legend('Motor Torque', ...
    'Rated Torque',...
    'Peak Torque')
xlabel('sec'); ylabel('Nm')
grid on


%Motor2
time(:,2)=simResults.motor2.theta_r_ref.Time;
theta_ref(:,2)=simResults.motor2.theta_r_ref.Data;
theta_sen(:,2)=simResults.motor2.theta_r_sen.Data;
omega_m(:,2)=simResults.motor2.wm.Data;
U(:,2)=simResults.motor2.U.Data;
Tm(:,2)=simResults.motor2.Tm.Data;

subplot(4,6,2)
plot(time(:,2),theta_ref(:,2)*180/pi,time(:,2),theta_sen(:,2)*180/pi)
% legend('theta_r_e_f','theta_s_e_n')
xlabel('sec'); ylabel('deg')
grid on

subplot(4,6,8)
plot(time(:,2),U(:,2))
% legend('Motor Voltage')
xlabel('sec'); ylabel('V')
grid on

subplot(4,6,14)
plot(omega_m(:,2)/2/pi*60,Tm(:,2),...
    [-omega_max,omega_max],[Trated,Trated],'g-',...
    [-omega_max,omega_max],[Tpeak,Tpeak],'r-',...
    [-omega_max,omega_max],[-Trated,-Trated],'g',...
    [-omega_max,omega_max],[-Tpeak,-Tpeak],'r-')
% legend('Load Curve', ...
%     'Rated Torque',...
%     'Peak Torque')
xlabel('RPM'); ylabel('Nm')
grid on

subplot(4,6,20)
plot(time(:,2),Tm(:,2),...
    [0,time(end,end)],[Trated,Trated],'g-',...
    [0,time(end,end)],[Tpeak,Tpeak],'r-',...
    [0,time(end,end)],[-Trated,-Trated],'g',...
    [0,time(end,end)],[-Tpeak,-Tpeak],'r-')
% legend('Motor Torque', ...
%     'Rated Torque',...
%     'Peak Torque')
xlabel('sec'); ylabel('Nm')
grid on


%Motor3
time(:,3)=simResults.motor3.theta_r_ref.Time;
theta_ref(:,3)=simResults.motor3.theta_r_ref.Data;
theta_sen(:,3)=simResults.motor3.theta_r_sen.Data;
omega_m(:,3)=simResults.motor3.wm.Data;
U(:,3)=simResults.motor3.U.Data;
Tm(:,3)=simResults.motor3.Tm.Data;

subplot(4,6,3)
plot(time(:,3),theta_ref(:,3)*180/pi,time(:,3),theta_sen(:,3)*180/pi)
% legend('theta_r_e_f','theta_s_e_n')
xlabel('sec'); ylabel('deg')
grid on

subplot(4,6,9)
plot(time(:,3),U(:,3))
% legend('Motor Voltage')
xlabel('sec'); ylabel('V')
grid on

subplot(4,6,15)
plot(omega_m(:,3)/2/pi*60,Tm(:,3),...
    [-omega_max,omega_max],[Trated,Trated],'g-',...
    [-omega_max,omega_max],[Tpeak,Tpeak],'r-',...
    [-omega_max,omega_max],[-Trated,-Trated],'g',...
    [-omega_max,omega_max],[-Tpeak,-Tpeak],'r-')
% legend('Load Curve', ...
%     'Rated Torque',...
%     'Peak Torque')
xlabel('RPM'); ylabel('Nm')
grid on

subplot(4,6,21)
plot(time(:,3),Tm(:,3),...
    [0,time(end,end)],[Trated,Trated],'g-',...
    [0,time(end,end)],[Tpeak,Tpeak],'r-',...
    [0,time(end,end)],[-Trated,-Trated],'g',...
    [0,time(end,end)],[-Tpeak,-Tpeak],'r-')
% legend('Motor Torque', ...
%     'Rated Torque',...
%     'Peak Torque')
xlabel('sec'); ylabel('Nm')
grid on

%Motor4
time(:,4)=simResults.motor4.theta_r_ref.Time;
theta_ref(:,4)=simResults.motor4.theta_r_ref.Data;
theta_sen(:,4)=simResults.motor4.theta_r_sen.Data;
omega_m(:,4)=simResults.motor4.wm.Data;
U(:,4)=simResults.motor4.U.Data;
Tm(:,4)=simResults.motor4.Tm.Data;

subplot(4,6,4)
plot(time(:,4),theta_ref(:,4)*180/pi,time(:,4),theta_sen(:,4)*180/pi)
% legend('theta_r_e_f','theta_s_e_n')
xlabel('sec'); ylabel('deg')
grid on

subplot(4,6,10)
plot(time(:,4),U(:,4))
% legend('Motor Voltage')
xlabel('sec'); ylabel('V')
grid on

subplot(4,6,16)
plot(omega_m(:,4)/2/pi*60,Tm(:,4),...
    [-omega_max,omega_max],[Trated,Trated],'g-',...
    [-omega_max,omega_max],[Tpeak,Tpeak],'r-',...
    [-omega_max,omega_max],[-Trated,-Trated],'g',...
    [-omega_max,omega_max],[-Tpeak,-Tpeak],'r-')
% legend('Load Curve', ...
%     'Rated Torque',...
%     'Peak Torque')
xlabel('RPM'); ylabel('Nm')
grid on

subplot(4,6,22)
plot(time(:,4),Tm(:,4),...
    [0,time(end,end)],[Trated,Trated],'g-',...
    [0,time(end,end)],[Tpeak,Tpeak],'r-',...
    [0,time(end,end)],[-Trated,-Trated],'g',...
    [0,time(end,end)],[-Tpeak,-Tpeak],'r-')
% legend('Motor Torque', ...
%     'Rated Torque',...
%     'Peak Torque')
xlabel('sec'); ylabel('Nm')
grid on

%Motor5
time(:,5)=simResults.motor5.theta_r_ref.Time;
theta_ref(:,5)=simResults.motor5.theta_r_ref.Data;
theta_sen(:,5)=simResults.motor5.theta_r_sen.Data;
omega_m(:,5)=simResults.motor5.wm.Data;
U(:,5)=simResults.motor5.U.Data;
Tm(:,5)=simResults.motor5.Tm.Data;

subplot(4,6,5)
plot(time(:,5),theta_ref(:,5)*180/pi,time(:,5),theta_sen(:,5)*180/pi)
% legend('theta_r_e_f','theta_s_e_n')
xlabel('sec'); ylabel('deg')
grid on

subplot(4,6,11)
plot(time(:,5),U(:,5))
% legend('Motor Voltage')
xlabel('sec'); ylabel('V')
grid on

subplot(4,6,17)
plot(omega_m(:,5)/2/pi*60,Tm(:,5),...
    [-omega_max,omega_max],[Trated,Trated],'g-',...
    [-omega_max,omega_max],[Tpeak,Tpeak],'r-',...
    [-omega_max,omega_max],[-Trated,-Trated],'g',...
    [-omega_max,omega_max],[-Tpeak,-Tpeak],'r-')
% legend('Load Curve', ...
%     'Rated Torque',...
%     'Peak Torque')
xlabel('RPM'); ylabel('Nm')
grid on

subplot(4,6,23)
plot(time(:,5),Tm(:,5),...
    [0,time(end,end)],[Trated,Trated],'g-',...
    [0,time(end,end)],[Tpeak,Tpeak],'r-',...
    [0,time(end,end)],[-Trated,-Trated],'g',...
    [0,time(end,end)],[-Tpeak,-Tpeak],'r-')
% legend('Motor Torque', ...
%     'Rated Torque',...
%     'Peak Torque')
xlabel('sec'); ylabel('Nm')
grid on

%Motor6
time(:,6)=simResults.motor6.theta_r_ref.Time;
theta_ref(:,6)=simResults.motor6.theta_r_ref.Data;
theta_sen(:,6)=simResults.motor6.theta_r_sen.Data;
omega_m(:,6)=simResults.motor6.wm.Data;
U(:,6)=simResults.motor6.U.Data;
Tm(:,6)=simResults.motor6.Tm.Data;

subplot(4,6,6)
plot(time(:,6),theta_ref(:,6)*180/pi,time(:,6),theta_sen(:,6)*180/pi)
% legend('theta_r_e_f','theta_s_e_n')
xlabel('sec'); ylabel('deg')
grid on

subplot(4,6,12)
plot(time(:,6),U(:,6))
% legend('Motor Voltage')
xlabel('sec'); ylabel('V')
grid on

subplot(4,6,18)
plot(omega_m(:,6)/2/pi*60,Tm(:,6),...
    [-omega_max,omega_max],[Trated,Trated],'g-',...
    [-omega_max,omega_max],[Tpeak,Tpeak],'r-',...
    [-omega_max,omega_max],[-Trated,-Trated],'g',...
    [-omega_max,omega_max],[-Tpeak,-Tpeak],'r-')
% legend('Load Curve', ...
%     'Rated Torque',...
%     'Peak Torque')
xlabel('RPM'); ylabel('Nm')
grid on

subplot(4,6,24)
plot(time(:,6),Tm(:,6),...
    [0,time(end,end)],[Trated,Trated],'g-',...
    [0,time(end,end)],[Tpeak,Tpeak],'r-',...
    [0,time(end,end)],[-Trated,-Trated],'g',...
    [0,time(end,end)],[-Tpeak,-Tpeak],'r-')
% legend('Motor Torque', ...
%     'Rated Torque',...
%     'Peak Torque')
xlabel('sec'); ylabel('Nm')
grid on
