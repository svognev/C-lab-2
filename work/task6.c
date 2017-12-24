#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include "task6.h"

char * clear(char * line)
{
	int lenline = strlen(line);
	int i = 0;
	int j = 0;
	for (; i < lenline; i++)
	{
		if ((line[i] == ' ' && line[i + 1] == ' ') || (line[i] == ' ' && line[i + 1] == '\0'))
		{
			for (j = i; j < lenline; j++)
			{
				line[j] = line[j + 1];
			}
			i = i - 1;
			line[lenline--] = '\0';
		}
	}

		if (line[0] == ' ')
		{
			for (j=0; j < lenline; j++)
			{
				line[j] = line[j + 1];
			}
			line[lenline] = '\0';
		}

	return line;
}