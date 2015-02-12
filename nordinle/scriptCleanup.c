#include <stdio.h>
#include <stdlib.h>
/*
  File to clean up output of script command.
  Remembered file streams thanks to:
  http://www.cprogramming.com/tutorial/cfileio.html
  Also thanks to Wes for an example of script output.
  Zsh has a lot more garbage than traditional bash
  By: Leland Nordin
*/
int main (int argc, char * argv[])
{
  // set up the in and out pipeline
  FILE * in = fopen(argv[1], "r");
  FILE * out = fopen("cleanUpOnAisleFour", "w");

  char character;
  // start looking for bad characters in the file
  while ((character = getc(in)) != EOF)
    {
      // if you found a bad character skip it and the
      // next character because those are bad too
      if (character == '[' || character == '^'){
	character = getc(in);
	character = getc(in);
      }
      // put the good characters in the clean up file
      fputc(character, out);
    }
  return 0;
  // hopefully you have no square brackets or carrots in your 
  // bash commands...
}
