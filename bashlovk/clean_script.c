#include <stdio.h>
#include <stdlib.h>

/**
 * Inspired by  www.cs.grinnell.edu/~walker/courses/161.sp14/modules/comm-line-files/state-year.c
 */
int
main(int argc, char * argv[])
{
  if (argc != 2)
    {
      fprintf (stderr,"program requires a filename as a parameter\n");
      return 1;
    }
  FILE * input = fopen(argv[1], "r");

  if (!input)
    {
      fprintf (stderr,"%s is not readable\n", argv[1]);
      return 1;
    }
  FILE * output = fopen("cleaned_up_script", "w");
 
  char c;
  while ((c = fgetc(input)) != EOF)
    {
      if (isprint(c) || c == '\n')
        fputc(c, output);  
    }// while
  return 0;
}// main
