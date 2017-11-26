#include <stdio.h>


char* layout(char buf[], int line, int count)
{
	int space, star;
	
		for (space = 0; space < (count - line); space++)
			 buf[space] = ' ';
		for (star = (count - line); star < (count + line - 1); star++)
			 buf[star] = '*';
	
	return buf;
}
