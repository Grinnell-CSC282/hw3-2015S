#!/bin/bash

cd $1

find . -type f -name "*.jpg" | xargs mv -t $2
