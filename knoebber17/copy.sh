#!/bin/sh
# first argument is where from, second argument is where too. 

for file in $(find $1 | grep .jpg) ; do
	echo "copying $file to $2"
	cp $file $2
done