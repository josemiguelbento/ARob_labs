%% 3.1
clear all
%close all

file_test = ["dados_testeA_v0.mat"];

tempo_corte = 1001:5001;
for i = 1:length(file_test)
    
    aux1 = split(file_test(i),'dados_');
    aux2 = split(aux1(2),'.mat');
    newStr = strrep(aux2(1),'_','.');
    
    newStr = "Experiment A";
    name = (strcat('./data/',file_test(i)));
    real(i) = load(name);
    

    figure
    %f1.Position = [100 50 450 250];
    plot(real(i).data.time(tempo_corte), real(i).data.accs(tempo_corte,1))
    hold on
    plot(real(i).data.time(tempo_corte), real(i).data.accs(tempo_corte,2))
    plot(real(i).data.time(tempo_corte), real(i).data.accs(tempo_corte,3))
    title(newStr+" accelerometer")
    legend('accel x','accel y','accel z')
    ylabel('accel (mm/s^2)')
    xlabel('time (s)')
    figure
    plot(real(i).data.time(tempo_corte), real(i).data.gyros(tempo_corte,1))
    hold on
    plot(real(i).data.time(tempo_corte), real(i).data.gyros(tempo_corte,2))
    plot(real(i).data.time(tempo_corte), real(i).data.gyros(tempo_corte,3))
    title(newStr+" gyroscope")
    legend('gyros x','gyros y','gyros z')
    ylabel('ang veloc (deg/s)')
    xlabel('time (s)')
    
    %calculations
    test = struct();
    test.('accel_x_mean') = mean(real(i).data.accs(tempo_corte,1));
    test.('accel_x_var') = var(real(i).data.accs(tempo_corte,1));
    test.('accel_y_mean') = mean(real(i).data.accs(tempo_corte,2));
    test.('accel_y_var') = var(real(i).data.accs(tempo_corte,2));
    test.('accel_z_mean') = mean(real(i).data.accs(tempo_corte,3));
    test.('accel_z_var') = var(real(i).data.accs(tempo_corte,3));
    
    test.('gyros_x_mean') = mean(real(i).data.gyros(tempo_corte,1));
    test.('gyros_x_var') = var(real(i).data.gyros(tempo_corte,1));
    test.('gyros_y_mean') = mean(real(i).data.gyros(tempo_corte,2));
    test.('gyros_y_var') = var(real(i).data.gyros(tempo_corte,2));
    test.('gyros_z_mean') = mean(real(i).data.gyros(tempo_corte,3));
    test.('gyros_z_var') = var(real(i).data.gyros(tempo_corte,3));
    
    test_a_results(i) = test;
    
end


%% 3.2
clear all
%close all

file_test = ["dados_testeB_v1.mat"];

tempo_corte = 3001:5501;
for i = 1:length(file_test)
    
    aux1 = split(file_test(i),'dados_');
    aux2 = split(aux1(2),'.mat');
    newStr = strrep(aux2(1),'_','.');
    
    name = (strcat('./data/',file_test(i)));
    real(i) = load(name);
    

    figure
    plot(real(i).data.time(tempo_corte), real(i).data.accs(tempo_corte,1))
    hold on
    plot(real(i).data.time(tempo_corte), real(i).data.accs(tempo_corte,2))
    plot(real(i).data.time(tempo_corte), real(i).data.accs(tempo_corte,3))
    title(newStr+" accels")
    legend('accel x','accel y','accel z')
    ylabel('accel (mm/s^2)')
    xlabel('time (s)')
    figure
    plot(real(i).data.time(tempo_corte), real(i).data.gyros(tempo_corte,1))
    hold on
    plot(real(i).data.time(tempo_corte), real(i).data.gyros(tempo_corte,2))
    plot(real(i).data.time(tempo_corte), real(i).data.gyros(tempo_corte,3))
    title(newStr+" gyros")
    legend('gyros x','gyros y','gyros z')
    ylabel('ang veloc (deg/s)')
    xlabel('time (s)')
    
    %calculations
    test = struct();
    test.('accel_x_mean') = mean(real(i).data.accs(tempo_corte,1));
    test.('accel_x_var') = var(real(i).data.accs(tempo_corte,1));
    test.('accel_y_mean') = mean(real(i).data.accs(tempo_corte,2));
    test.('accel_y_var') = var(real(i).data.accs(tempo_corte,2));
    test.('accel_z_mean') = mean(real(i).data.accs(tempo_corte,3));
    test.('accel_z_var') = var(real(i).data.accs(tempo_corte,3));
    
    test.('gyros_x_mean') = mean(real(i).data.gyros(tempo_corte,1));
    test.('gyros_x_var') = var(real(i).data.gyros(tempo_corte,1));
    test.('gyros_y_mean') = mean(real(i).data.gyros(tempo_corte,2));
    test.('gyros_y_var') = var(real(i).data.gyros(tempo_corte,2));
    test.('gyros_z_mean') = mean(real(i).data.gyros(tempo_corte,3));
    test.('gyros_z_var') = var(real(i).data.gyros(tempo_corte,3));
    
    test_b_results(i) = test;
    
