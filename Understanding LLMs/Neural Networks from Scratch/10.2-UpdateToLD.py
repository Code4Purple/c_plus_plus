import numpy as np
import nnfs
from nnfs.datasets import spiral_data

class Layer_Dense:

    # Layer initialization
    def __init__(self, n_inputs, n_neurons):
        # Initialize weights and biases
        self.weights = 0.01 * np.random.randn(n_inputs, n_neurons)
        self.biases = np.zeros((1, n_neurons))

    # Forward pass
    def forward(self, inputs):
        self.output = np.dot(inputs, self.weights) + self.biases

# Create dataset
x, y = spiral_data(samples=100, classes=3)

# Create Dense Layer with 2 input features and 3 output values
dense1 = Layer_Dense(2, 3)

# Perform a forward pass of our training data through this layer
dense1.forward(x)

# Let's see output of the first few samples:
print("\n" , dense1.output[:5])

'''
In the output, you can see we have 5 rows of data that have 3 values each. 
Each of those 3 values is the value from the 3 neurons in the dense1 layer 
after passing in each of the samples. Great!

We have a network of neurons, so our neural network model is almost 
deserving of its name, but we’re still missing the activation functions, 
so let’s do those next!

'''