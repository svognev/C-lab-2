#include <stdio.h>
#include <time.h>
#include "task1.h"

int main()
{
	clock_t now;
	int currTime = 0;
	int startHeight = 1;

	puts("Input a height above the ground (in meters):");
	if (scanf("%d", &startHeight) == 1 && startHeight > 0)
		{
			while (height(currTime, startHeight) > 0)
			{
				printf("t = %02d sec h = %0.1f m\n", currTime, height(currTime, startHeight));
				currTime++;
				now = clock();
				while (clock() < now + CLOCKS_PER_SEC);
			}
			puts("\nB A B A H !\n");

	}
	return 0;
}