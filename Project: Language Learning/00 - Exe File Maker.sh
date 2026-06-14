#!/bin/bash

# 1. Define the list of files to compile
files=(
    "01 - Hello World"
    "02 - Variables & Basic Data Types"
    "03 - Const Keyword"
    "04 - Namespaces"
    "05 - Typedef & type aliases"
    "06 - Arithmetic Operators"
    "07 - Type conversion"
    "08 - User input"
    "09 - Useful math related functions"
    "10 - Hypotenuse calculator practice program"
    "11 - If statements"
    "12 - Switches"
    "13 - Console calculator program"
    "14 - Ternary operator"
    "15 - Logical operators"
    "16 - Temperature conversion program"
    "17 - Useful string methods in C++"
    "18 - While loops"
    "19 - Do while loops"
    "20 - For loops"
    "21 - Break & continue"
    "22 - Nested loops"
    "23 - Random number generator"
    "24 - Random event generator"
    "25 - Number guessing game"
    "26 - User defined functions"
    "27 - Return keyword"
    "28 - Overloaded functions"
    "29 - Variable scope"
    "30 - Banking practice program"
    "31 - ROCK PAPER SCISSORS game"
    "32 - Arrays"
    "33 - Sizeof() operator"
    "34 - Iterate over an array"
    "35 - Foreach loop"
    "36 - Pass array to a function"
    "37 - Search an array for an element"
    "38 - Sort an array"
    "39 - Fill() function"
    "40 - Fill an array with user input"
    "41 - Multidimensional arrays"
    "42 - QUIZ GAME"
    "43 - Memory addresses"
    "44 - Pass by VALUE vs pass by REFERENCE"
    "45 - Const parameters"
    "46 - Credit card validator program"
    #"47 - Pointers"
    #"48 - Null pointers"
    #"49 - TIC TAC TOE game"
    #"50 - Dynamic memory"
    #"51 - Recursion"
    #"52 - Function templates"
    #"53 - Structs"
    #"54 - Pass structs as arguments"
    #"55 - Enums"
    #"56 - Object Oriented Programming"
    #"57 - Constructors"
    #"58 - Constructor overloading"
    #"59 - Getters & setters"
    #"60 - Inheritance"

)

# 2. Get the total count for the progress tracker
total=${#files[@]}
current=0

# 3. Loop through the list, compile, and print progress
for name in "${files[@]}"; do
    ((current++))
    
    echo "[$current/$total] Compiling: $name.cpp..."
    
    # Run the compilation command
    g++ -o "$name.exe" "$name.cpp"
    
    # Check if the compilation succeeded before printing
    if [ $? -eq 0 ]; then
        echo "   -> Success! Created: $name.exe"
    else
        echo "   -> ERROR: Failed to compile $name.cpp"
    fi
    
    echo "----------------------------------------"
    sleep 1
done

echo "All compilation tasks completed."
