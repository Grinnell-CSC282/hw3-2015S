#!/bin/bash

mkdir images

find / -inname "*.jpg" -exec cp {} images
