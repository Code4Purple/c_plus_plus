#!/bin/bash

# 1. Define the list of files to compile
files=(
    #"<name of the c++ file"
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
