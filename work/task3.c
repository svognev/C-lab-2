#include <stdio.h>
#include <stdlib.h>
#include "task3.h"

char * layout(char buf[], int line, int count)
{
	int i;

	for (i = 0; i < count - line; i++)
		buf[i] = ' ';
	for (i = count - line; i < line + count - 1; i++)
		buf[i] = '*';
	
	buf[i] = '\0';

	return buf;
}