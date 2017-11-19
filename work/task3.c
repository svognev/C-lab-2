#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* layout(char buf[], int line, int count)
{
	int j;
	for (j = 1; j < count - line; j++)
	{
		putchar(' ');			
	}
	for (j = 1; j <= 2 * line + 1; j++)
	{
		putchar('*');					
	}				
	
	sprintf(buf, "%c", line, count);

	return buf;
}