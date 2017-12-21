#include <stdio.h>
#include <stdlib.h>
#include "task2.h"

int turn(int value, int secret)
{
	if (value == secret)
		return 0;
	else if (value > secret)
		return 1;
	else
		return -1;
}