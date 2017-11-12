#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task5.h"
#define SIZE 512

int main()
{
	char line[8] = { '0' };
	clock_t now;
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		printf("%s", password(line));
	}
	return 0;
}