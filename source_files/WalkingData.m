clear all; close all; clc
T = readtable('ExemplarWalkingTrajectories_UBCO.xlsx','Sheet','marker trajectories');
A = table2array(T);

fs=200;
dT=1/fs;
time=A(:,1)*dT;
T1=A(:,3:5);
T10=A(:,6:8);
Sternum=A(:,9:11);
RN=A(:,12:14);
LN=A(:,15:17);

z=T10(:,3);
zd=filter([1,-1],dT,z)/1000;
zd(1)=0;
zdd=filter([1,-2,1],dT^2,z)/1000;
zdd(1:2)=zeros(size(zdd(1:2)));

Rx=atan2(-(Sternum(:,2)-T10(:,2)),Sternum(:,3)-T10(:,3));
Rxd=filter([1,-1],dT,Rx);
Rxd(1)=0;
Rxdd=filter([1,-2,1],dT^2,Rx);
Rxdd(1:2)=zeros(size(Rxdd(1:2)));

Ry=atan2(T1(:,1)-T10(:,1),T1(:,3)-T10(:,3));
Ryd=filter([1,-1],dT,Ry);
Ryd(1)=0;
Rydd=filter([1,-2,1],dT^2,Ry);
Rydd(1:2)=zeros(size(Rydd(1:2)));

Rz=atan2(-(LN(:,1)-RN(:,1)),LN(:,2)-RN(:,2));
Rzd=filter([1,-1],dT,Rz);
Rzd(1)=0;
Rzdd=filter([1,-2,1],dT^2,Rz);
Rzdd(1:2)=zeros(size(Rzdd(1:2)));



figure(1)
subplot(4,2,1);
plot(time,z-mean(z));
title('z'),xlabel('sec'),ylabel('mm')
grid on
subplot(4,2,3);
plot(time,zd);
title('zd'),xlabel('sec'),ylabel('m/s')
grid on

subplot(4,2,2);
plot(time,Rx);
title('Rx'),xlabel('sec'),ylabel('deg')
grid on
subplot(4,2,4);
plot(time,Rxd);
title('Rxd'),xlabel('sec'),ylabel('deg/s')
grid on


subplot(4,2,5);
plot(time,Ry);
title('Rx'),xlabel('sec'),ylabel('deg')
grid on
subplot(4,2,7);
plot(time,Ryd);
title('Ryd'),xlabel('sec'),ylabel('deg/s')
grid on

subplot(4,2,6);
plot(time,Rz);
title('Rz'),xlabel('sec'),ylabel('deg')
grid on
subplot(4,2,8);
plot(time,Rxd);
title('Rzd'),xlabel('sec'),ylabel('deg/s')
grid on

% frequency ectraction data range
index=find(time>10 & time<50);

% fourier transforms
frequency=[0:1:length(index)-1]*fs/(length(index)-1);
Z=fft(z(index))*2/length(index);
RX=fft(Rx(index))*2/length(index);
RY=fft(Ry(index))*2/length(index);
RZ=fft(Rz(index))*2/length(index);

% Magnitude extractions
Zm=max(abs(Z(2:round(length(index)/2))));
indexZ = find(abs(Z)==Zm);
Zf=frequency(indexZ(1));

RXm=max(abs(RX(2:round(length(index)/2))));
indexRX = find(abs(RX)==RXm);
RXf=frequency(indexRX(1));

RYm=max(abs(RY(2:round(length(index)/2))));
indexRY = find(abs(RY)==RYm);
RYf=frequency(indexRY(1));

RZm=max(abs(RZ(2:round(length(index)/2))));
indexRZ = find(abs(RZ)==RZm);
RZf=frequency(indexRZ(1));

figure(2)
subplot(2,2,1);
plot(frequency(2:end),abs(Z(2:end)),Zf,Zm,'o')
axis([0,5,0,Zm*1.1]);
title(['Z(',num2str(round(Zf,1)),'Hz)=',num2str(round(Zm)),'mm'])
xlabel('Hz'),ylabel('mm')
grid on

subplot(2,2,2);
plot(frequency(2:end),abs(RX(2:end)),RXf,RXm,'o')
axis([0,5,0,RXm*1.1]);
title(['RX(',num2str(round(RXf,1)),'Hz)=',num2str(round(RXm)),'deg'])
xlabel('Hz'),ylabel('deg')
grid on

subplot(2,2,3);
plot(frequency(2:end),abs(RY(2:end)),RYf,RYm,'o')
axis([0,5,0,RYm*1.1]);
title(['RY(',num2str(round(RYf,1)),'Hz)=',num2str(round(RYm)),'deg'])
xlabel('Hz'),ylabel('deg')
grid on

subplot(2,2,4);
plot(frequency(2:end),abs(RZ(2:end)),RZf,RZm,'o')
axis([0,5,0,RZm*1.1]);
title(['RZ(',num2str(round(RZf,1)),'Hz)=',num2str(round(RZm)),'deg'])
xlabel('Hz'),ylabel('deg')
grid on


