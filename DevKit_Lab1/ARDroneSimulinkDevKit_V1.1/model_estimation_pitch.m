%%
clear
close all
% 
% %load('./data/test_pitch_w_15_a_0_5.mat')
% 
% model = @(b,x)(b(0)*(x-b(1))/((x-b(2))*(x-b(3))));
% 
% %rng('default')
% beta0 = [];

%% With steps
clear
close all

%load('./data/test_pitch_3s_step_a_0_2_v2.mat')

%file = ["test_pitch_3s_step_a_0_2.mat", "test_pitch_3s_step_a_0_2_v2.mat", "test_pitch_5s_step_a_0_15.mat", "test_pitch_5s_step_a_0_15_v2.mat", "test_pitch_6s_step_a_0_1_v2.mat"];
file = ["test_pitch_3s_step_a_0_2.mat", "test_pitch_3s_step_a_0_2_v2.mat", "test_pitch_5s_step_a_0_15.mat", "test_pitch_5s_step_a_0_15_v2.mat"];

tempo_corte = 468:1035;
Legend=cell(length(file),1);

for i = 1:length(file)
    aux1 = split(file(i),'pitch_');
    aux2 = split(aux1(2),'.mat');
    
    newStr = strrep(aux2(1),'_',' ');
    
    Legend{i}=newStr;
    
    %disp(file(i))
    name = (strcat('./data/',file(i)));
    %a(i) = load(strcat('./data/',file));
    a(i) = load(name);
    u = a(i).data.pitch_ref(tempo_corte);
    y = a(i).data.pitch(tempo_corte);

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
legend(Legend,'Location','southwest')
title({'Bode plot of matlab system identification results', 'for several pitch step tests'})

figure(2)
legend(Legend,'Location','northeast')
title({'Pole-zero map of matlab system identification results', 'for several pitch step tests'})

%% Plotting pitch step response
figure
t = a(1).data.time(tempo_corte);
u = a(1).data.pitch_ref(tempo_corte);
y = a(1).data.pitch(tempo_corte);

plot(t,y,t,u)
legend('response','reference')
title("System response for pitch step reference")
xlabel('time (s)')
ylabel('pitch (rad)')
%% calculating static gain from steps
%file = ["test_pitch_3s_step_a_0_2.mat", "test_pitch_3s_step_a_0_2_v2.mat", "test_pitch_5s_step_a_0_15.mat", "test_pitch_5s_step_a_0_15_v2.mat"];

tempo_corte = 468:1035;
tempo_buffer = 30;
for i = 1:length(file)
    step_der(:,i) = diff(a(i).data.pitch_ref(tempo_corte));
    idx_step = find(step_der(:,i) ~= 0)+tempo_corte(1);
    
    static_indexes = (idx_step(1)+tempo_buffer):idx_step(2)-1;
    static_gain(i) = mean(a(i).data.pitch(static_indexes))/mean(a(i).data.pitch_ref(static_indexes));
    
    figure
    plot(a(i).data.time,a(i).data.pitch_ref)
    hold on
    plot(a(i).data.time(static_indexes),a(i).data.pitch(static_indexes),a(i).data.time(static_indexes),a(i).data.pitch_ref(static_indexes))
end

avg_static_gain = mean(static_gain);
%%
% tempo_corte = 468:1035;
% load('./data/test_pitch_5s_step_a_0_15.mat')
% figure
% plot(data.time(tempo_corte), data.pitch_ref(tempo_corte), data.time(tempo_corte),data.pitch(tempo_corte));
% legend('h real','h ref')

%% With sinusoids
clear all
close all
tempo_corte_2 = 536:950;

%file_w = ["test_pitch_w_1_a_0_2_v2.mat","test_pitch_w_2_a_0_2.mat","test_pitch_w_3_a_0_2_v2.mat","test_pitch_w_3_a_0_3.mat","test_pitch_w_5_a_0_5.mat", "test_pitch_w_10_a_0_5.mat","test_pitch_w_15_a_0_5.mat","test_pitch_w_20_a_0_5.mat"];
file_w = ["test_pitch_w_1_a_0_2_v2.mat","test_pitch_w_2_a_0_2.mat","test_pitch_w_3_a_0_3.mat","test_pitch_w_5_a_0_5.mat", "test_pitch_w_10_a_0_5.mat","test_pitch_w_15_a_0_5.mat","test_pitch_w_20_a_0_5.mat"];