end

%% 3.3
clear all
%close all

file_test = ["dados_testeC_v1.mat"];

tempo_corte = 3001:5501;
for i = 1:length(file_test)
    
    aux1 = split(file_test(i),'dados_');
    aux2 = split(aux1(2),'.mat');
    newStr = strrep(aux2(1),'_','.');
    
    name = (strcat('./data/',file_test(i)));
    real(i) = load(name);
    

    figure
    plot(real(i).data.time(tempo_corte), real(i).data.accs(tempo_corte,1))
    hold on
    plot(real(i).data.time(tempo_corte), real(i).data.accs(tempo_corte,2))
    plot(real(i).data.time(tempo_corte), real(i).data.accs(tempo_corte,3))
    title(newStr+" accels")
    legend('accel x','accel y','accel z')
    ylabel('acel (mm/s^2)')
    xlabel('time (s)')
    figure
    plot(real(i).data.time(tempo_corte), real(i).data.gyros(tempo_corte,1))
    hold on
    plot(real(i).data.time(tempo_corte), real(i).data.gyros(tempo_corte,2))
    plot(real(i).data.time(tempo_corte), real(i).data.gyros(tempo_corte,3))
    title(newStr+" gyros")
    legend('gyros x','gyros y','gyros z')
    ylabel('veloc ang')
    xlabel('time (s)')
    
    %calculations
    test = struct();
    test.('accel_x_mean') = mean(real(i).data.accs(tempo_corte,1));
    test.('accel_x_var') = var(real(i).data.accs(tempo_corte,1));
    test.('accel_y_mean') = mean(real(i).data.accs(tempo_corte,2));
    test.('accel_y_var') = var(real(i).data.accs(tempo_corte,2));
    test.('accel_z_mean') = mean(real(i).data.accs(tempo_corte,3));
    test.('accel_z_var') = var(real(i).data.accs(tempo_corte,3));
    
    test.('gyros_x_mean') = mean(real(i).data.gyros(tempo_corte,1));
    test.('gyros_x_var') = var(real(i).data.gyros(tempo_corte,1));
    test.('gyros_y_mean') = mean(real(i).data.gyros(tempo_corte,2));
    test.('gyros_y_var') = var(real(i).data.gyros(tempo_corte,2));
    test.('gyros_z_mean') = mean(real(i).data.gyros(tempo_corte,3));
    test.('gyros_z_var') = var(real(i).data.gyros(tempo_corte,3));
    
    test_c_results(i) = test;
    
end

%% 3.4
clear real
%close all

file_test = ["dados_teste_pitch_roll.mat"];

