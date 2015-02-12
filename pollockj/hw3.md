##CSC-282 Homework 3
February 11th, 2015
Wesley Pollock

####1: Write a program that cleans up after script. Put it in the repo. 
(I'd recommend using C, but it's up to you.)

See `scriptTidy.c`

* I had to remember how to open files and such in C.
* It was difficult to remove the characters I think are associated with the
arrow keys.

####2: Write a bash script that finds all of the files under the current directory that end with .jpg and moves them to a directory called images.


```
#!/bin/bash

folder=$HOME/Pictures
files=$(find . -iregex ".*\.jpe*g")
IFS=$'\n'

for f in $files; do
    mv $f $folder
done
```

* I found out about [find](http://unixhelp.ed.ac.uk/CGI/man-cgi?find) so that I could search the files under the
 current directory for a certain regex `.*\.jpe*g`.
* I had problems with spaces in my variable names with the for loop in
 bash. I found I could change the `$IFS` [variable](http://www.cyberciti.biz/tips/handling-filenames-with-spaces-in-bash.html).
