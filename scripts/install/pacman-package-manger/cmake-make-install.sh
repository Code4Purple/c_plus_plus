#!/bin/bash

# Install CMake
sudo pacman -S cmake

# Verify CMake installation
cmake --version

# Install Make
sudo pacman -S make

# Verify Make installation
make --version

echo "Installed CMAKE & MAKE"
sleep 3