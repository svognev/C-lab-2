#include <stdlib.h>
#include "task4.h"
#include <stdio.h>
#include <time.h>

	int main()
	{
		int i = 0;
		srand(time(NULL));
		char line[SIZE] = { 0, };
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
		puts(line);
		puts(process(line));
		return 0;
	}

