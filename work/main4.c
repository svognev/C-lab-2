#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task4.h"

int main()
{
	char line[512] = { '0' };
	srand(time(0));
	for (int i = 0; i < 64; i++)
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
			break;
		}
	}
	printf("Program-generated hash:\n%s\n\n", line);
	printf("Processed hash:\n%s\n", process(line));
	return 0;
}