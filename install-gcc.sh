#!/bin/bash

echo "Instalinng C++ Complier (GCC)"
sleep 3
sudo pacman -S build-essential gdb
sleep 3

gcc -v
