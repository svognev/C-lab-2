#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "task2.h"
#define MAX_ATT_NUM 7

int main()
{
	srand(time(0));
	int secret = 1 + rand() % 100;
	int userValue = 0, returnValue = 1, attNum = 1;
	
	do
	{
		printf("Attempt number %d\n", attNum);
		printf("Enter a number from 1 to 100: ");
		scanf("%d", &userValue);
		returnValue = turn(userValue, secret);
		
		switch (returnValue)
		{
		case 1:
			puts("Secret is smaller");
			break;
		case -1:
			puts("Secret is larger");
			break;
		case 0:
			puts("Guessed");
			break;
		default:
			puts("Error 1");
			break;
		}
		attNum++;
		putchar('\n');
	} while ((returnValue != 0) && (attNum <= MAX_ATT_NUM));

	if (attNum > MAX_ATT_NUM)
		puts("Exceeded the number of attempts\nGame over");

	return 0;
}

