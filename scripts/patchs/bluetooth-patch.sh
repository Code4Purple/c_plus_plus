#!/bin/bash

# Install the Bluetooth utilities
sudo pacman -S bluez bluez-utils

# Enable and start the Bluetooth service
sudo systemctl enable bluetooth
sudo systemctl start bluetooth

# Check the status of the Bluetooth service
sudo systemctl status bluetooth


echo "Bluetooth is Fixed"
sleep 4