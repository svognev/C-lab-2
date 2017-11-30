#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "task1.h"

int main()
{	
	int currTime = 0;
	int startHeight = 0;
	time_t now = 0;
	printf("Enter the height with which the bomb falls (in meters): ");
	if ((scanf("%d", &startHeight) == 1) && (startHeight > 0))
	{
		while (height(currTime, startHeight) > 0)
			{
				printf("t=%02d c h=%06.1f m\n", currTime, height(currTime, startHeight));
				currTime++;

				now = clock();
				while ((clock() <= now + CLOCKS_PER_SEC));          
			}
		printf("BABAH!!!\n\a");
	}
	else
		printf("Uncorrect data\n");

	system("pause");
	return 0;
}