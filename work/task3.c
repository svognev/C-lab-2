#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* layout(char buf[], int line, int count)
{
	int i, j;
	for (i = 0; i < count - line; i++)
	{
		putchar(' ');			
	}
	for (j = 0; j < 2 * line - 1; j++)
	{
		putchar('*');					
	}				
	
	sprintf(buf, "%c", line, count);

	return buf;
}