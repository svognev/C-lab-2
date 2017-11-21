#include <math.h>

float height(int currTime, int startHeight)
{
	
	const float g = 9.81;
	float len = g*pow(currTime,2) / 2;
	return startHeight-len;

}