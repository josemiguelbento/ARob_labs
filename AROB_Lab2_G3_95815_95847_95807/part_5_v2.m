% part5.m
clear
close all
clc

% Execution options
show_pre_proc = true;
sim_sin = false;

%% Data obtention and treatment
% % chooses experiment D and uploads its values
% % load("experimentsData/dataExpD_wo_bias_from_C.mat",...
% %     'accs_out','gyros_out','timeRT','phi','theta')
% load("experimentsData/dataExpD.mat",...
%     'accs_out','gyros_out','timeRT','phi','theta')
% 
% load("experimentsData/dataExpA.mat","mean_var")
% 
% % delete some initial corrupted inputs
% countFrom = 12;
% inputTs = timeRT(2)-timeRT(1);
% input_t = (0:inputTs:timeRT(end-countFrom+1))';
% len_t = length(input_t);
% 
% accs_out(:,1) = accs_out(:,1);
% accs_out(:,2) = accs_out(:,2);
% accs_out(:,3) = accs_out(:,3) - 9.80665;
% 

file_test = "dados_testeE_v0.mat";
%file_test = "dados_teste_pitch_roll.mat";

name = (strcat('./data/',file_test));
real = load(name);

sample_times = 21:6001;
%sample_times = 1:4;

inputTs = 0.005;

input_t = real.data.time(sample_times)-real.data.time(sample_times(1));

accs_offset(1) = mean(real.data.accs(21:121,1))/100;
accs_offset(2) = mean(real.data.accs(21:121,2))/100;
accs_offset(3) = mean(real.data.accs(21:121,3))/100;


accs_out(:,1) = real.data.accs(:,1)/100 - accs_offset(1);
accs_out(:,2) = real.data.accs(:,2)/100 - accs_offset(2);
accs_out(:,3) = real.data.accs(:,3)/100 - accs_offset(3)-9.81;

% accs_out(:,1) = real.data.accs(:,1)/100;
% accs_out(:,2) = real.data.accs(:,2)/100;
% accs_out(:,3) = real.data.accs(:,3)/100;

gyros_out(:,1) = real.data.gyros(:,1);
gyros_out(:,2) = real.data.gyros(:,2);
gyros_out(:,3) = real.data.gyros(:,3);

input_t = real.data.time(sample_times)-real.data.time(sample_times(1));

%% Experimental data
% conversao para radianos dos inputs simulados
theta = real.data.euler(sample_times,2);
phi = real.data.euler(sample_times,1);

y = [input_t,accs_out(sample_times,:)];
% conversao para rad/s
wm = [input_t,gyros_out(sample_times,:)/180*pi];

% cov_w = 4e-3*[1,1,1];
% cov_bias = 1e-8*[1,1,1];
% cov_y = 8e-3*[1,1,1];

cov_w = [4e-3,4e-3,4e-3];
cov_bias = [1e-8,1e-8,1e-8];
cov_y = [8e-3,8e-3,8e-3];

%% simulated inputs
len_t = length(input_t);
if sim_sin
    theta_max = 24*pi/180;
    phi_max = 6*pi/180;
    phi_CC = 6*pi/180;
    f = 1/10;
%     sig_y = 1;           % m/s^2
%     sig_w = 1*pi/180;    % rad/s
    sig_y = 0.05;           % m/s^2
    sig_w = 0.05*pi/180;    % rad/s
    bias = [2,-3,1]*pi/180; % rad/s

    theta = theta_max*sin(2*pi*f*input_t);
    phi = phi_max*cos(2*pi*f*input_t)+phi_CC;

    wx = -phi_max*2*pi*f*sin(2*pi*f*input_t)+sig_w*randn(len_t,1)+bias(1);
    wy = theta_max*2*pi*f*cos(2*pi*f*input_t)+sig_w*randn(len_t,1)+bias(2);
    wz = sig_w*randn(len_t,1)+bias(3);

    ax = -9.81*(-sin(theta))+sig_y*randn(len_t,1);
    ay = -9.81*cos(theta).*sin(phi)+sig_y*randn(len_t,1);
    az = -9.81*cos(theta).*cos(phi)+sig_y*randn(len_t,1);

    wm = [input_t,wx,wy,wz];
    y = [input_t,ax,ay,az];
    
    cov_w = sig_w*[1,1,1];
    cov_bias = 1e-2*[1,1,1];
    cov_y = sig_y*[1,1,1];
    

