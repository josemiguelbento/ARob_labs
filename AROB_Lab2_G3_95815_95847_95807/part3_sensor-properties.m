%% 3.1
clear
close all

%file_test = ["dados_testeA_v0.mat","dados_testeA_v1.mat"];
file_test = ["dados_testeA_v0.mat"];

tempo_corte = 1001:5001;
for i = 1:length(file_test)
    
    aux1 = split(file_test(i),'dados_');
    aux2 = split(aux1(2),'.mat');
    newStr = strrep(aux2(1),'_','.');
    
    newStr = "Experiment A:";
    name = (strcat('./data/',file_test(i)));
    real(i) = load(name);
    
    %Accelerometers
    figure
    %f1.Position = [100 50 450 250];
    plot(real(i).data.time(tempo_corte), real(i).data.accs(tempo_corte,1))
    hold on
    plot(real(i).data.time(tempo_corte), real(i).data.accs(tempo_corte,2))
    plot(real(i).data.time(tempo_corte), real(i).data.accs(tempo_corte,3))
    title(newStr+" Accelerometers")
    legend('a_{x_B}','a_{y_B}','a_{z_B}', 'Location',  'east')
    ylabel('a [cm/s^2]')
    xlabel('t [s]')
    
    %Gyroscopes
    figure
    plot(real(i).data.time(tempo_corte), real(i).data.gyros(tempo_corte,1))
    hold on
    plot(real(i).data.time(tempo_corte), real(i).data.gyros(tempo_corte,2))
    plot(real(i).data.time(tempo_corte), real(i).data.gyros(tempo_corte,3))
    title(newStr+" Gyroscopes")
    legend('\omega_{x_B}','\omega_{y_B}','\omega_{z_B}')
    ylabel('\omega [º/s]')
    xlabel('t [s]')
    
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
clear real
clear test
close all

%file_test = ["dados_testeB_v0.mat","dados_testeB_v1.mat"];
file_test = ["dados_testeB_v1.mat"];

tempo_corte = 3001:5501;
%tempo_corte = 1:6001;
for i = 1:length(file_test)
    
    aux1 = split(file_test(i),'dados_');
    aux2 = split(aux1(2),'.mat');
    newStr = strrep(aux2(1),'_','.');
    
    name = (strcat('./data/',file_test(i)));
    real(i) = load(name);
    
    %Accelerometers
    figure
    %f1.Position = [100 50 450 250];
    plot(real(i).data.time(tempo_corte), real(i).data.accs(tempo_corte,1))
    hold on
    plot(real(i).data.time(tempo_corte), real(i).data.accs(tempo_corte,2))
    plot(real(i).data.time(tempo_corte), real(i).data.accs(tempo_corte,3))
    title("Experiment B: Accelerometers")
    legend('a_{x_B}','a_{y_B}','a_{z_B}', 'Location',  'east')
    ylabel('a [cm/s^2]')
    xlabel('t [s]')
    
    %Gyroscopes
    figure
    plot(real(i).data.time(tempo_corte), real(i).data.gyros(tempo_corte,1))
    hold on
    plot(real(i).data.time(tempo_corte), real(i).data.gyros(tempo_corte,2))
    plot(real(i).data.time(tempo_corte), real(i).data.gyros(tempo_corte,3))
    title("Experiment B: Gyroscopes")
    legend('\omega_{x_B}','\omega_{y_B}','\omega_{z_B}')
    ylabel('\omega [º/s]')
    xlabel('t [s]')
    
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
clear real
close all

%file_test = ["dados_testeC_v0.mat","dados_testeC_v1.mat","dados_testeC_v2.mat"];

file_test = ["dados_testeC_v1.mat"];