for i = 1:length(file_w)
    aux1 = split(file_w(i),'pitch_');
    aux2 = split(aux1(2),'.mat');
    aux3 = split(aux2(1),'w_');
    aux4 = split(aux3(2),'_a_');
    
    freq_ang(i) = str2num(aux4(1));
    
    newStr = strrep(aux2(1),'_',' ');
    
    Legend{i}=newStr;
    
    %disp(file(i))
    name = (strcat('./data/',file_w(i)));
    %a(i) = load(strcat('./data/',file));
    a(i) = load(name);
    
%     figure
%     plot(a(i).data.time, a(i).data.pitch_ref, a(i).data.time,data.pitch);
%     legend('h real','h ref')
    
    %find peaks in response
    peak_max_response = mean(findpeaks(a(i).data.pitch(tempo_corte_2)));
    peak_min_response = -mean(findpeaks(-a(i).data.pitch(tempo_corte_2)));
    ptp_response(i) = peak_max_response-peak_min_response;
    
    %find peaks in reference
    peak_max_ref = mean(findpeaks(a(i).data.pitch_ref(tempo_corte_2)));
    peak_min_ref = -mean(findpeaks(-a(i).data.pitch_ref(tempo_corte_2)));
    ptp_ref(i) = peak_max_ref-peak_min_ref;
    
    if i == 1
        %ptp_response(i) = 0.0857;
        ptp_response(i) = 0.201;
    end
    
    ptp_gain(i) = ptp_response(i)/ptp_ref(i);
    
    ptp_gain_db(i) = 20*log10(ptp_gain(i));
    
    
    
    %index_peaks_max_resp(i) = find(a(i).data.pitch(tempo_corte_2),peak_max_response);
    figure
    [peak_down,idx_peak_down]=findpeaks(-a(i).data.pitch(tempo_corte_2));
    [peak_up,idx_peak_up]=findpeaks(a(i).data.pitch(tempo_corte_2));
    
    %findpeaks(a(i).data.pitch(tempo_corte_2))
    plot(a(i).data.time(tempo_corte_2),a(i).data.pitch(tempo_corte_2))
    hold on
    plot(a(i).data.time(idx_peak_down+tempo_corte_2(1)-1),-peak_down,'x','Color','red')
    plot(a(i).data.time(idx_peak_up+tempo_corte_2(1)-1),peak_up,'x','Color','g')
    title({strcat('Results for a sinusoidal reference') , strcat('of frequency ',string(freq_ang(i)),' rad/s and amplitude ',string(round(10*ptp_ref(i)/2)/10),' rad')})
    legend('response','local min.','local max.')
    xlabel('time')
    ylabel('pitch (rad)')
end

figure
semilogx(freq_ang,ptp_gain_db)
title({'Pitch frequency response for several','sinusoidal references'})
xlabel('reference frequency w (rad/s)')
ylabel('gain (dB)')

%descobriu-se antes que o ganho estatico era:
avg_static_gain = 0.4756;
%acrescentando um ponto para frequencia baixa com este ganho:
% freq_ang(end+1) = 0;
% ptp_gain(end+1) = avg_static_gain;
% ptp_gain_db(end+1) = 20*log10(avg_static_gain);

%model = @(b,x)(b(1)./((1i*x-b(3)).*(1i*x-b(3))));
%model = @(b,x)(b(1)./((1i*x-b(3)).*(1i*x-b(4))));
%model = @(b,x)(b(1).*(1i*x-b(2))./((1i*x-b(3)).*(1i*x-b(4))));
%model = @(b,x) abs((b(1).*(1i*x-b(2))./((1i*x-b(3)).*(1i*x-b(4)))));
%model = @(b,x) abs((b(1).*(1i*x-b(2))./((1i*x-b(3)).*(1i*x-b(3)))));
%model = @(b,x) abs(((avg_static_gain*(b(3)*b(4))/(-b(2))).*(1i*x-b(2))./((1i*x-b(3)).*(1i*x-b(4)))));

%medeiro
model = @(b,x) b(2)*sqrt(x.^2+b(1)^2)./(sqrt((b(3)^2-x.^2).^2+(2*b(3)*b(4).*x).^2));

rng('default')
%usei o system identification para tirar valores iniciais quando treinado para o step do pitch
%beta0 = [1;13.6;-2.66+5.04*1i;-2.66-5.04*1i];
%beta0 = [0.5;10;-1+5i;-1+5i];

%medeiro
beta0 = [5;0.5;10;0.3];

opts = statset('nlinfit');
opts.RobustWgtFun = 'bisquare';
beta = nlinfit(freq_ang,ptp_gain,model,beta0,opts);

