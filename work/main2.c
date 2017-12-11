#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task2.h"

int main()
{
	int value = 0;
	int secret = 0;
	int cot = 0;
		
	srand(time(0));
	secret = rand() % 100 + 1;
	
	printf("Lets play.. 1 - 100\n");
	scanf("%d", &value);
	
	for(;;)
	{
		if (value && (value >= 0) && (value <= 100))
		{
			if (turn(value, secret) == 0)
			{
				printf("Bingo! Chislo popitok:%d\n", cot + 1);
				break;
			}
			if (turn(value, secret) == 1)
			{
				printf("Chislo bol'she\n");
				cot++;
				value = 101;
				scanf("%d", &value);
			}
			if (turn(value, secret) == -1)
			{
				printf("Chislo men'she\n");
				cot++;
				value = 101;
				scanf("%d", &value);
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