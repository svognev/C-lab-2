#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task2.h"

int main()
{
	srand(time(0));
	int secret = rand() % 100 + 1;
	int value = 0;
	printf("Guess the number from 1 to 100. You have 7 attempts\n");

	for (int i = 0; i < 7; i++)
	{
		if (i < 6)
		{
			scanf("%d", &value);
			if (turn(value, secret) == 0)
			{
				printf("Excellent! You guessed!\n");
				break;
			}
			else if (turn(value, secret) == 1)
				printf("My number is less.\n");
			else if (turn(value, secret) == -1)
				printf("My number is greater.\n");
		}
		else
		{
			scanf("%d", &value);
			if (turn(value, secret) == 0)
				printf("Excellent! You guessed!\n");
			else 
				printf("Very bad, you could not guess\n");
		}
	}
	return 0;
}