#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task4.h"

char* process(char* line)
{
	for (int i = 0; i < strlen(line); i++)
		if (line[i] >= '0' && line[i] <= '9')
		{
			for (int j = strlen(line) - 1; j > i; j--)
			{
				if ((line[j] >= 'A' && line[j] <= 'Z') || (line[j] >= 'a' && line[j] <= 'z'))
				{
					char buff = line[j];
					line[j] = line[i];
					line[i] = buff;
					break;
				}

			}
		}
	return line;
}