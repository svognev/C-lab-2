#include <stdio.h>
#include <string.h>

char *clear(char *line) 
{
	int i = 0, j = 0;

	for (i = 0; i < strlen(line); i++)
	{
		while (line[i] == ' ' && line[i + 1] == ' ')
		{				
			for (j = i + 1; j < strlen(line); j++)
			{
				line[j] = line[j + 1];				
			}
		}
	}

	return line;
}