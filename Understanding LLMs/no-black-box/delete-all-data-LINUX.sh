#!/bin/bash

echo " REMOVED json FOLDER"
echo " REMOVED ALL DATA  : json"
rm -r data/dataset/json
sleep 6

echo " REMOVED img FOLDER"
echo " REMOVED ALL DATA  : img"
rm -r data/dataset/img
sleep 7

echo " REMOVED samples.json FILE"
echo " REMOVED DATA FILE: samples.json"
rm data/dataset/samples.json
sleep 8

echo " REMOVED js_objects FOLDER"
echo " REMOVED DATA FILE: samples.js" 
rm -r common/js_objects
sleep 3
