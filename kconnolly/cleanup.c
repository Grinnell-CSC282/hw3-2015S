// Formatting and various other things borrowed from my project111.c lab from Prof. Walker's class. 
// yes, this really did take an hour to make. Longer, actually, as I had to reacquaint myself 
// with C's file I/O all over again.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Enter file in line that you call the program with.
int main(int argc, char * argv[])
{
 
  
  char * line1;
  line1 = argv[1];
  FILE * fileRW; 
  fileRW = fopen(line1, "r");

  printf("The file you're reading and outputting is %s \n", line1);
  char holder = fgetc(fileRW);
  while (holder != EOF)
    {
      if (holder == '^')
        /*{
          delete character
          holder = getchar();
          delete character;
          holder = getchar();
          } */
        //Apparently "^M" is not the "^" + "M" characters. This ruins my entire approach, sadly.
        {
           printf("Located!\n"); // Absent a way to delete characters, prints this.
          holder = fgetc(fileRW);
        }
      else
        {
          printf(""); // Prints this to show that there IS work being done anyway. Alt: print "\n", etc.
          holder = fgetc(fileRW);
        }
    }

  //  Even if implemented, this would not work. I was wrong to think that ^M was two separate characters, 
  //  and I can't enter it in emacs with CTRL + M. Very sad and disheartening.
  return 0;
}
