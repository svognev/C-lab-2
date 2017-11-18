#define SIZE 50
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include <string.h> // Äëÿ strlen
#include "task4.h"
int main()
{
	int i, j = 0, score = 0, count = 0, beginLeft = 0, endRight = 0, lenStr = 0, countRight = 0;
	char line[SIZE] = { ' ' };
	char left = ' ', right = ' ';
	srand(time(0));// random of curent time
	for (i = 0;i < SIZE - 1;i++)
	{
		switch (rand() % 2)
		{
		case 0:
			line[i] = rand() % ('Z' - 'A' + 1) + 'A';//random letter
			break;
		case 1:
			line[i] = rand() % ('0' - '9' + 1) + '0';//random number
			break;
		}
	}

	line[SIZE - 1] = '\0';//setting end of line
	printf("random string :\n");
	puts(line);
	printf("\n\nChenge string :\n%s\n", process(line));

	return 0;
}
