#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "task1.h"

float height(int currTime, int startHeight)
{
	time_t sec = time(0);
	while (time(0) <= sec);
	return(startHeight - (9.81 * (currTime * currTime)) / 2);
}