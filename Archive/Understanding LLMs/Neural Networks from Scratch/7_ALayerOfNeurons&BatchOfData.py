# A Layer of Neurons & Batch of Data w/ NumPy

import numpy as np

inputs = [[1.0, 2.0, 3.0, 2.5],
          [2.0, 5.0, -1.0, 2.0],
          [-1.5, 2.7, 3.3, -0.8]]

weights = [[0.2, 0.8, -0.5, 1.0],
           [0.5, -0.91, 0.26, -0.5],
           [-0.26, -0.27, 0.17, 0.87]]

biases = [2.0, 3.0, 0.5]

outputs = np.dot(inputs, np.array(weights).T) + biases # With the biases added

outputs2 = np.dot(inputs, np.array(weights).T) # Without the biases added

difference = outputs - outputs2 # Looking at the difference to the baies

print('\nTHE DATA WITHOUT THE BIASES\n', outputs2)
print('\nTHE AMOUNT OF BIASES TO EACH DATA POINT\n', difference)
print('\nTHE DATA AFTER THE BIASES WAS ADDED\n', outputs)