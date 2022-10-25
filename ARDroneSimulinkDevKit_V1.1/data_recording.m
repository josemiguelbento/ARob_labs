time = datetime;
fmt = "yyyy_MM_dd_HH_mm_ss";
%file_name = string(time,fmt)+'.mat';
file_name = 'pitch_5s_step_a_0_15_v2';

if isfile(strcat('./data/test_',file_name,'.mat'))
    disp("This file already exists - choose a different name")
end

if exist('sim_data','var') == 1
    results = sim_data;
    file_name = strcat('sim_',file_name);
elseif exist('test_data','var') == 1
    results = test_data;
    file_name = strcat('test_',file_name);
else
    return
end
data = struct;
data.time = results.time;
data.roll = results.signals.values(:,1);
data.pitch = results.signals.values(:,2);
data.yaw = results.signals.values(:,3);
data.u = results.signals.values(:,4);
data.v = results.signals.values(:,5);
data.h_dot = results.signals.values(:,6);
data.X_e = results.signals.values(:,7);
data.Y_e = results.signals.values(:,8);
data.h = results.signals.values(:,9);
data.yaw_ref = results.signals.values(:,10);
data.h_ref = results.signals.values(:,11);
data.X_e_ref = results.signals.values(:,12);
data.Y_e_ref = results.signals.values(:,13);
data.fly = results.signals.values(:,14);
data.enable = results.signals.values(:,15);
data.roll_ref = results.signals.values(:,16);
data.pitch_ref = results.signals.values(:,17);
data.yaw_ref = results.signals.values(:,18);
data.h_dot_ref = results.signals.values(:,19);

file_name = strcat('./data/',file_name);
save(file_name,'data')

clear data
if exist('sim_data','var') == 1
    clear sim_data;
elseif exist('test_data','var') == 1
    clear test_data;
else
    return
end