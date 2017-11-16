
#include "task4.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 20



int main()
{
	srand(time(0));
	int i;
	char line[SIZE] = { 0 };
	for (i = 0; i < SIZE-1; i++)
	{
		switch (rand() % 3)
		{
			case 0:
				line[i] = rand() % ('Z'-'A' + 1)+'A';
				break;
			case 1:
				line[i] = rand() % ('z' - 'a' + 1) + 'a';
				break;
			case 2:
				line[i] = rand() % ('9' - '0' + 1) + '0';
		}
	}
	puts(line);
	puts(process(line));
	return 0;
}