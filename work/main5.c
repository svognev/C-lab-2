#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#include "task5.h"

#define SIZE 10
#define NPASS 10

int main()
{
	clock_t now;
	int i = 1;
	char line[SIZE] = { 0 };
	for (i = 1; i < NPASS; i++)
	{
		puts(password(line));
		now = clock();
		while (clock() <= now + CLOCKS_PER_SEC);
	}
	return 0;
}