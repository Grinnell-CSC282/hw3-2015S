/*
program to remove garbage characters from a file.
Because im lazy we will assume that file is always typescript
(the default output of script)

nothing really happens though :(
*/

#include <stdio.h>
#include <ctype.h>
int main()
{
	FILE * garbage = fopen("typescript","r");
	FILE * clean = fopen("clean","w");

	char c;
	while ((c = fgetc(garbage)) != EOF)
		if(c=='\n' || isalpha(c) || isdigit(c))
			fputc(c,clean);

    return 0;
}