tempo_corte = 3001:5501;
%tempo_corte = 1:6001;
for i = 1:length(file_test)
    
    aux1 = split(file_test(i),'dados_');
    aux2 = split(aux1(2),'.mat');
    newStr = strrep(aux2(1),'_','.');
    
    name = (strcat('./data/',file_test(i)));
    real(i) = load(name);
    
    %Acelerometers
    figure
    %f1.Position = [100 50 450 250];
    plot(real(i).data.time(tempo_corte), real(i).data.accs(tempo_corte,1))
    hold on
    plot(real(i).data.time(tempo_corte), real(i).data.accs(tempo_corte,2))
    plot(real(i).data.time(tempo_corte), real(i).data.accs(tempo_corte,3))
    title("Experiment C: Accelerometers")
    legend('a_{x_B}','a_{y_B}','a_{z_B}', 'Location',  'east')
    ylabel('a [cm/s^2]')
    xlabel('t [s]')
    
    %Gyroscopes
    figure
    plot(real(i).data.time(tempo_corte), real(i).data.gyros(tempo_corte,1))
    hold on
    plot(real(i).data.time(tempo_corte), real(i).data.gyros(tempo_corte,2))
    plot(real(i).data.time(tempo_corte), real(i).data.gyros(tempo_corte,3))
    title("Experiment C: Gyroscopes")
    legend('\omega_{x_B}','\omega_{y_B}','\omega_{z_B}')
    ylabel('\omega [º/s]')
    xlabel('t [s]')
    
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
close all

%file_test = ["dados_testeD_v0_0_15_rad_3s.mat","dados_testeD_v1_0_15_rad_3s.mat"];
%file_test = ["dados_testeD_v0_0_15_rad_3s.mat"];
file_test = ["dados_testeD_v0_0_15_rad_3s.mat"];

tempo_corte = 1:6001;
for i = 1:length(file_test)
    
    aux1 = split(file_test(i),'dados_');
    aux2 = split(aux1(2),'.mat');
    newStr = strrep(aux2(1),'_','.');
    
    name = (strcat('./data/',file_test(i)));
    real(i) = load(name);
    
    %Acelerometers
    figure
    %f1.Position = [100 50 450 250];
    plot(real(i).data.time(tempo_corte), real(i).data.accs(tempo_corte,1))
    hold on
    plot(real(i).data.time(tempo_corte), real(i).data.accs(tempo_corte,2))
    plot(real(i).data.time(tempo_corte), real(i).data.accs(tempo_corte,3))
    title("Experiment Pitch/Roll: Accelerometers")
    legend('a_{x_B}','a_{y_B}','a_{z_B}', 'Location',  'east')
    ylabel('a [cm/s^2]')
    xlabel('t [s]')
    
    %Gyros
    figure
    plot(real(i).data.time(tempo_corte), real(i).data.gyros(tempo_corte,1))
    hold on
    plot(real(i).data.time(tempo_corte), real(i).data.gyros(tempo_corte,2))
    plot(real(i).data.time(tempo_corte), real(i).data.gyros(tempo_corte,3))
    title("Experiment Pitch/Roll: Gyroscopes")
    legend('\omega_{x_B}','\omega_{y_B}','\omega_{z_B}')
    ylabel('\omega [º/s]')
    xlabel('t [s]')
    
    %rename variables for readability
    ax = real(i).data.accs(tempo_corte,1);
    ay = real(i).data.accs(tempo_corte,2);
    az = real(i).data.accs(tempo_corte,3);
    roll_raw = atan(ay./az);
    pitch_raw = atan(ax./sqrt(ay.^2+az.^2));
    
    %plot pitch raw VS real
    figure
    %f1.Position = [100 50 450 250];
    plot(real(i).data.time(tempo_corte), real(i).data.euler(tempo_corte,2)*180/pi)
    hold on
    plot(real(i).data.time(tempo_corte), pitch_raw*180/pi)
    title("Pitch")
    legend('real (euler)','raw inclinometer')
    ylabel('\theta [º]')
    xlabel('t [s]')
    
    %plot roll raw VS real
    figure
    %f1.Position = [100 50 450 250];
    plot(real(i).data.time(tempo_corte), real(i).data.euler(tempo_corte,1)*180/pi)
    hold on
    plot(real(i).data.time(tempo_corte), roll_raw*180/pi)
    title("Roll")
    legend('real (euler)','raw inclinometer')
    ylabel('\phi [º]')
    xlabel('t [s]')
    
end