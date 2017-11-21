#include "task1.h"
#include <time.h>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main()
{
	clock_t now;
	int startHeight=0;
	int currTime = 0;
	float h = 0;
	printf("Enter the height:\n");
	if (!scanf("%d", &startHeight))
	{
		printf("Invalid input!\n");
		return 0;
	}
	
	for (;;)
	{
		h = height(currTime, startHeight);
		if (h < 0)
		{
			printf("BABAH!!!\n");
			break;
		}
		printf("t=%02d c h=%06.1f m\n", currTime, h);
		currTime++;
		now = clock();
		while (clock() < now + CLOCKS_PER_SEC);
		
	}

	
	

	return 0;
}


