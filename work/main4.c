#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task4.h"
#define MAXL 20
int main()
{
	clock_t now;
	srand(time(0));
	
	char line[MAXL] = { 0 };
		
	for (int i = 0; i < (MAXL-1); i++)
	{
		if (rand() % 3 == 0)
		{
			line[i] = rand() % ('Z' - 'A' + 1) + 'A';
		}
		else if (rand() % 3 == 1)
		{
			line[i] = rand() % ('z' - 'a' + 1) + 'a';
		}
		else //if (rand() % 3 == 2)
		{
			line[i] = rand() % ('9' - '0' + 1) + '0';
		}
	}
	printf("%s\n", line);
	printf("%s\n", process(line));
	return 0;
}