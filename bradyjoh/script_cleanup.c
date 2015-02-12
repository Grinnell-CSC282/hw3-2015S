/*  John Brady
	2015-02-12
	CSC282, Rebelsky
	Homework 3
	NOTE: Control Code ASCII Values found here: 
		http://en.cppreference.com/w/cpp/string/byte/isprint
*/

#include <stdio.h>
#include <stdlib.h>



int main (int argc, char * argv[]) {
	if (argc != 2) {
		fprintf(stderr, "Wrong Syntax. Argument should be filename.\n");
		return 1;
	}
	FILE * input = fopen(argv[1], "r");
	FILE * output = fopen("script_cleanup", "w");
	char c; 
	while((c=fgetc(input))!=EOF){
			//cast as integer representation, see if it comes in printable
			//or I could just use isprint
		if ( int c >= 32 && int c <=126)
			fputc(c, output)
		}
	}
	return 0;
}