import numpy as np
import nnfs
from nnfs.datasets import spiral_data

# What we had before
class Layer_Dense:

    # Layer initialization
    def __init__(self, n_inputs, n_neurons):
        # Initialize weights and biases
        self.weights = 0.01 * np.random.randn(n_inputs, n_neurons)
        self.biases = np.zeros((1, n_neurons))

    # Forward pass
    def forward(self, inputs):
        self.output = np.dot(inputs, self.weights) + self.biases


# What we added
class Activation_ReLU:
    # Forward pass
    def forward(self, inputs):
        # Calculate output values from input
        self.output = np.maximum(0, inputs)

# Creat dataset
x, y = spiral_data(samples=100, classes=3)

# Creat Dense Layer with 2 input features and 3 output values
dense1 = Layer_Dense(2, 3)

# Create ReLU activation (to be used with Dense Layer)
activation1 = Activation_ReLU()

# Make a forward pass of our training data through this layer
dense1.forward(x)

# Forward pass through activation function
# Takes in output from previous layer
activation1.forward(dense1.output)

# Let's see output of the first few samples:
print("\n", activation1.output[:5])

