#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task2.h"

int main()
{
	int value, difference;
	srand(time(NULL));
	int secret = rand() % 100 + 1;
	printf("Guess the number that I set (between 1 and 100):\n");
	while (scanf("%d", &value))
	{
		if ((difference = turn(value, secret)) == 0)
		{ 
			puts("\nYes, this is it!\n");
			break;
		}
		else if (difference > 0)
			printf("Secret number is less than yours, try again:\n");
		else
			printf("Secret number is more than yours, try again:\n");
	}

	return 0;
}