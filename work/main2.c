#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task2.h"
int main()
{
	srand(time(0));
	int secret = rand() % 100 + 1;
	int value = 0;
	for (int j = 0; j < 7; ++j)//number of attempts 7
	{
		printf("Enter value (1-100):\n");
		scanf("%d", &value);
		if (turn(value,secret)==1)
			printf("Less!\n");

		if (turn(value,secret)==-1)
			printf("More!\n");

		if (j == 7)
		{
			printf("You could not guessed!\n "); break;
		}
		if (turn(value,secret)==0)
		{
			printf("Guessed!  "); break;
		}
	}
	return 0;
}
