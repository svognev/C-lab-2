#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "task4.h"
#define SIZE 50

int main()
{
	srand(time(NULL));
	int i;
	char line[SIZE] = {line[SIZE - 1] = '\0'};
	for (i = 0; i < SIZE - 1; i++)
	{
		if (rand() % 2 == 0)
		{
			line[i] = rand() % ('Z' - 'A' + 1) + 'A';
			if (rand() % 2 == 0)
				line[i] = rand() % ('z' - 'a' + 1) + 'a';
		}
		else
			line[i] = rand() % ('9' - '0' + 1) + '0';
	}
	puts(line);
	puts(process(line));
	puts(" ");
	return 0;
}