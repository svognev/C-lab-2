#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"

int main()
{
	char line[9] = { '0' };
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		printf("%s\n", password(line));
	}
	return 0;
}