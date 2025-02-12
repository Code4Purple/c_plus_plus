#!/bin/bash

# All The Pacman Manger Installer 1st

echo "Pacman Manger Installs"
sleep 5
cd install/pacman-package-manger/
ls
sleep 5

echo " Creating Chmod +X all..."
sleep 3
chmod +x cmake-make-install.sh
chmod +x discord-install.sh
chmod +x gcc-install.sh
chmod +x git-install.sh
chmod +x jre-jdk-install.sh
chmod +x python-install.sh

echo "installing..."
./cmake-make-install.sh
./discord-install.sh
./gcc-install.sh
./git-install.sh
./jre-jdk-install.sh
./python-install.sh

sleep 5
echo "Yay installs"
sleep 2

cd ../yay-package-install/
chmod +x vscode-install.sh
chmod +x yay-install.sh
sleep 1

./yay-install.sh
./vscode-install.sh

echo "Now fixing Bluetooth"
cd ../../patchs/
chmod +x bluetooth-patch.sh
./bluetooth-patch.sh

cd ../updates/
echo "System Update"
chmod +x system-wide-update.sh
sleep 3
echo "REBOOTING"
sleep 10
reboot