tempo_corte = 1:6001;
for i = 1:length(file_test)
    
    aux1 = split(file_test(i),'dados_');
    aux2 = split(aux1(2),'.mat');
    newStr = strrep(aux2(1),'_','.');
    
    name = (strcat('./data/',file_test(i)));
    real(i) = load(name);
    
    
    figure
    plot(real(i).data.time(tempo_corte), real(i).data.accs(tempo_corte,1))
    hold on
    plot(real(i).data.time(tempo_corte), real(i).data.accs(tempo_corte,2))
    plot(real(i).data.time(tempo_corte), real(i).data.accs(tempo_corte,3))
    title(newStr+" accels")
    legend('accel x','accel y','accel z')
    ylabel('acel (mm/s^2)')
    xlabel('time (s)')
    
    figure
    plot(real(i).data.time(tempo_corte), real(i).data.gyros(tempo_corte,1))
    hold on
    plot(real(i).data.time(tempo_corte), real(i).data.gyros(tempo_corte,2))
    plot(real(i).data.time(tempo_corte), real(i).data.gyros(tempo_corte,3))
    title(newStr+" gyros")
    legend('gyros x','gyros y','gyros z')
    ylabel('veloc ang')
    xlabel('time (s)')
    
    ax = real(i).data.accs(tempo_corte,1);
    ay = real(i).data.accs(tempo_corte,2);
    az = real(i).data.accs(tempo_corte,3);
    roll_raw = atan(ay./az);
    pitch_raw = atan(ax./sqrt(ay.^2+az.^2));
    
    figure
    plot(real(i).data.time(tempo_corte), real(i).data.euler(tempo_corte,2))
    hold on
    plot(real(i).data.time(tempo_corte), pitch_raw)
    title("Pitch")
    legend('real','raw inclinometer')
    ylabel('inclin')
    xlabel('time (s)')
    
    figure
    plot(real(i).data.time(tempo_corte), real(i).data.euler(tempo_corte,1))
    hold on
    plot(real(i).data.time(tempo_corte), roll_raw)
    title("Roll")
    legend('real','raw inclinometer')
    ylabel('inclin')
    xlabel('time (s)')
    
end


%% 4.1
clear all
%close all

A = 0;
B = 1;
C = 1;
D = 0;
G = 1;
H = 0;

Q = 1e-2;
R = 1e-1;

sys = ss(A, [B G], C, [D H]);
% Kalman filter
[kalmf, L, P] = kalman(sys, Q, R,0);

file_test = ["dados_testeE_v0.mat"];

tempo_corte = 1:6001;

for i = 1:length(file_test)
    
    aux1 = split(file_test(i),'dados_');
    aux2 = split(aux1(2),'.mat');
    newStr = strrep(aux2(1),'_','.');
    
    name = (strcat('./data/',file_test(i)));
    real(i) = load(name);
    
    ax = real(i).data.accs(tempo_corte,1);
    ay = real(i).data.accs(tempo_corte,2);
    az = real(i).data.accs(tempo_corte,3);
    roll_raw = atan(ay./az);
    pitch_raw = atan(ax./sqrt(ay.^2+az.^2));
    
    %kalman calulation
    roll_raw(isnan(roll_raw))=0;
    t = real(i).data.time(tempo_corte);
    u = [real(i).data.gyros(tempo_corte,1)/180*pi, roll_raw];
    %u = [roll_raw,real(i).data.gyros(tempo_corte,1)];
    x0 = 0;
    [y,x] = lsim(kalmf.A,kalmf.B,kalmf.C,kalmf.D,u,t,x0);
    
    kalman_roll = y(:,1);

    pitch_raw(isnan(pitch_raw))=0;
    t = real(i).data.time(tempo_corte);
    u = [real(i).data.gyros(tempo_corte,2)/180*pi, pitch_raw];
    x0 = 0;
    [y,x] = lsim(kalmf.A,kalmf.B,kalmf.C,kalmf.D,u,t,x0);
    
    kalman_pitch = y(:,1);
    
    %integration of gyroscopes
    
    roll_gyro = 0.005*cumtrapz(real(i).data.gyros(tempo_corte,1)/180*pi);
    pitch_gyro = 0.005*cumtrapz(real(i).data.gyros(tempo_corte,2)/180*pi);
    
    % Final plots ----------------------------------------------
    figure
    plot(real(i).data.time(tempo_corte), real(i).data.euler(tempo_corte,2)*180/pi)
    hold on
    plot(real(i).data.time(tempo_corte), pitch_raw*180/pi)
    plot(t,pitch_gyro*180/pi)
    plot(t,kalman_pitch*180/pi)
    title(strcat("Pitch estimation for Q = ",string(Q)," R = ", string(R)))
    legend('real','raw inclinometer','gyro integration','kalman estimation', 'Location','southeast')
    ylabel('\theta [º]')
    xlabel('t (s)')
    
    figure
    plot(real(i).data.time(tempo_corte), real(i).data.euler(tempo_corte,1)*180/pi)
    hold on
    plot(real(i).data.time(tempo_corte), roll_raw*180/pi)
    plot(t,roll_gyro*180/pi)
    plot(t,kalman_roll*180/pi)
    title(strcat("Roll estimation for Q = ",string(Q)," R = ", string(R)))
    legend('real','raw inclinometer','gyro integration','kalman estimation', 'Location','southwest')
    ylabel('\phi [º]')
    xlabel('t (s)')
    
