
# Basic Batch of Data

import numpy as np

a = [1, 2, 3]
b = [2, 3, 4]

a = np.array([a])
b = np.array([b]).T # that is, transpose  
# The Transpose turn this row vector into a column vector 

#print(np.dot(a, b))

# Basic Batch of Data ---- Test Code

matrixProduct = np.dot(a,b)

if(matrixProduct == 20):
    print("Test Passed")
else:
    print("Test Failed", matrixProduct)

