R = 168.81/2;             %radius of cycloid disc(mm)
Rr = 4;             %radius of roller(mm)
E = Rr/2;           %offset of input to center(mm)
N = 31;             %number of roller
t = 0:0.001:6;
x1 = (R*cos(t));
x2 = -(Rr*cos(t+atan(sin((1-N)*t)/((R/E*N)-cos((1-N)*t)))));
x3 = -(E*cos(N*t));

x = x1 + x2 +x3;

y1 = (-R*sin(t));
y2 = (Rr*sin(t+atan(sin((1-N)*t)/((R/E*N)-cos((1-N)*t)))));
y3 = (E*sin(N*t));

y = y1 + y2 + y3;
hold on
plot(x,y)
hold off
