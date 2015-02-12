/* A very bad program to clean up the results of the bash 'script'
   command */
#include <stdio.h>
#include <ctype.h>

int
main(){

  FILE *read = fopen("./typescript", "r");
  FILE *write = fopen("./cleanTypeScript", "w");
  int a, b;
  while ((a = fgetc(read)) != EOF)
    {
      if( isnumber(b) && a=='m')
	fputc(' ', write);
      else if(a == '\n' || isspace(a) || a=='.')
	fputc(a, write);
      else if (isalpha(a) || isnumber(a))
	fputc(a, write);
      b=a;

    }






  return 0; 
}
