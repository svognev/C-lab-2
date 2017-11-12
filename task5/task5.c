#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "task5.h"

char password(char line)
{
	int i = 0;
	for (i = 0; i < strlen(line); i++)
	{
		switch (rand() % 3)
		{
		case 0:
			line[i] = rand() % ('Z' - 'A' + 1) + 'A';
			break;
		case 1:
			line[i] = rand() % ('z' - 'a' + 1) + 'a';
			break;
		case 2:
			line[i] = rand() % ('0' - '9' + 1) + '0';
		}
	}
	return line;
}