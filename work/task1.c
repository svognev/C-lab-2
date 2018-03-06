#include <stdio.h>
#include <time.h>
#include "task1.h"

float height(int currTime, int startHeight)
{
	return ((float)startHeight - (9.81 * (float)currTime * (float)currTime) / 2);
}