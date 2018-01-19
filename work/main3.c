#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <string.h>
#include <stdio.h>
#define SIZE 512

int main()
{
	char buf[SIZE] = { 0, };	//Строка
	int count = 0; //Количество строк
	while (1)
	{
		printf("Enter the number of rows: ");
		if (scanf("%d", &count) != 1)
		{
			printf("You entered an incorrect value\n");
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

	for (int i = 1; i <= count; i++)
	{
		layout(buf, i, count);
		buf[strlen(buf)] = 0;
		for (int j = 0; j <= (count + i); j++)
		{
			putchar(buf[j]);
			//printf('%s', buf);
		}
		printf("\n");
	}
	return 0;
}

