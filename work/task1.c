#include <stdio.h>
#include <time.h>
#include "task1.h"
#define G 9.81

float height(int currTime, int startHeight)
{
	float H = 0;
	H = (float)startHeight - (G * currTime * currTime / 2);
	return H;
}