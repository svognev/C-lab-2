#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "task1.h"

int main()
{
	int currSec = 0, startHeight = 0;
	float currHeight = 1.0f;
	clock_t now;

	printf("Enter the initial height in meters: ");
	scanf("%d", &startHeight);
	
	while (currHeight > 0.0f)
	{
		currHeight = height(currSec, startHeight);
		if (currHeight > 0.0f)
		{
			if (currSec)
			{
				now = clock();
				while (clock() < now + CLOCKS_PER_SEC);
			}
			printf("t=%.2d s h=%06.1f m\n", currSec, currHeight);
		}
		currSec++;
	}

	printf("BABAH!!!");

	return 0;
}