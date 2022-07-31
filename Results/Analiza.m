% load('Analiza_sig.mat');
% sizee   = 18000;
% 
% time_fb  = double(I_fb.time);
% i_fb     = double(I_fb.data);
% 
% time_req  = double(I_req.time);
% i_req     = double(I_req.data);
% i_req2    = spline(time_req,i_req,time_fb);
% 
% time_lins = double(linear_sensor.time);
% lins      = double(linear_sensor.data);
% lins2    = spline(time_lins,lins,time_fb);
% 
% time_pos = double(pos.time);
% pos      = double(pos.data);
% pos2     = spline(time_pos,pos,time_fb);
% 
% time_vel = double(velocity.time);
% vel      = double(velocity.data);
% vel2     = spline(time_vel,vel,time_fb);
% 
% close all;
% minn=6500;
% maxx=8500;
% figure(11);
plot(time_fb(minn:maxx),i_req2(minn:maxx),time_fb(minn:maxx),lins2(minn:maxx),time_fb(minn:maxx),vel2(minn:maxx))


%  
% CurrentReq = timeseries(i_req2(minn:maxx),(time_fb(minn:maxx)-time_fb(minn)));
% CurrentFb  = timeseries(i_fb(minn:maxx),(time_fb(minn:maxx)-time_fb(minn)));
% SensorFb   = timeseries(lins2(minn:maxx),(time_fb(minn:maxx)-time_fb(minn)));
% VelocityFb = timeseries(vel2(minn:maxx),(time_fb(minn:maxx)-time_fb(minn)));
% 
% 
% 



%% Transfer function estimation

% Time signal / System Input and Output Signals
clc

sm = 6500;
sM = 7500;
torg = time_fb(sm:sM)-time_fb(sm);
inp  = i_req2(sm:sM)/1000; % mA in A 
out  = vel2(sm:sM);

[Tu, ~, idx] = unique(torg);
inpm = accumarray(idx,inp,[],@mean);
outm = accumarray(idx,out,[],@mean);
treg = linspace(min(Tu),max(Tu), numel(Tu));
Ts   = mean(diff(treg));
Fs   = 1/Ts;
inpr = interp1(Tu-min(Tu),inpm,treg);
outr = interp1(Tu-min(Tu),outm,treg);
L    = numel(treg);

figure(2);
subplot(2,2,1);
plot(treg,inpm,treg,outm/1000);
% plot(treg,inpr,treg,outr/1000);
grid
xlabel('Time [s]');
ylabel('Amplitude');
legend('Input','Output');

Fn     = Fs / 2;
inprm  = inpr - mean(inpr);
outrm  = outr - mean(outr);
FTinpr = fft(inprm)/L;
FToutr = fft(outrm)/L;
Fv     = linspace(0,1,fix(L/2)+1)*Fn;
Iv     = 1:numel(Fv);
 figure(2);
subplot(2,2,2);
plot(Fv,abs(FTinpr(Iv)*2))
grid
title('Input Spectrum');
subplot(2,2,3);
plot(Fv,abs(FToutr(Iv)*2))
grid
title('Output Spectrum');

subplot(2,2,4);
plot(Fv,abs(FToutr(Iv)./FTinpr(Iv)))
smf = sgolayfilt(abs(FToutr(Iv)./FTinpr(Iv)),3,5);  %75
hold on;
plot(Fv,smf,'LineWidth',2)
hold off
grid
title('Transfer Function Spectrum');
legend('Original','Savitzsky-Golay Filtered')

dm  = iddata(outm,inpm,Ts);
sys = tfest(dm,1,1)

% figure(4);
% bodeplot(sys);
% grid 
  
% sim('test_observer_2018B.slx')
