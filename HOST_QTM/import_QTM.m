function [data] = import_QTM(n_bodys)


%%6DOF Euler component

msg_lenght = 40 + n_bodys*24;
% msg_received = judp('receive',4545,msg_lenght);
msg_received = judp('receive',9089,msg_lenght);




component_type = typecast(msg_received(29:32),'int32');

if component_type ~= 6
    error('Data type is incorrect. Please select "6DOF Euler component"')
end 


true_msg_lenght = typecast(msg_received(1:4),'int32');

if true_msg_lenght ~= msg_lenght
    error('Number of Bodys is incorrect')
end 

for i = 1:n_bodys
    x = typecast(msg_received(40+1+(24*(i-1)):40+4+(24*(i-1))),'single');
    y = typecast(msg_received(40+5+(24*(i-1)):40+8+(24*(i-1))),'single');
    z = typecast(msg_received(40+9+(24*(i-1)):40+12+(24*(i-1))),'single');
    roll = typecast(msg_received(40+13+(24*(i-1)):40+16+(24*(i-1))),'single');
    pitch = typecast(msg_received(40+17+(24*(i-1)):40+20+(24*(i-1))),'single');
    yaw = typecast(msg_received(40+21+(24*(i-1)):40+24+(24*(i-1))),'single');
    
    data{i}=[x y z roll pitch yaw];
end

   

