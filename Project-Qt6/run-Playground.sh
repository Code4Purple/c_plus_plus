#!/bin/bash 

folder="Playground"
cmake="QtPlayground"


echo "Build / Run -> $folder"
sleep 2

cd "$folder" || exit 1  # Good practice: stop if directory doesn't exist
rm -rf build
mkdir build
cd build || exit 1
cmake ..
make

# This runs the compiled binary 
./"$cmake" 
