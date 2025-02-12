#!/bin/bash

# Update package database
# sudo pacman -Syu

# Install prerequisites
sudo pacman -S --needed git base-devel

# Clone the yay repository from AUR
git clone https://aur.archlinux.org/yay.git

# Change to the yay directory
cd yay

# Build and install yay
makepkg -si

# Clean up by removing the yay directory
cd ..
rm -rf yay

# Verify the installation
yay --version

echo "yay has been installed successfully."
sleep 3