end

%% 4.4
clear all
%close all

A1= [0 -1;0 0];
B1= [1 ; 0]; 
C1= [1 0]; 
D1= 0;
G1= eye(2);
H1= [0 0];

Q1 = [1e-2 0;
    0 1e-2];
R1 = 1e-1;

sys1 = ss(A1,[B1 G1],C1,[D1 H1]);

[kalmf1, L1, P1] = kalman(sys1, Q1, R1,0);

file_test = ["dados_testeE_v0.mat"];

bias1 = 6*pi/180;
bias2 = 12*pi/180;

tempo_corte = 1:6001;

for i = 1:length(file_test)
    
    aux1 = split(file_test(i),'dados_');
    aux2 = split(aux1(2),'.mat');
    newStr = strrep(aux2(1),'_','.');
    
    name = (strcat('./data/',file_test(i)));
    real(i) = load(name);
    
    
    ax = real(i).data.accs(tempo_corte,1);
    ay = real(i).data.accs(tempo_corte,2);
    az = real(i).data.accs(tempo_corte,3);
    roll_raw = atan(ay./az);
    pitch_raw = atan(ax./sqrt(ay.^2+az.^2));
    
    %kalman calulation
    roll_raw(isnan(roll_raw))=0;
    t = real(i).data.time(tempo_corte);
    u = [real(i).data.gyros(tempo_corte,1)/180*pi + bias1, roll_raw];
    %u = [roll_raw,real(i).data.gyros(tempo_corte,1)];
    x0 = [0 0];
    [y,x] = lsim(kalmf1.A,kalmf1.B,kalmf1.C,kalmf1.D,u,t,x0);
    kalman_roll = y(:,1);
    bias1_estim = x(:,2);
    
    pitch_raw(isnan(pitch_raw))=0;
    t = real(i).data.time(tempo_corte);
    u = [real(i).data.gyros(tempo_corte,2)/180*pi + bias2, pitch_raw];
    %u = [pitch_raw,real(i).data.gyros(tempo_corte,2)];
    x0 = [0 0];
    [y,x] = lsim(kalmf1.A,kalmf1.B,kalmf1.C,kalmf1.D,u,t,x0);
    kalman_pitch = y(:,1);
    bias2_estim = x(:,2);
    
    %integration of gyroscopes
    
    roll_gyro = 0.005*cumtrapz(real(i).data.gyros(tempo_corte,1)/180*pi+bias1);
    pitch_gyro = 0.005*cumtrapz(real(i).data.gyros(tempo_corte,2)/180*pi+bias2);
    
    figure
    plot(t,roll_gyro*180/pi,t,pitch_gyro*180/pi)
    legend('Roll','Pitch')
    title("Estimation from gyroscope integration")
    xlabel('t [s]')
    ylabel('attitude [º]')
    
    figure
    plot(t,bias1_estim*180/pi,t,bias2_estim*180/pi);
    legend('bias Roll','bias Pitch')
    title("Bias estimation")
    xlabel('t [s]')
    ylabel('bias [º/s]')
    
    % Final plots ----------------------------------------------
    figure
    plot(real(i).data.time(tempo_corte), real(i).data.euler(tempo_corte,2)*180/pi)
    hold on
    plot(real(i).data.time(tempo_corte), pitch_raw*180/pi)
    plot(t,kalman_pitch*180/pi)
    title("Pitch")
    legend('real','raw inclinometer','kalman', 'Location', 'southeast')
    ylabel('\theta [º]')
    xlabel('t (s)')
    
    figure
    plot(real(i).data.time(tempo_corte), real(i).data.euler(tempo_corte,1)*180/pi)
    hold on
    plot(real(i).data.time(tempo_corte), roll_raw*180/pi)
    plot(t,kalman_roll*180/pi)
    title("Roll")
    legend('real','raw inclinometer','kalman', 'Location', 'southwest')
    ylabel('\phi [º]')
    xlabel('t (s)')
    
end

%% 4.6 - results comparison analysis
clear all
%close all

A = 0;
B = 1;
C = 1;
D = 0;
G = 1;
H = 0;

Q = 1e-2;
R = 1e-1;

sys = ss(A, [B G], C, [D H]);
% Kalman filter
[kalmf, L, P] = kalman(sys, Q, R,0);