end

%% pre processing plots
if show_pre_proc
    figure();
    plot(input_t,theta*180/pi,'r',input_t,phi*180/pi,'g')
    legend('theta','phi')
    xlabel('t [s]')
    ylabel('ang [º]')
    

    figure();
    plot(input_t,wm(:,2:4));
    xlabel('t [s]')
    ylabel('rate gyros [rad/s]')
    legend('\omega_x','\omega_y','\omega_z')
    
    

    figure();
    plot(input_t,y(:,2:4));
    xlabel('t [s]')
    ylabel('acc [m/s^2]')
    legend('a_x','a_y','a_z')
    

end

%% Estimator
C = [eye(3),zeros(3)];

Q = diag([cov_w,cov_bias]);
R = diag(cov_y);

x0 = [y(1,2:4)';zeros(3,1)];
P0 = Q;

sim("estimador_part5_v2.slx",input_t(end))

%% Covariance matrix trace plotting
trP = zeros(size(P.signals.values,3),1);
for i=1:length(trP)
    trP(i) = trace(P.signals.values(:,:,i));
end

ftr = figure();
ftr.Position(1:2) = [20,50];
plot(P.time,trP)
xlabel("t [s]")
ylabel("tr(P)")

%% Bias plotting
fbias = figure();
fbias.Position(1:2) = [20,200];

if sim_sin
    bias_error = [bias_est.signals.values(:,1)-bias(1),...
                  bias_est.signals.values(:,2)-bias(2),...
                  bias_est.signals.values(:,3)-bias(3)];

    plot(bias_est.time,bias_error(:,1))
    hold on
    plot(bias_est.time,bias_error(:,2))
    plot(bias_est.time,bias_error(:,3))
    hold off
    xlabel("t [s]")
    ylabel("erro do bias [rad/s]")
    legend("\omega_x","\omega_y", "\omega_z")
    
else
    plot(bias_est.time,bias_est.signals.values(:,1)*180/pi)
    hold on
    plot(bias_est.time,bias_est.signals.values(:,2)*180/pi)
    plot(bias_est.time,bias_est.signals.values(:,3)*180/pi)
    hold off
    xlabel("t [s]")
    ylabel("bias [º/s]")
    legend("\omega_x","\omega_y", "\omega_z")
end

%% Angles plotting

%-------ERROR ANALYSIS-------
%Theta
error=0;
for i=1:length(theta)
    error=(theta_est.signals.values(i)-theta(i)*180/pi)^2+error;           
end
RMSE_theta=sqrt(error/length(theta));
fprintf("RMSE theta: %f\n",RMSE_theta)

%Phi
error=0;
for i=1:length(phi)
    error=(phi_est.signals.values(i)-phi(i)*180/pi)^2+error;           
end
RMSE_phi=sqrt(error/length(phi));
fprintf("RMSE phi: %f\n",RMSE_phi)

ftheta = figure();
ftheta.Position(1:2) = [600,50];
plot(theta_est.time,theta_est.signals.values)
hold on
plot(input_t,theta*180/pi)
hold off
xlabel("t [s]")
ylabel("\theta [º]")
legend('Estimado','Teórico')

fphi = figure();
fphi.Position(1:2) = [600,200];
plot(phi_est.time,phi_est.signals.values)
hold on
plot(input_t,phi*180/pi)
hold off
xlabel("t [s]")
ylabel("\phi [º]")
legend('Estimado','Teórico')

% saveFigAsPDF(ftheta,'theta_estm_paper1');
% saveFigAsPDF(fphi,'phi_estm_paper1');