clc;close all;clear all; %#ok<CLALL>
hexapod = get_params();

[pose, tf, ts] = genaratePoseImu();

z=pose(6500:7500,3);
time = [0:1:length(z)-1]*ts;
a=filter([1,-2,1],ts^2,z);
a(1)=a(3);
a(2)=a(3);
Z=fft(z)*2/length(z);
Zpeak = Z;
Zpeak(45:955)=0;
A=fft(a)*2/length(a);
zpeak = ifft(Zpeak)/2*length(z);
apeak=filter([1,-2,1],ts^2,zpeak);
apeak(1)=apeak(3);
apeak(2)=apeak(3);


freq = [0:1:(length(z)-1)]/length(z)/ts;
subplot(2,2,1)
plot(time,z,time,zpeak);
subplot(2,2,3)
plot(time,a,time,apeak)
subplot(2,2,2);
plot(freq,abs(Z),freq,abs(Zpeak));
%axis([0,15,0,.03])
subplot(2,2,4);
plot(freq,angle(Z)*180/pi,freq,angle(Zpeak)*180/pi)
axis([0,20,-180,180])
