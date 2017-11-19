#include <stdio.h>
#include <math.h>
#include <Windows.h>

#define G 9.81

float height(int currTime, int startHeight)
{
	float fullTime = sqrtf(2 * startHeight / G);  // Общее время падения с заданной высоты
	
	for (currTime = 0; currTime < fullTime; currTime++)
		{
			float currHeight = startHeight - 0.5*G*powf(currTime, 2);
			printf("t = %d sec    h = %0.2f m \n", currTime, currHeight);
			Sleep(1000);			
		}
	printf("BABAH! \n");
}