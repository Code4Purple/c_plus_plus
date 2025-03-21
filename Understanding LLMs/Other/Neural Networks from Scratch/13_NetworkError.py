# Calculating Network Error with Loss

'''
With a randomly-initialized model, or even a model initialized with more sophisticated
approaches, our goal is to train, or teach, a model over time. To train a model, we tweak the
weights and biases to improve the model’s accuracy and confidence. 
To do this, we calculate how much error the model has. The loss function, 
also referred to as the cost function, is the algorithm that quantifies how wrong a model is. 
Loss is the measure of this metric. Since loss is the model’s error, we ideally want it to be 0

'''

# Example of a Log Loss Function

import math

# An example output from the output layer of the neural network
softmax_output = [0.7, 0.1, 0.2]
# Ground truth
target_output = [1, 0, 0]

loss = -(math.log(softmax_output[0])*target_output[0] +
        math.log(softmax_output[1])*target_output[1] +
        math.log(softmax_output[2])*target_output[2])

if(loss == 0.35667494393873245):
    print("Test passed\t", loss)

loss2 = -math.log(softmax_output[0])

if loss2 == 0.35667494393873245:
    print("Test passed\t",loss2 )

'''
    Bad side of this loss function is that it is not scalable.
    We can't furguie out the little details in the loss function.
    We need to come up with a better loss function.
'''


