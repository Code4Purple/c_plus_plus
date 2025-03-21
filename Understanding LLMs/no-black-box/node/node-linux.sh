#!/bin/bash

echo "Back-End Linux UI- Version 1"
sleep 2

value=0

while [ $value -lt 10 ]; do
    echo "Please select the option you want to perform"
    sleep 2
    echo "         0. Exit"
    sleep 2
    echo "         1. Reset the Data to Zero"
    sleep 2
    echo "         2. Node Rebuild"
    sleep 2
    echo "         3. Build the Data Structure - FULL"
    sleep 2
    echo " "
    sleep 2
    read -p "Enter the option: " input
    echo " "
    value=$((value + 1))

    if [ "$input" -eq 0 ]; then
        echo "Exiting the program"
        exit
    fi

    if [ "$input" -eq 1 ]; then
        echo "Resetting the Data to Zero"
        sleep 2
        echo "Removing the data within the dataset folder..."
        cd ../data/dataset || exit
        echo "REMOVED THE IMG FOLDER"
        rm -rf img
        echo "REMOVED THE JSON FOLDER"
        rm -rf json
        rm -f sample.json
        echo "REMOVED THE FEATURES.JSON FILE"
        rm -f features.json
        echo " "
        echo "Now Removing the common/js_objects folder..."
        sleep 2

        cd ../../common || exit
        echo "REMOVED THE JS_OBJECTS FOLDER"
        rm -rf js_objects
        sleep 2

        echo "DATA RESET TO ZERO"
        sleep 2
        echo " "
        cd ../node || exit
    fi

    if [ "$input" -eq 2 ]; then
        echo "Node Rebuild"
        sleep 2
        echo "Rebuilding the node modules..."
        npm rebuild
        echo " "
        echo "NODE REBUILD COMPLETE"
    fi

    if [ "$input" -eq 3 ]; then
        echo "Building the Data Structure - FULL"
        sleep 2
        cd ../data/dataset || exit
        echo "Creating the img folder..."
        mkdir -p img
        sleep 2
        echo "Creating the json folder..."
        mkdir -p json
        sleep 2
        echo "Creating the js_objects folder..."
        cd ../../common || exit
        mkdir -p js_objects
        sleep 2

        cd ../ || exit
        echo "Starting the data_generator.js file..."
        cd node || exit
        node data_generator.js
        echo " "
        #cd node || exit
        node feature_extractor.js
        echo " "
        echo "DATA STRUCTURE BUILD COMPLETE With Full Data"
    fi
done
