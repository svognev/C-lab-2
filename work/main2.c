#include <stdio.h>
#include <time.h>
#include "task2.h"

#define MAX 100
#define MIN 0

int main()
{
	int value = 0; //Число введённое пользователем
	int secret = 0; //Отгадываемое число
	int correct = 0;
	srand(time(NULL));
	secret = rand() % (MAX - MIN + 1) + MIN;
	while (1)
	{
		while (1)
		{
			printf("Enter a number in the range from %d to %d: ", MIN, MAX);
			if (scanf("%d", &value) != 1 || value > MAX || value < MIN) 
			{
				printf("You entered an incorrect value!\n");
				if (ferror(stdin) || feof(stdin))
				{
					clearerr(stdin);
				}
				else
					rewind(stdin);
				continue;
			
			}
			else
				break;
		}

		switch (turn(value, secret))
		{
		case 1: {
			printf("less!\n");
			break;}
		case -1: {
			printf("more!\n");
			break;}
		case 0: {
			printf("victory!\n");
			return 0;}
		}
	}
}

