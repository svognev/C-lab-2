#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "task1.h"

int main()
{
	int startHeight, currTime = 0;
	clock_t now;

	printf("Please, enter start Height\n");
	scanf("%d", &startHeight);
	if (startHeight > 0 && startHeight <= 30000)/*vishe yj nikto ne bydet bomby sbrasivat*/
	{
		for (;;)
		{
			printf("t=%03d - h=%05.1f metrov\n", currTime, height(currTime, startHeight));
			currTime++;
			now = clock();
			while (clock() < now + CLOCKS_PER_SEC);
			if (height(currTime, startHeight) < 0)
			{
				printf("t=%03d - BAAABAAAAH!!!\n", currTime);
				break;
			}
		}
	}
	else 
		printf("Please, try again\n");
	return 0;
}