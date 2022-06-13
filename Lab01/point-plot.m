% Point and line data

X = [2, 6, 1, 16; 4, 3, 2, 8; 2, 3, 0.5, 4]
L = [8; -4; 0];

% Plot the line


p1x = 0;
p1y = (-L(1) * p1x - L(3)) / L(2);

p2x = 10;
p2y = (-L(1) * p2x - L(3)) / L(2);

plot([p1x, p2x],[p1y, p2y], 'r-')
title('Line Plot')
xlabel("X");
ylabel("Y");

% Plot the points

hold on;
for i = 1:4
    plot([X(1,i)/X(3,i)], [X(2,i)/X(3,i)], 'bo')
end
waitfor(gcf)
