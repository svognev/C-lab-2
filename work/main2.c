#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "task2.h"

int main()
{
	int value = 0;
	int secret = 0;
	srand(time(0));
	secret = rand()%100+1;
	printf("Enter a number from 1 to 100: ");

	while (1)

	{

		if (scanf("%d", &value) == 1)
		{
			if ((value <= 0) || (value > 100))
			{
				printf("The number must be from 1 to 100.\nTry again: ");
				continue;
			}

			else if (turn(value, secret) > 0)
			{
				printf("Your number is greater than the given number.\nTry again: ");
				continue;
			}

			else if (turn(value, secret) < 0)
			{
				printf("Your number is less than the given number.\nTry again: ");
				continue;
			}

			else
			break;
		}

		else
		{
			for (int buffer = getchar(); buffer != '\n' && buffer != EOF; buffer = getchar());
			printf("Uncorrect data.\nTry again: ");
			continue;
		}

		break;

	}
	
	printf("You guessed right, the given number is %d.\n", secret);

	system("pause");
	return 0;
}
