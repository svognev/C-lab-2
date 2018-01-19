#define _CRT_SECURE_NO_WARNINGS

#include "task1.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	clock_t now;
	int startHeight = 0;
	int currTime = 0;
	float h = 0;
	while (1)
	{
		printf("Enter the height you want to drop the bomb(m): ");
		if (scanf("%d", &startHeight) != 1)
		{
			printf("Entered is not a valid value!!!\n");
			if (ferror(stdin) || feof(stdin))
			{
				clearerr(stdin);
			}
			else
				rewind(stdin);
			continue;
		}
		else
			break;
	}
	while (1)
	{
		h = height(currTime, startHeight);
		if (h <= 0)
		{
			printf("BABAH!!!\n");
			break;
		}
		printf("t = %02dc\t%06.1fm\n", currTime, h);
		currTime++;
		now = clock();
		while (clock() < now + CLOCKS_PER_SEC);
	}
	return 0;
}
