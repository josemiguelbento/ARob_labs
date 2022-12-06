clear
close all

file_test = ["test_height_k_0_5_h_1.mat", "test_height_k_1_h_0_8.mat", "test_height_k_2_h_0_3.mat", "test_height_k_3_h_0_2.mat"];
file_sim = ["sim_height_k_0_5_h_1.mat", "sim_height_k_1_h_0_8.mat", "sim_height_k_2_h_0_3.mat", "sim_height_k_3_h_0_2.mat"];

tempo_corte = 501:2001;
for i = 1:length(file_test)
    aux1 = split(file_test(i),'height_');
    aux2 = split(aux1(2),'.mat');
    aux3 = split(aux2(1),'_h');
    aux4 = strrep(aux3(1),'k_','k = ');
    newStr = strrep(aux4,'_','.');
    
    Legend{i}=newStr;
    
    %disp(file(i))
    name = (strcat('./data/',file_test(i)));
    real(i) = load(name);
    
    name = (strcat('./data/',file_sim(i)));
    sim(i) = load(name);
    
    
    f1 = figure(1);
    %f1.Position = [100 50 450 250];
    subplot(2,2,i);
    plot(real(i).data.time(tempo_corte), real(i).data.h(tempo_corte))
    hold on
    plot(sim(i).data.time(tempo_corte), sim(i).data.h(tempo_corte))
    plot(real(i).data.time(tempo_corte),real(i).data.h_ref(tempo_corte))
    title(strcat("System response to height step reference for ",newStr))
    legend('h real','h ref real','h sim')
    ylabel('height (m)')
    xlabel('time (s)')
    xlim([15 60])
    
end

saturation = load('./data/test_height_k_3_h_1.mat');
figure
plot(saturation.data.time(tempo_corte), saturation.data.h(tempo_corte))
hold on
plot(saturation.data.time(tempo_corte), saturation.data.h_dot_ref(tempo_corte))
plot(saturation.data.time(tempo_corte), saturation.data.h_ref(tempo_corte))


%%
clear
close all

%load('./data/test_pitch_3s_step_a_0_2_v2.mat')

%file = ["test_height_k_0_5_h_1.mat", "test_height_k_1_h_0_8.mat", "test_height_k_2_h_0_3.mat", "test_height_k_3_h_0_2.mat", "test_height_k_3_h_1.mat"];
file = ["test_height_k_0_5_h_1.mat", "test_height_k_1_h_0_8.mat", "test_height_k_2_h_0_3.mat", "test_height_k_3_h_0_2.mat"];

tempo_corte = 500:1668;
Legend=cell(length(file),1);

for i = 1:length(file)
    aux1 = split(file(i),'height_');
    aux2 = split(aux1(2),'.mat');
    aux3 = split(aux2(1),'_h');
    aux4 = strrep(aux3(1),'k_','k = ');
    newStr = strrep(aux4,'_','.');
    
    Legend{i}=newStr;
    
    %disp(file(i))
    name = (strcat('./data/',file(i)));
    %a(i) = load(strcat('./data/',file));
    a(i) = load(name);
    u = a(i).data.h_ref(tempo_corte);
    y = a(i).data.h(tempo_corte);

    Ts = 0.03;
    fit = iddata(y,u,Ts);
    %get(fit);
    f1 = figure(1);
    %f1.Position = [100 50 450 250];
    subplot(2,2,i);
    %figure(i+2)
    plot(fit)
    title(newStr)

    Opt = tfestOptions('Display','on');
    np = [2];
    ioDelay = [0];
    mtf = tfest(fit, np,ioDelay,Opt);

    figure(2)
    bode(mtf)
    hold on
    
    figure(3)
    pzmap(mtf)
    hold on
    
    tf_num(i,:) = mtf.Numerator;
    tf_den(i,:) = mtf.Denominator;
    fit_percent(i) = mtf.Report.Fit.FitPercent;
    
    output_sim = 0.75+lsim(mtf,a(i).data.h_ref(tempo_corte)-0.75,a(i).data.time(tempo_corte));
    
    f2 = figure(4);
    %f1.Position = [100 50 450 250];
    subplot(2,2,i);
    %figure(i+2)
    plot(a(i).data.time(tempo_corte),a(i).data.h(tempo_corte))
    hold on
    plot(a(i).data.time(tempo_corte),output_sim)
    plot(a(i).data.time(tempo_corte),a(i).data.h_ref(tempo_corte))
    legend('real','simulated','reference')
    title(newStr)
    xlabel('time (s)')
    ylabel('height (m)')
    
    
end



figure(2)
legend(Legend)

figure(3)
legend(Legend,'Location','northwest')

%%
% load('./data/test_pitch_3s_step_a_0_2.mat')
% figure
% plot(data.time, data.pitch_ref, data.time,data.pitch);
% legend('h real','h ref')

%% pz map for simulation
clear
close all

%load('./data/test_pitch_3s_step_a_0_2_v2.mat')

%file = ["test_height_k_0_5_h_1.mat", "test_height_k_1_h_0_8.mat", "test_height_k_2_h_0_3.mat", "test_height_k_3_h_0_2.mat", "test_height_k_3_h_1.mat"];
%file = ["test_height_k_0_5_h_1.mat", "test_height_k_1_h_0_8.mat", "test_height_k_2_h_0_3.mat", "test_height_k_3_h_0_2.mat"];
file = ["sim_height_k_0_5_h_1.mat", "sim_height_k_1_h_0_8.mat", "sim_height_k_2_h_0_3.mat", "sim_height_k_3_h_0_2.mat"];

tempo_corte = 500:1668;
Legend=cell(length(file),1);

for i = 1:length(file)
    aux1 = split(file(i),'height_');
    aux2 = split(aux1(2),'.mat');
    aux3 = split(aux2(1),'_h');
    aux4 = strrep(aux3(1),'k_','k = ');
    newStr = strrep(aux4,'_','.');
    
    Legend{i}=newStr;
    
    %disp(file(i))
    name = (strcat('./data/',file(i)));
    %a(i) = load(strcat('./data/',file));
    a(i) = load(name);
    u = a(i).data.h_ref(tempo_corte);
    y = a(i).data.h(tempo_corte);

    Ts = 0.03;
    fit = iddata(y,u,Ts);
    %get(fit);
    f1 = figure(1);
    %f1.Position = [100 50 450 250];
    subplot(2,2,i);
    %figure(i+2)
    plot(fit)
    title(newStr)

    Opt = tfestOptions('Display','on');
    np = [2];
    ioDelay = [0];
    mtf = tfest(fit, np,ioDelay,Opt);

    figure(2)
    bode(mtf)
    hold on
    
    figure(3)
    pzmap(mtf)
    hold on
    
    tf_num(i,:) = mtf.Numerator;
    tf_den(i,:) = mtf.Denominator;
    fit_percent(i) = mtf.Report.Fit.FitPercent;
    
    output_sim = 0.75+lsim(mtf,a(i).data.h_ref(tempo_corte)-0.75,a(i).data.time(tempo_corte));
    
    f2 = figure(4);
    %f1.Position = [100 50 450 250];
    subplot(2,2,i);
    %figure(i+2)
    plot(a(i).data.time(tempo_corte),a(i).data.h(tempo_corte))
    hold on
    plot(a(i).data.time(tempo_corte),output_sim)
    plot(a(i).data.time(tempo_corte),a(i).data.h_ref(tempo_corte))
    legend('real','simulated','reference')
    title(newStr)
    xlabel('time (s)')
    ylabel('height (m)')
    
    
end



figure(2)
legend(Legend)

figure(3)
legend(Legend,'Location','northwest')