s = tf('s');
%sys = (beta(1)/((s-beta(3))*(s-beta(3))));
%sys = (beta(1)/((s-beta(3))*(s-beta(4))));
%sys = (beta(2)*(s-beta(1))/(s^2+2*beta(4)*beta(3)+beta(3)^2));
sys = 1.8838*(s+2.8285)/(s^2+2*3.4057*0.4872*s+3.4057^2);

figure
eixo = 0:0.1:100;
semilogx(eixo,20*log10(model(beta,eixo)));
hold on
%semilogx(freq_ang,ptp_gain_db,'x','Color','red')
semilogx(freq_ang,ptp_gain_db,'x','Color','red')

legend('fit result', 'test data')
title('Bode plot for pitch response')
figure
bode(sys);

figure
pzmap(sys)
%%
% load('./data/test_pitch_w_10_a_0_5_v1.mat')
% figure
% plot(data.time, data.pitch_ref, data.time,data.pitch);
% legend('h real','h ref')
% findpeaks(data.pitch(tempo_corte_2))
% peak_max = mean(findpeaks(data.pitch(tempo_corte_2)));
% peak_min = -mean(findpeaks(-data.pitch(tempo_corte_2)));
% 
% peak_to_peak = peak_max-peak_min;
%% With all responses combined
clear all
close all
%load('./data/test_pitch_3s_step_a_0_2_v2.mat')

%file = ["test_pitch_3s_step_a_0_2.mat", "test_pitch_3s_step_a_0_2_v2.mat", "test_pitch_5s_step_a_0_15.mat", "test_pitch_5s_step_a_0_15_v2.mat", "test_pitch_6s_step_a_0_1_v2.mat"];

file = ["test_pitch_3s_step_a_0_2.mat", "test_pitch_3s_step_a_0_2_v2.mat", "test_pitch_5s_step_a_0_15.mat", "test_pitch_5s_step_a_0_15_v2.mat"];
%file_w = ["test_pitch_w_2_a_0_2.mat", "test_pitch_w_5_a_0_5.mat", "test_pitch_w_10_a_0_5.mat","test_pitch_w_15_a_0_5.mat","test_pitch_w_20_a_0_5.mat"];
%file_w = ["test_pitch_w_2_a_0_2.mat", "test_pitch_w_5_a_0_5.mat", "test_pitch_w_10_a_0_5.mat"];
file_w = ["test_pitch_w_1_a_0_2_v2.mat","test_pitch_w_2_a_0_2.mat","test_pitch_w_3_a_0_2_v2.mat","test_pitch_w_3_a_0_3.mat","test_pitch_w_5_a_0_5.mat"];
file_conc = [file file_w];
%file_conc = file_w;
tempo_corte = 468:1035;

tempo_total = [];
ref_total = [];
resp_total = [];
ult_tempo = 0;

for i = 1:length(file_conc)
    
    %disp(file(i))
    name = (strcat('./data/',file_conc(i)));
    %a(i) = load(strcat('./data/',file));
    load(name);
    
    tempo = data.time(tempo_corte);
    ref = data.pitch_ref(tempo_corte);
    resp = data.pitch(tempo_corte);
    
    tempo_ajustado = tempo + (ult_tempo-tempo(1)) +0.03;
    
    tempo_total = cat(1,tempo_total,tempo_ajustado);
    ref_total = cat(1,ref_total,ref);
    resp_total = cat(1,resp_total,resp);
    
    ult_tempo = tempo_total(end);
end

%plot(tempo_total,ref_total,tempo_total,resp_total)

Ts = 0.03;
fit = iddata(resp_total,ref_total,Ts);
%get(fit);
figure
plot(fit)

Opt = tfestOptions('Display','on');
np = [2];
nz = [1];
ioDelay = [0];
mtf = tfest(fit, np,nz,ioDelay,Opt);

sysd = c2d(mtf,0.03);

figure
bode(sysd)

figure
pzmap(mtf)


figure

output_sim = lsim(mtf,ref_total,tempo_total');
plot(tempo_total,resp_total, tempo_total, output_sim)
hold on
plot(tempo_total, ref_total, 'Color','g')
title("Real and simulated responses")
legend('real','simulated','reference','Location','northwest')
xlabel('time (s)')
ylabel('pitch (rad)');
% figure(1)
% legend(Legend,'Location','southwest')
% 
% figure(2)
% legend(Legend,'Location','northeast')
