#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#include "task4.h"

#define SIZE 100

int main()
{

	int i = 0;
	srand(time(0));
	char line[SIZE] = { 0 };
	for (i = 0; i < SIZE-1; i++)
	{
		if (rand() % 2 == 0)
			line[i] = rand() % ('Z'-'A') + 'A';
		else 
			line[i] = rand() % 10 + '0';
	}
	puts(process(line));
	return 0;
}