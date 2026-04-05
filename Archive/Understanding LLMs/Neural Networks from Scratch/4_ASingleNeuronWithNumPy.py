import numpy as np

inputs = [1.0, 2.0, 3.0, 2.5]
weights = [0.2, 0.8, -0.5, 1.0]
bias = 2.0

outputs = np.dot(weights, inputs) + bias

# print(outputs) # 4.8

# Test Code for Numpy Output
true = 4.8
if true == outputs:
    print("Test Passed")
else:
    print("Test Failed", outputs)