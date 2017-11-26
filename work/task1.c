#include <stdio.h>
#define G 9.81 //acceleration of gravity

float height(int currTime, int startHeight)
{
	return startHeight - ((G * currTime)/2);
}