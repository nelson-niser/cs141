#!/bin/sh
#Ask User for his name
echo "What is your name?"
read NAME
#Create a folder with the name
mkdir $NAME
#Create 5 files inside the folder with name1.cpp, name2.cpp and so on
cd $NAME
for i in 1 2 3 4 5
do
touch $NAME$i.cpp
done 
