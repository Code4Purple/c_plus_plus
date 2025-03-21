''' 
There’s no question that a tensor is not just an array, but the real question is: 
“What is a tensor, to a computer scientist, in the context of deep learning?” 

A tensor object is an object that can be represented as an array.

'''


# Example of a dot product

a = [1, 2, 3]
b = [2, 3, 4]

dot_product = 0

for i in range(len(a)):
    dot_product += a[i] * b[i]

# print(dot_product) # 20

# The Test Code for dot_product
trueDotProduct = 20
if (trueDotProduct == dot_product):
    print("Test Passed")
else:
    print("Test Failed", dot_product)