#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main (int argc, char * argv[])
{
  if (argc != 2)
    {
      printf("Requires at least one filename of the script\n");
      return 1;
    }// if argc != 1

  //Creates the name of the clean file
  char fname[120];
  strncpy(fname,argv[1],100);
  strncat(fname,"_clean", 6);

  //Opens the script file and the output cleaned script file
  FILE * sfile = fopen(argv[1], "r");
  FILE * cleanfile = fopen(fname, "w");

  printf("Cleaning %s\n", argv[1]);
  int c = fgetc(sfile);

  while (c  != EOF)
    {
      //If the character is an ESC character, skip the next two characters      
      if (c == 27)
        {   
          fgetc(sfile);
          fgetc(sfile);
          c = fgetc(sfile);
        }// if       

      //Put the character into the clean file if it is a printable ASCII 
      //character or a newline
      if(isprint(c) || c == '\n')
        fputc(c, cleanfile);
      c = fgetc(sfile);
    }// while
  return 0;
}//main
