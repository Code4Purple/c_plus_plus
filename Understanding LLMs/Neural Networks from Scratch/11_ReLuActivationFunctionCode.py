# ReLu Activation Function Code

'''

Despite the fancy sounding name, the rectified linear 
activation function is straightforward to code. 
Most closely to its definition:

'''

inputs = [0, 2, -1, 3.3, -2.7, 1.1, 2.2, -100]
outputs = []

for i in inputs:
    if i > 0:
        outputs.append(i)
    else:
        outputs.append(0)

print(outputs , '\n')

'''

We made up a list of values to start. The ReLU in this code 
is a loop where we’re checking if the current value is 
greater than 0. If it is, we’re appending it to the output list, 
and if it’s not, we’re appending 0. This can be written more 
simply, as we just need to take the largest of two values: 0
or neuron value. 

For example:

'''

output = []
for i in inputs:
    output.append(max(0, i))

print(output)

# Numpy Implementation 

import numpy as np
output3 = np.maximum(0, inputs)
print('\n', output3)