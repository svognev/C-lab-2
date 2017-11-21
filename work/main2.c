#include "task2.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS


int main()
{
	int value = 0, secret = 0;
	srand(time(0));
	secret = rand()%100+1;
	for (;;)
	{
		printf("Enter a number 1-100\n");
		if (!scanf("%d", &value))
		{
			printf("Invalid input!\n");
			return 0;
		}
		switch (turn(value,secret))
		{
		case 0:
			printf("This is the right number!\n");
			return 0;
		case 1:
			printf("The secret number is less!\n");
			break;
		case -1:
			printf("The secret number is more!\n");
			break;
		}
	}
	
	return 0;
}