% file_test = ["dados_testeA_v0.mat","dados_testeA_v1.mat", ...
%     "dados_testeB_v0.mat","dados_testeB_v1.mat", ...
%     "dados_testeC_v0.mat","dados_testeC_v1.mat","dados_testeC_v2.mat", ...
%     "dados_testeD_v0_0_15_rad_3s.mat","dados_testeD_v1_0_15_rad_3s.mat", ...
%     "dados_testeE_v0.mat","dados_testeE_v1.mat", ...
%     "dados_teste_pitch_roll.mat","dados_teste_roll_pitch_v1.mat"];

file_test = ["dados_testeA_v1.mat", ...
    "dados_testeB_v0.mat", ...
    "dados_testeC_v2.mat", ...
    "dados_testeD_v0_0_15_rad_3s.mat", ...
    "dados_testeE_v0.mat", ...
    "dados_teste_roll_pitch_v1.mat"];

tempo_corte = 1:6001;

for i = 1:length(file_test)
    
    aux1 = split(file_test(i),'dados_');
    aux2 = split(aux1(2),'.mat');
    newStr = strrep(aux2(1),'_','.');
    
    name = (strcat('./data/',file_test(i)));
    real(i) = load(name);
    
    
    ax = real(i).data.accs(tempo_corte,1);
    ay = real(i).data.accs(tempo_corte,2);
    az = real(i).data.accs(tempo_corte,3);
    roll_raw = atan(ay./az);
    pitch_raw = atan(ax./sqrt(ay.^2+az.^2));
   
    %kalman calulation
    roll_raw(isnan(roll_raw))=0;
    t = real(i).data.time(tempo_corte);
    u = [real(i).data.gyros(tempo_corte,1)/180*pi, roll_raw];
    x0 = 0;
    [y,x] = lsim(kalmf.A,kalmf.B,kalmf.C,kalmf.D,u,t,x0);
    
    kalman_roll = y(:,1);
    
    pitch_raw(isnan(pitch_raw))=0;
    t = real(i).data.time(tempo_corte);
    u = [real(i).data.gyros(tempo_corte,2)/180*pi, pitch_raw];
    x0 = 0;
    [y,x] = lsim(kalmf.A,kalmf.B,kalmf.C,kalmf.D,u,t,x0);
    
    kalman_pitch = y(:,1);
        
    %integration of gyroscopes
    
    roll_gyro = 0.005*cumtrapz(real(i).data.gyros(tempo_corte,1)/180*pi);
    pitch_gyro = 0.005*cumtrapz(real(i).data.gyros(tempo_corte,2)/180*pi);
    
    % Final plots ----------------------------------------------
    figure
    %f1.Position = [100 50 450 250];
    plot(real(i).data.time(tempo_corte), real(i).data.euler(tempo_corte,2)*180/pi)
    hold on
    plot(real(i).data.time(tempo_corte), pitch_raw*180/pi)
    plot(t,pitch_gyro*180/pi)
    plot(t,kalman_pitch*180/pi)
    title(strcat("Pitch estimation for Q = ",string(Q)," R = ", string(R)))
    legend('real','raw inclinometer','gyro integration','kalman estimation', 'Location','southeast')
    ylabel('\theta [º]')
    xlabel('t (s)')
    
    figure
    %f1.Position = [100 50 450 250];
    plot(real(i).data.time(tempo_corte), real(i).data.euler(tempo_corte,1)*180/pi)
    hold on
    plot(real(i).data.time(tempo_corte), roll_raw*180/pi)
    plot(t,roll_gyro*180/pi)
    plot(t,kalman_roll*180/pi)
    title(strcat("Roll estimation for Q = ",string(Q)," R = ", string(R)))
    legend('real','raw inclinometer','gyro integration','kalman estimation', 'Location','southwest')
    ylabel('\phi [º]')
    xlabel('t (s)')
    
    
    rms_methods(1,2*i-1) = rms(real(i).data.euler(tempo_corte,2)*180/pi-pitch_raw*180/pi);
    rms_methods(1,2*i) = rms(real(i).data.euler(tempo_corte,1)*180/pi-roll_raw*180/pi);
    
    rms_methods(2,2*i-1) = rms(real(i).data.euler(tempo_corte,2)*180/pi-pitch_gyro*180/pi);
    rms_methods(2,2*i) = rms(real(i).data.euler(tempo_corte,1)*180/pi-roll_gyro*180/pi);
    
    rms_methods(3,2*i-1) = rms(real(i).data.euler(tempo_corte,2)*180/pi-kalman_pitch*180/pi);
    rms_methods(3,2*i) = rms(real(i).data.euler(tempo_corte,1)*180/pi-kalman_roll*180/pi);
