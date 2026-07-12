#!/bin/bash

# 1. Define the list of files to compile
files=(
    #"<name of the c++ file"
    #"01 - Stacks.cpp"
    #"02 - Queues.cpp"
    #"03 - Priority Queues"
    #"04 - Linked Lists"
    #"05 - Dynamic Arrays"
    #"06 - LinkLists vs ArrayLists"
    #"07 - Big O notation"
    #"08 - Linear search"
    #"09 - Binary search"
    #"10 - Interpolation search"
    #"11 - Bubble sort"
    #"12 - Selection sort"
    #"13 - Insertion sort"
    #"14 - Recursion"
    #"15 - Merge sort"
    #"16 - Quick sort"
    #"17 - Hash Tables"
    #"18 - Graphs intro"
    #"19 - Adjacency matrix"
    #"20 - Adjacency list "
    #"21 - Depth First Search"
    #"22 - Breadth First Search"
    #"23 - Tree data structure intro"
    #"24 - Binary search tree"
    #"25 - Tree traversal"
    #"26 - Calculate execution time"
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
        #echo " " 
        echo "        ✅ -> Success! Created: $name.exe"
    else
        #echo " "
        echo "        ❌ -> ERROR: Failed to compile $name.cpp"
        break
    fi
    
    echo "----------------------------------------"
    sleep 1
    #sleep 0.5s
done

echo "All compilation tasks completed."
