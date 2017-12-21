#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#include <string.h>
#include "task5.h"

char * password(char * line)
{
	srand(time(0));
	int i;
	int size = 7;
	for (i = 0; i < size; i++)
	{
		if (rand() % 3 == 0)
			line[i] = rand() % ('Z' - 'A') + 'A';
		else if (rand() % 3 == 1)
			line[i] = rand() % ('Z' - 'A') + 'a';
		else
			line[i] = rand() % 10 + '0';
	}
	return line;
}