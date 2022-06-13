import numpy as np
import cv2

matX = np.array([[ 2, 6, 1, 16], [ 4, 3, 2, 8], [ 2, 3, 0.5, 4]])
matL = np.array([[ 8],[ -4] , [ 0]])

matDotProds = np.matmul( matX.T, matL )

print("X:", matX)
print("Line:", matL)
print("matDotProds:", matDotProds)

for i in range(4):
    if matDotProds[i,0] < 1e-6:
        print("Point", i, "is on the line.")
    else:
        print("Point", i, "is not on the line.")


