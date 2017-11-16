#include <stdio.h>

char * layout(char buf[], int line)
{
	int i = 0;
	int width = line + (line - 1);

	for ( i = 0; i < width; i++)
	{
		buf[i] = '*';
	}
	return buf;
}