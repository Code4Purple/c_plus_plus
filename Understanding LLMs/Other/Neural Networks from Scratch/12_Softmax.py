# The Softmax Activation Function 

'''  
    This distribution returned by the softmax activation 
    function represents confidence scores.

'''

# Big Idea Explanation:

# Value from the previous layer output when we described
# What a neural network is...
layer_output = [4.8, 1.21, 2.385]

# e - mathematical constant, we use E here to match a common coding
# style where constants are uppercased
E = 2.71828182846

# For each value in a vector, calculate the exponential value 
exp_values = []
for output in layer_output:
    exp_values.append(E ** output) # ** - power operator in Python
print('\nexponentiated values(w/o numpy):')
print(exp_values, '\n')

# Normalize the values - This gives us a 0 to 1 range to see 
# the confidence scores of each value in the vector
norm_base = sum(exp_values)
norm_values = []
for value in exp_values:
    norm_values.append(value / norm_base)
print('Normalized exponentiated values(w/o numpy):')
print(norm_values)
print('Sum of normalized values:', sum(norm_values))


# Using Numpy
import numpy as np
layer_outputs = np.array([[4.8, 1.21, 2.385],
                          [8.9, -1.81, 0.2],
                          [1.41, 1.051, 0.026]])
print('\n\nSum without axis:', np.sum(layer_outputs))
print('This will be identical to the above since default is None:')
print(np.sum(layer_outputs, axis=None))

print('\nAnother way to think of it w/ a matrix == axis 0: columns:')
print(np.sum(layer_outputs, axis=0))

print('\nBut we want to sum the rows instead, like this w/ raw py:')
for i in layer_outputs:
    print(sum(i))

print('\nSo we can sum axis 1, but note the current shape:')
print(np.sum(layer_outputs, axis=1))

print('\nSum axis 1, but keep the same dimensions as input:')
print(np.sum(layer_outputs, axis=1, keepdims=True))