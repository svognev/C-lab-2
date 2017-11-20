#include <stdio.h>

char * layout(char buf[], int line, int count)
{
	int i = 0;
	for (; i < (count - line); i++)
		buf[i] = ' ';
	int width = line + (line - 1) + i;
	for (; i < width; i++)
		buf[i] = '*';
	buf[i] = '\0';
	return buf;
}