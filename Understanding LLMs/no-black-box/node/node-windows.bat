@echo off

echo "Back-End Windows UI- Version 1"
timeout /t 2 /nobreak >nul

set value=0

:while_loop
:: check the condition
if %value% LSS 10 (
    echo "Please select the option you want to perform"
    timeout /t 2 /nobreak >nul
    echo "         0. Exit"
    timeout /t 2 /nobreak >nul
    echo "         1. Reset the Data to Zero"
    timeout /t 2 /nobreak >nul
    echo "         2. Node Rebuild"
    timeout /t 2 /nobreak >nul
    echo "         3. Build the Data Structure - FULL"
    timeout /t 2 /nobreak >nul
    echo " "
    timeout /t 2 /nobreak >nul
    set /p input="Enter the option: "
    echo " "
    set /a value=%value% + 1

)

:: what happens after the condition is met

if %input%==0 (
    echo "Exiting the program"
    exit
)


if %input%==1 (
    echo "Resetting the Data to Zero"
    timeout /t 2 /nobreak >nul
    echo "Removing the data within the dataset folder..."
    cd ../data/dataset
    echo "REMOVED THE IMG FOLDER"
    rmdir /s /q "img"
    echo "REMOVED THE JSON FOLDER"
    rmdir /s /q "json"
    timeout /t 2 /nobreak >nul
    echo "REMOVED THE SAMPLE.JSON FILE"
    del samples.json
    echo "REMVOED THE FEATURES.JSON FILE"
    del features.json
    echo " "
    echo "Now Removing the common/js_objects folder..."
    timeout /t 2 /nobreak >nul

    cd ../../common
    echo "REMOVED THE JS_OBJECTS FOLDER"
    rmdir /s /q "js_objects"
    timeout /t 2 /nobreak >nul

    echo " "
    echo "DATA RESET TO ZERO"
    timeout /t 2 /nobreak >nul
    echo " "
    cd ../node
    goto while_loop
)

if %input%==2 (
    echo "Node Rebuild"
    timeout /t 2 /nobreak >nul
    echo "Rebuilding the node modules..."
    npm rebuild
    echo " "
    echo "NODE REBUILD COMPLETE"
    goto while_loop
)

if %input%==3 (
    echo "Building the Data Structure - FULL"
    timeout /t 2 /nobreak >nul
    cd ../data/dataset
    echo "Creating the img folder..."
    mkdir img
    timeout /t 2 /nobreak >nul
    echo "Creating the json folder..."
    mkdir json
    timeout /t 2 /nobreak >nul
    echo "Creating the js_objects folder..."
    cd ../../common
    mkdir js_objects
    timeout /t 2 /nobreak >nul
    
    
    echo "Starting the data_generator.js file..."
    cd ../node
    node dataset_generator.js
    echo " "
    node feature_extractor.js
    echo " "
    echo "DATA STRUCTURE BUILD COMPLETE With Full Data"
    echo " "
    goto while_loop
)