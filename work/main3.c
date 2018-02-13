#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <string.h>
#include <stdio.h>
#define SIZE 512

int main()
{
	char buf[SIZE] = { 0, };
	int count = 0; //общее количество строк
	
	printf("Please enter the number of lines:\n");
	scanf("%d", &count);
		
	for (int i = 1; i <= count; i++)
	{
		layout(buf, i, count);
		buf[strlen(buf)] = 0;
		for (int j = 0; j <= (count + i); j++)
		{
			putchar(buf[j]);
		}
		printf("\n");
	}
	return 0;
}