end




A1= [0 -1;0 0];
B1= [1 ; 0]; 
C1= [1 0]; 
D1= 0;
G1= eye(2);
H1= [0 0];

Q1 = [1e-2 0;
    0 1e-2];
R1 = 1e-1;

sys1 = ss(A1,[B1 G1],C1,[D1 H1]);

[kalmf1, L1, P1] = kalman(sys1, Q1, R1,0);

bias1 = 0*pi/180;
bias2 = 0*pi/180;

tempo_corte = 1:6001;

for i = 1:length(file_test)
    
    aux1 = split(file_test(i),'dados_');
    aux2 = split(aux1(2),'.mat');
    newStr = strrep(aux2(1),'_','.');
    
    name = (strcat('./data/',file_test(i)));
    real(i) = load(name);
    
    
    ax = real(i).data.accs(tempo_corte,1);
    ay = real(i).data.accs(tempo_corte,2);
    az = real(i).data.accs(tempo_corte,3);
    roll_raw = atan(ay./az);
    pitch_raw = atan(ax./sqrt(ay.^2+az.^2));
    
    %kalman calulation
    roll_raw(isnan(roll_raw))=0;
    t = real(i).data.time(tempo_corte);
    u = [real(i).data.gyros(tempo_corte,1)/180*pi + bias1, roll_raw];
    %u = [roll_raw,real(i).data.gyros(tempo_corte,1)];
    x0 = [0 0];
    [y,x] = lsim(kalmf1.A,kalmf1.B,kalmf1.C,kalmf1.D,u,t,x0);
    kalman_roll = y(:,1);
    
    bias1_estim = x(:,2);
    
%     figure
%     plot(t,y(:,1))
%     hold on
    
    pitch_raw(isnan(pitch_raw))=0;
    t = real(i).data.time(tempo_corte);
    u = [real(i).data.gyros(tempo_corte,2)/180*pi + bias2, pitch_raw];
    %u = [pitch_raw,real(i).data.gyros(tempo_corte,2)];
    x0 = [0 0];
    [y,x] = lsim(kalmf1.A,kalmf1.B,kalmf1.C,kalmf1.D,u,t,x0);
    kalman_pitch = y(:,1);
    
    bias2_estim = x(:,2);
    
    %integration of gyroscopes
    
    roll_gyro = 0.005*cumtrapz(real(i).data.gyros(tempo_corte,1)/180*pi+bias1);
    pitch_gyro = 0.005*cumtrapz(real(i).data.gyros(tempo_corte,2)/180*pi+bias2);
    
    % Final plots ----------------------------------------------
    figure
    %f1.Position = [100 50 450 250];
    plot(real(i).data.time(tempo_corte), real(i).data.euler(tempo_corte,2)*180/pi)
    hold on
    plot(real(i).data.time(tempo_corte), pitch_raw*180/pi)
    plot(t,pitch_gyro*180/pi)
    plot(t,kalman_pitch*180/pi)
    title(strcat("Pitch estimation for Q = ",string(Q)," R = ", string(R)))
    legend('real','raw inclinometer','gyro integration','kalman estimation', 'Location','southeast')
    ylabel('\theta [º]')
    xlabel('t (s)')
    
    figure
    %f1.Position = [100 50 450 250];
    plot(real(i).data.time(tempo_corte), real(i).data.euler(tempo_corte,1)*180/pi)
    hold on
    plot(real(i).data.time(tempo_corte), roll_raw*180/pi)
    plot(t,roll_gyro*180/pi)
    plot(t,kalman_roll*180/pi)
    title(strcat("Roll estimation for Q = ",string(Q)," R = ", string(R)))
    legend('real','raw inclinometer','gyro integration','kalman estimation', 'Location','southwest')
    ylabel('\phi [º]')
    xlabel('t (s)')
    
    rms_methods(4,2*i-1) = rms(real(i).data.euler(tempo_corte,2)*180/pi-kalman_pitch*180/pi);
    rms_methods(4,2*i) = rms(real(i).data.euler(tempo_corte,1)*180/pi-kalman_roll*180/pi);
end


