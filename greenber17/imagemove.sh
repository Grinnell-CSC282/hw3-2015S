 #!/bin/bash 

mkdir images

find ./ -name *.jpg -exec mv '{}' ./images/ \;
