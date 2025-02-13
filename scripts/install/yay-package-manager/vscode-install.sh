#!/bin/bash

# Update package database
sudo pacman -Syu

# Install yay if not already installed
if ! command -v yay &> /dev/null; then
  echo "yay is not installed. Installing yay..."
  sudo pacman -S --needed git base-devel
  git clone https://aur.archlinux.org/yay.git
  cd yay
  makepkg -si
  cd ..
  rm -rf yay
else
  echo "yay is already installed."
fi

# Install Visual Studio Code using yay
yay -S visual-studio-code-bin

# Verify the installation
code --version

echo "Visual Studio Code has been installed successfully."
sleep 3
