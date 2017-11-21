#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task2.h"

int main()
{
	srand(time(0));
	int secret = rand() % 100 + 1;
	int value = 0, i = 6;
	printf("The program has generated a number of 1 to 100. You've got 7 tries to find the number. Type in the number:\n");
	while (i >= 0)
	{
		scanf("%d", &value);
		int result = (turn(value, secret));
		if (result == 0) {
			printf("You win!\n");
			return 0;
		}
		else if (result < 0) {
			printf("The number is bigger\n");
		}
		else if (result > 0) {
			printf("The number is less\n");
		}
		else
		{
			printf("Oh no, something went wrong...\n");
			return 0;
		}
		i--;
	}
	printf("Unfortunatelly you're out of tries...\n");
	return 0;
}