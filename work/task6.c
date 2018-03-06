#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task6.h"
#define SIZE 300

char * clear(char * line)
{
	int size = strlen(line);
	int i, j;
	for (i = 0; i < size; i++)
	{
		if ((line[i] == ' ' && line[i + 1] == ' ') || (line[i] == ' ' && line[i + 1] == '\0') || line[0] == ' ')
		{
			for (j = i; j < size; j++)
			{
				line[j] = line[j + 1];
			}
			--i;
			--size;
			line[size - 1] = '\0';
		}
	}
	return line;
}