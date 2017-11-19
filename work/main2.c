#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task2.h"

int main()
{	
	int value = 0;
	srand(time(0));	
	int secret = rand() % 100;
			
	do {
		printf("Please Enter number from 1 to 100: ");
		scanf("%d", &value);		
	} while ((value < 1) || (value > 100));
	
	while (turn(value, secret) != 0)
	{
		for (int i = 2; i < 100; i++)     // —четчик попыток
		{
			if (turn(value, secret) == 1)
			{
				printf("[try %d] Enter LESS number: ", i);
				scanf("%d", &value);
			}
			else if (turn(value, secret) == -1)
			{
				printf("[try %d] Enter MORE number: ", i);
				scanf("%d", &value);
			}
		}
	}
	printf("\nCongratulations! You guessed!\nSecret number = %d\n", secret);
			
	return 0;
}