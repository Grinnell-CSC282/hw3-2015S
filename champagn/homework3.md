### Script Cleanup
tr -cd '[:print:]\n' < typescript > typescriptclean

- Using the tr command can accomplish deleting all the garbage text in a file. 
- This can be used to quickly clean up script.

source:
http://www.computerhope.com/unix/utr.htm

### Moving all files ending in .jpg to images folder
mkdir images | mv *.jpg ./images

- This will create a directory called images and move every file ending with .jpg to it.
