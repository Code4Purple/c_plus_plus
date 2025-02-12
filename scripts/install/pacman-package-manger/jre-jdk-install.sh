#!/bin/bash

# Install JRE
sudo pacman -S jre-openjdk

# Verify JRE installation
java -version

# Install JDK
sudo pacman -S jdk-openjdk

# Verify JDK installation
javac -version

echo "Installed - JRE & JDK"
sleep 3