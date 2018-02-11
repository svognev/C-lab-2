#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task2.h"

int value;//value - число пользователя
int secret;//secret - задуманное компьютером число.
int i;

int main()
{
	
	srand(time(0));
	for (i = 0; i < 1; i++); 
	int secret = rand() % 100 + 1;
	//printf ("%d\n", secret);
												
	while (1)
	{
		printf("Please enter a number between 1 and 100:\n");
		scanf("%d", &value);

		if (turn(value, secret) == 1)
			printf("Less\n");
		else if (turn(value, secret) == -1)
			printf("More\n");
		else // (turn(value, secret) ==  0)
		{
			printf("Guessed it!\n");
			break;
		}
	}

	return 0;
}