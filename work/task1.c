#include <stdio.h>
#include <math.h>
#include <time.h>

#define G 9.81

float height(int currTime, int startHeight)
{
	clock_t now;
	float fullTime = sqrtf(2 * startHeight / G);  // Full time of falling
	
	for (currTime = 0; currTime < fullTime; currTime++)
		{
			float currHeight = startHeight - 0.5*G*powf(currTime, 2);
			printf("t = %d sec    h = %0.2f m \n", currTime, currHeight);
			//Sleep(1000);
			now = clock();
			while (clock() <= now + CLOCKS_PER_SEC);
			
		}
	printf("BABAH! \n");
}