#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "task4.h"
#define SIZE 50

char* process(char* line)
{
	int i, j;
	char swap = 0;
	j = strlen(line) - 1;
	for (i = 0; i <= j; i++)
	{
		if (line[i] <= '9')
		{
			while (j > i)
			{
				if (line[j] > '9')
				{
					swap = line[j];
					line[j] = line[i];
					line[i] = swap;
					j--;
					break;
				}
				j--;
			}
		}
	}
	return line;
}