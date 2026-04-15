#!/bin/bash


# Just add the new completed chapter to the list below to auto all the chapters exe creation

rm -r *.exe

g++ -o "01 - Hello World".exe "01 - Hello World".cpp
g++ -o "02 - Variables & Basic Data Types".exe "02 - Variables & Basic Data Types".cpp
g++ -o "03 - Const Keyword".exe "03 - Const Keyword".cpp
g++ -o "04 - Namespaces".exe "04 - Namespaces".cpp
g++ -o "05 - Typedef & type aliases".exe "05 - Typedef & type aliases".cpp
g++ -o "06 - Arithmetic Operators.exe" "06 - Arithmetic Operators.cpp" 
g++ -o "07 - Type conversion.exe" "07 - Type conversion.cpp"
g++ -o "08 - User input.exe" "08 - User input.cpp" 
g++ -o "09 - Useful math related functions.exe" "09 - Useful math related functions.cpp"

for FILE in *.exe; do
    echo ".EXE File Created: $FILE"
    sleep 5
done
