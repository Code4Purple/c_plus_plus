
# Creating an array (using a list)
numberCodes = []
defintionCodes = []

# Reading data from a file and populating the arrays
tenCodes = open('tenCodes-CODES.txt', 'r')
with tenCodes as numbers:
    for line in numbers:
        numberCodes.append([0])
        
        

# Displaying the data
print("Number\tDefinition")
print("------\t----------")
