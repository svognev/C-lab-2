#include <stdio.h>
#include <math.h>
#define G 9.81 //acceleration of gravity

float height(int currTime, int startHeight)
{
	return startHeight - (G*pow(currTime, 2) / 2);
}