R = 27;             %radius of cycloid disc(mm)
Rr = 3;             %radius of roller(mm)
E = Rr/2;           %offset of input to center(mm)
N = 11;             %number of roller

t = 0:0.001:2*pi;

x1 = (R*cos(t));
x1a = sprintf('(%.1f*cos(t))',R);

x2 = -(Rr*cos(t+atan(sin((1-N)*t)/((R/E*N)-cos((1-N)*t)))));
x2a = sprintf('-(%.1f*cos(t+arctan(sin((1-%.1f)*t)',Rr,N);
x2b = sprintf('/((%.1f/%.1f*%.1f)-cos((1-%.1f)*t)))))',R,E,N,N);

x3 = -(E*cos(N*t));
x3a = sprintf('-(%.1f*cos(%.1f*t))',E,N);

x = x1 + x2 +x3;
xa = sprintf('%c%c%c%c',x1a,x2a,x2b,x3a');

y1 = (-R*sin(t));
y1a = sprintf('(-%.1f*sin(t))',R);

y2 = (Rr*sin(t+atan(sin((1-N)*t)/((R/E*N)-cos((1-N)*t)))));
y2a = sprintf('+(%.1f*sin(t+arctan(sin((1-%.1f)*t)',Rr,N);
y2b = sprintf('/((%.1f/%.1f*%.1f)-cos((1-%.1f)*t)))))',R,E,N,N);

y3 = (E*sin(N*t));
y3a = sprintf('+%.1f*sin(%.1f*t)',E,N);

y = y1 + y2 + y3;
ya = sprintf('%c%c%c%c',y1a,y2a,y2b,y3a);

xlabel(xa,"FontSize",8);
ylabel(ya,'Fontsize',8);

hold on
plot(x,y)
hold off
