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
    figure(i+2)
    plot(fit)
    title(newStr)

    Opt = tfestOptions('Display','on');
    np = [2];
    ioDelay = [0];
    mtf = tfest(fit, np,ioDelay,Opt);

    figure(1)
    bode(mtf)
    hold on
    
    figure(2)
    pzmap(mtf)
    hold on
    
end

figure(1)
legend(Legend)

figure(2)
legend(Legend,'Location','northwest')

%%
% load('./data/test_pitch_3s_step_a_0_2.mat')
% figure
% plot(data.time, data.pitch_ref, data.time,data.pitch);
% legend('h real','h ref')

%%



