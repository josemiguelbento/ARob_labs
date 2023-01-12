A = [zeros(3) eye(3);
     zeros(3) zeros(3)];
B = [zeros(3);
     eye(3)];

Q = [5*eye(3)  zeros(3)
     zeros(3)   10*eye(3)];
rho = 1;
R = rho*eye(3);

[K,S,e] = lqr(A, B, Q, R);
