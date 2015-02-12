#!/bin/bash

folder=$HOME/Pictures
files=$(find . -iregex ".*\.jpe*g")
IFS=$'\n'

for f in $files; do
    mv $f $folder
done
    
