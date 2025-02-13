#!/bin/bash

# Install Python
sudo pacman -S python

# Verify Python installation
python --version

# Install pip (Python package manager)
sudo pacman -S python-pip

# Verify pip installation
pip --version

echo "Installed Python & Pip"
sleep 3