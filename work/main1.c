#include <stdio.h>
#include <time.h>
#include "task1.h"

int main()
{
	clock_t now;
	int currTime = 0;
	int startHeight;
	
	printf("Enter start height: \n");
	scanf("%d", &startHeight);

	while  ((height(currTime, startHeight)) > 0)
	{
		printf("t = %02d sec h = %0.1f m \n",
			currTime,
			height(currTime, startHeight));
		currTime++;
		now = clock();
		while (clock() < now + CLOCKS_PER_SEC);
	}

	printf("BABAH! \n");

	return 0;
}