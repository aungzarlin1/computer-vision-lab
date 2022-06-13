import numpy as np
import cv2

matA = np.array([[3.0,2.0,4.0],[8.0,4.0,2.0],[1.0,3.0,2.0]])
w, u, vt = cv2.SVDecomp(matA)
print("A:")
print(matA)
print("U:")
print(u)
print("W:")
print(w)
print("Vt:")
print(vt)

wd = np.zeros((3,3))
wd[0,0] = w[0,0]
wd[1,1] = w[1,0]
wd[2,2] = w[2,0]
wd[3,3] = w[3,0]

matAhat = u * w * vt
print("Ahat")
print(matAhat)	
