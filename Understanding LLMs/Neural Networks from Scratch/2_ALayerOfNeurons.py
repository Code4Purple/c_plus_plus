
# Layered Neurons (Np. of Neurons = 3)

inputs = [1.0, 2.0, 3.0, 2.5]
weights1 = [0.2, 0.8, -0.5, 1.0]
weights2 = [0.5, -0.91, 0.26, -0.5]
weights3 = [-0.26, -0.27, 0.17, 0.87]

bias1 = 2
bias2 = 3
bias3 = 0.5

output1 = 0
output2 = 0
output3 = 0

for i in range(len(inputs)):
    output1 += inputs[i] * weights1[i]
    output2 += inputs[i] * weights2[i]
    output3 += inputs[i] * weights3[i]

output1 += bias1
output2 += bias2
output3 += bias3

arrayOutputs = [output1, output2, output3]

#print (arrayOutputs) # [4.8, 1.21, 2.385]

# Test Code for ALayerOfNeurons.py (No. of Neurons = 3)

trueOutputs = [4.8, 1.21, 2.385]
if (arrayOutputs == trueOutputs):
    print ("Test Passed")
else:
    print ("Test Failed", arrayOutputs)


# -----------------------------------------------------------------------------------------------

# loop to scale and handle dynamically-sized inputs and layers

inputs = [1.0, 2.0, 3.0, 2.5]
weights = [[0.2, 0.8, -0.5, 1],
           [0.5, -0.91, 0.26, -0.5],
           [-0.26, -0.27, 0.17, 0.87]]
biases = [2, 3, 0.5]

# Output of current layer
layer_outputs=[]

# for each neuron
for neuron_weights, neuron_bias in zip (weights, biases):
    # Zeroed output of given neuron
    neuron_output = 0
    # For each input and weight to the neuron
    for n_input, weight in zip(inputs, neuron_weights):
        # Multiply this input by associated weight
        # and add to the neuron's output variable
        neuron_output += n_input*weight
    # Add bias
    neuron_output += neuron_bias
    # Put neuron's result to the layer's output list
    layer_outputs.append(neuron_output)

# Test Code for Scaler
trueOutputs = [4.8, 1.21, 2.385]
if (arrayOutputs == trueOutputs):
    print ("Test Passed")
else:
    print ("Test Failed", arrayOutputs)