
# Basic array operations in Python

# Creating an array (using a list)
codes = []

# Adding elements to the array
for i in range(100):
    codes.append("10-" + str(i))

# removing elements from the array that are not in the data chart
codes.remove("10-0")
codes.remove("10-5")
codes.remove("10-6")
codes.remove("10-10")
codes.remove("10-11")
codes.remove("10-12")
codes.remove("10-17")
codes.remove("10-18")
codes.remove("10-19")
codes.remove("10-21")
codes.remove("10-22")
codes.remove("10-23")
codes.remove("10-24")
codes.remove("10-25")
codes.remove("10-26")
codes.remove("10-27")
codes.remove("10-29")
codes.remove("10-31")
codes.remove("10-33")
codes.remove("10-34")
codes.remove("10-36")
codes.remove("10-38")
codes.remove("10-39")
codes.remove("10-55")
codes.remove("10-56")
codes.remove("10-69")
codes.remove("10-74")
codes.remove("10-76")
codes.remove("10-81")
codes.remove("10-82")
codes.remove("10-84")
codes.remove("10-86")
codes.remove("10-90")
codes.remove("10-91")

if len(codes) == 66:
    print("Ten Codes -- Passed")
    # Writing the codes array to a file
    with open("tenCodes-CODES.txt", "w") as file:
        for code in codes:
            file.write(code + "\n")



meanings = []
meanings.append("Receiving poorly")
meanings.append("Receiving well")
meanings.append("Administrative Assignment")
meanings.append("Acknowledgement / OK")
