#include <stdio.h>
#include <time.h>
#include "task1.h"

int main()
{
	clock_t now;
	int startHeight = 0;
	int currTime = 0;
	float h = 1;
	printf("Enter the height of the bomb drop:\n");
	scanf("%d", &startHeight);
	if (startHeight > 0)
	{
		while (h > 0)
		{
			h = height(currTime, startHeight);
			if (h <= 0)
				printf("BOOM!!!\n");
			else
			{
				printf("t = %02d s.\t""h = %06.1f m. \n", currTime, h);
				currTime++;
				now = clock();
				while (clock() <= now + CLOCKS_PER_SEC);
			}
		}
		return 0;
	}
	else
	{
		printf("Invalid input, try again\n");
		return 1;
	}
}