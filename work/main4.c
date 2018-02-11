#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task4.h"
#define SIZE 15


int main()
{
	int i;
	srand(time(0));
	char line[SIZE];
	for (i = 0; i < SIZE - 1; i++)
	{
		switch (rand() % 3)
		{
		case 0:
		{
			line[i] = rand() % ('Z' - 'A' + 1) + 'A';
			break;
		}
		case 1:
		{
			line[i] = rand() % ('z' - 'a' + 1) + 'a';
			break;
		}
		case 2:
		{
			line[i] = rand() % ('9' - '0' + 1) + '0';
			break;
		}

		}
	}
	line[SIZE - 1] = '\0';

	printf("%s\n", line);
	printf("%s\n", process(line));
	return 0;
}