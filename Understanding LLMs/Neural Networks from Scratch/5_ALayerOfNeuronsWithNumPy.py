import numpy as np

inputs = [1.0, 2.0, 3.0, 2.5]
weights = [[0.2, 0.8, -0.5, 1.0],
           [0.5, -0.91, 0.26, -0.5],
           [-0.26, -0.27, 0.17, 0.87]]
biases = [2.0, 3.0, 0.5]

layer_outputs = np.dot(weights, inputs) + biases

#print(layer_outputs)


# Test Code 
trueArray = np.dot(weights, inputs) + biases
if np.array_equal(trueArray, layer_outputs):
    print("Test Passed")

else:
    print("Test Failed", layer_outputs)

'''
The np.dot() method treats the matrix as
a list of vectors and performs a dot product of each of those vectors with the other vector. In this
example, we used that property to pass a matrix, which was a list of neuron weight vectors and a
vector of inputs and get a list of dot products — neuron outputs.

'''