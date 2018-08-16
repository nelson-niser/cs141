#!/bin/sh
#Ask the User for his name
echo "What is your name?"
read NAME
#Create a folder with the name
mkdir $NAME
#Create a file inside the folder with name.cpp
cd $NAME
touch $NAME.cpp
