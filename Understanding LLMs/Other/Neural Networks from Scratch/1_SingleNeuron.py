
# Single Neuron (1)
inputs = [1,2,3]
weights = [0.2, 0.8, -0.5]
bias = 2

outputs = 0

for i in range(len(inputs)):
    outputs += inputs[i] * weights[i]

outputs += bias

#print (outputs) # 2.3

# Test Code for SingleNeuron.py (1)
trueOutputs = 2.3
if (outputs == trueOutputs):
    print ("Test Passed")
else:
    print ("Test Failed", outputs)


# -----------------------------------------------------------------------------------------------


# Another Single Neuron (2)
inputs = [1.0, 2.0, 3.0, 2.5]
weights = [0.2, 0.8, -0.5, 1.0]
bias = 2.0

# Setting the output to 0
outputs = 0

for i in range(len(inputs)):
    outputs += inputs[i] * weights[i]

outputs += bias

#print (outputs) # 4.8

# Test Code for SingleNeuron.py (2)
trueOutputs = 4.8
if (outputs == trueOutputs):
    print ("Test Passed")
else:
    print ("Test Failed", outputs)