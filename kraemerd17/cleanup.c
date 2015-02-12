#include <stdio.h>
#include <ctype.h>

int
main (int argc, char * argv[])
{
    FILE * fIn = fopen (argv[1], "rb");
    FILE * fOut = fopen (argv[2], "w");
    int c;

    while ( (c = fgetc (fIn)) != EOF )
        if ( isprint (c) ) fputc (c, fOut);
        
    fcloseall();
} // main

/*
  isprint() is a function found in the ctype header file. It checks to see if a given
  character is printable, which is exactly what we need to clean up all of the commands 
  copied by script.
  
  I found this in Appendix D (p. 768) in K. N. King. "C Programming: A Modern Approach". (2008).
*/
