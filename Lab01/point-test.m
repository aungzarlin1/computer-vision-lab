matX = [ 2, 6, 1, 16; 4, 3, 2, 8; 2, 3, 0.5, 4]
matL = [ 8; -4; 0]
matDotProds = matX' * matL;

for i = 1:4,
if matDotProds(i, 1) < 1e-6,
printf('Point %d is on the line.\n', i);
else
printf('Point %d is not on the line.\n', i);
end;
end;
