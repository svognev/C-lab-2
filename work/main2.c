#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task2.h"

int main()
{
	srand(time(0));
	int secret = rand() % 100 + 1;
	int cot = 0;
	int result = 0;
	int value = 0;

	printf("Lets play.. 1 - 100\n");

	for (scanf("%d", &value), result = turn(value, secret); ; cot++)
	{
		if (value && value > 0 && value <= 100)
		{
			if (result > 0)
			{
				printf("Secretnoe chiso men'she vashego\n");
				value = 500;
				scanf("%d", &value);
				result = turn(value, secret);
			}
			else if (result < 0)
			{
				printf("Secretnoe chiso bol'se vashego\n");
				value = 500;
				scanf("%d", &value);
				result = turn(value, secret);
			}
			else if (result == 0)
			{
				printf("Bingo! Chislo popitok:%d\n", cot + 1);
				break;
			}
		}
		else 
		{
			printf("Error!\n");
			break;
		}
	}
	return 0;
}