#include <stdio.h>
#include "task4.h"
#include <string.h>

char* process(char* line)
{
	int i = 0;
	int j = strlen(line) - 1;
	char memory = 0;


	for (i = 0; i < j; i++)
	{
		if (line[i] <= '9')
		{
			for (; j>i; j--)
			{
				if (line[j] > '9')
				{
					memory = line[j];
					line[j] = line[i];
					line[i] = memory;
					j--;
					break;
				}
			}
		}
	}
	return line;
}