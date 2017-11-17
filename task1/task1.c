#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "task1.h"

float height(int currTime, int startHeight)
{
	startHeight = startHeight - (9.81 * (currTime * currTime) / 2);
	return startHeight;
}