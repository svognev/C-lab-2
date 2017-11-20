#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task6.h"

void moveArray(char line[], int i, int j)
{
	while (j <= strlen(line))
	{
		line[i] = line[j];
		i++;
		j++;
	}
}

char * clear(char * line)
{	
	for (int i = 0; i < strlen(line); i++)
	{
		if (line[i] == ' ')
		{
			for (int j = i + 1; j < strlen(line); j++)
			{
				if (line[j] != ' ')
				{
					moveArray(line, i+1, j);
					break;
				}
			}
		}
		if (line[i] == ' ' && i == 0)
		{
			for (int j = i + 1; j < strlen(line); j++)
			{
				if (line[j] != ' ')
				{
					moveArray(line, i, j);
					break;
				}
			}
		}
		if (line[i] == ' ' && line[i + 1] == '\0')
				line[i] = '\0';
	}
	return line;
}