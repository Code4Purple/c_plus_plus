# Explaination of the Layer_Dense -> The Layer Initialization
import numpy as np
import nnfs

nnfs.init()

# Explame of the np.random.randn function
print("\n\t   np.random.randn function")
print(np.random.randn(2,5)) # 2 rows, 4 columns
# This generates a matrix of random numbers within the defined shape


# Example of the np.zeros function
print("\n\t   np.zeros function")
print(np.zeros((2,5))) # 2 rows, 5 columns
# This takes any shape of a matrix and fills it with zeros

''' To see an example of the Layer_Dense class in action, 
 we can create an instance of the class and pass in the number 
 of inputs and neurons '''

n_inputs = 2
n_neurons = 4

weights = 0.01 * np.random.randn(n_inputs, n_neurons)
biases = np.zeros((1, n_neurons))

print("\n\t   Weights")
print(weights)
print("\n\t   Biases")
print(biases)