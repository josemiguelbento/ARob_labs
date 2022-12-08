clear
close all
%% loading test data
file_test = "dados_testeE_v0.mat";
name = (strcat('./data/',file_test));
real = load(name);

sample_times = 1:6001;
%sample_times = 1:4;

input_t = real.data.time(sample_times)-real.data.time(sample_times(1));


accs_offset(1) = mean(real.data.accs(21:121,1))/100;
accs_offset(2) = mean(real.data.accs(21:121,2))/100;
accs_offset(3) = mean(real.data.accs(21:121,3))/100;


% accs_out(:,1) = real.data.accs(:,1)/100 - accs_offset(1);
% accs_out(:,2) = real.data.accs(:,2)/100 - accs_offset(2);
% accs_out(:,3) = real.data.accs(:,3)/100 - accs_offset(3);

accs_out(:,1) = real.data.accs(:,1)/100;
accs_out(:,2) = real.data.accs(:,2)/100;
accs_out(:,3) = real.data.accs(:,3)/100;

y = accs_out;
% conversao para rad/s
gyro_bias = [0,0,0];
wm = (real.data.gyros + gyro_bias)/180*pi;

%% simulated inputs
sim_sin = 1;
len_t = length(input_t);
if sim_sin
    theta_max = 24*pi/180;
    phi_max = 6*pi/180;
    f = 1/10;
%     sig_y = 1;           % m/s^2
%     sig_w = 1*pi/180;    % rad/s
    sig_y = 0.0005;           % m/s^2
    sig_w = 0.0005*pi/180;    % rad/s
    %bias = [2,-3,1]*pi/180; % rad/s
    bias = [0,0,0]*pi/180; % rad/s

    theta = theta_max*sin(2*pi*f*input_t);
    phi = phi_max*sin(2*pi*f*input_t);

    wx = -phi_max*2*pi*f*sin(2*pi*f*input_t)+sig_w*randn(len_t,1)+bias(1);
    wy = theta_max*2*pi*f*sin(2*pi*f*input_t)+sig_w*randn(len_t,1)+bias(2);
    wz = sig_w*randn(len_t,1)+bias(3);

    ax = -9.81*(-sin(theta))+sig_y*randn(len_t,1);
    ay = -9.81*cos(theta).*sin(phi)+sig_y*randn(len_t,1);
    az = -9.81*cos(theta).*cos(phi)+sig_y*randn(len_t,1);

    wm = [wx,wy,wz];
    y = [ax,ay,az];
    
    cov_w = sig_w*[1,1,1];
    cov_bias = 1e-2*[1,1,1];
    cov_y = sig_y*[1,1,1];
    

end

%% 


cov_w = [4e-1,4e-1,4e-1];
cov_bias = [1e-8,1e-8,1e-8];
cov_y = [8e-3,8e-3,8e-3];

C = [eye(3),zeros(3)];

Q = diag([cov_w,cov_bias]);
R = diag(cov_y);

P = Q;
x_est = [y(30,1:3)';zeros(3,1)];
%x_est = zeros(6,1);
%% Estimation loop

for i = sample_times
    % Calculating A matrix
    Swm = [0, -wm(i,3), wm(i,2);
           wm(i,3), 0, -wm(i,1);
          -wm(i,2), wm(i,1), 0];

    Sy = [0, -y(i,3), y(i,2);
           y(i,3), 0, -y(i,1);
          -y(i,2), y(i,1), 0];

    A = [-Swm,-Sy;
         zeros(3),zeros(3)];

    % Calulate P
    small_steps = 10;
    for j = 1:small_steps
        Pdot = A*P+P*A'+Q-P*C'/R*C*P;

        %integration
        P = P + Pdot*0.005/small_steps;

        K = P*C'/R;

        % dynamics equation
        x_est_dot = A*x_est+K*(y(i,:)'-C*x_est);

    %     A_cont = A-K*C;
    %     B_cont = K;
    %     C_cont = eye(size(A_cont));
    %     D_cont = zeros(size(B_cont));
    %     
    %     sys = ss(A_cont,B_cont,C_cont,D_cont);
    %     
    %     sysd = c2d(sys,0.005);
    %     
    %     x_est = lsim(sysd,y(i,:)',0.005,x_est);

        x_est = x_est + x_est_dot*0.005/small_steps;
    end
    % calculate euler
    
    ax(i) = x_est(1);
    ay(i) = x_est(2);
    az(i) = x_est(3);
    
    phi_est(i) = atan(ay(i)/az(i));
    theta_est(i) = atan(ax(i)/sqrt(ay(i)^2 +az(i)^2));
    
    bias_x(i) = x_est(4);
    bias_y(i) = x_est(5);
    bias_z(i) = x_est(6);
end

%% accelerometers estimated

figure
%plot(input_t, accs_out(sample_times,1),input_t,ax(sample_times));
plot(input_t, -9.81*(-sin(theta)),input_t,ax(sample_times));
legend('real','estimate')
title('ax')

figure
%plot(input_t, accs_out(sample_times,2),input_t,ay(sample_times));
plot(input_t, -9.81*cos(theta).*sin(phi),input_t,ay(sample_times));
legend('real','estimate')
title('ay')

figure
%plot(input_t, accs_out(sample_times,3),input_t,az(sample_times));
plot(input_t, -9.81*cos(theta).*cos(phi),input_t,az(sample_times));
legend('real','estimate')
title('az')

%% Bias estimation
figure
plot(input_t,bias_x(sample_times),input_t,bias_y(sample_times),input_t,bias_z(sample_times))
legend('bias x','bias y', 'bias z')

%% final euler
figure
%plot(input_t, real.data.euler(sample_times,1),input_t,phi_est(sample_times));
plot(input_t, phi,input_t,phi_est(sample_times));
legend('real','estimate')
title('roll')

figure
%plot(input_t, real.data.euler(sample_times,2),input_t,theta_est(sample_times));
plot(input_t, theta,input_t,theta_est(sample_times));
legend('real','estimate')
title('pitch')

