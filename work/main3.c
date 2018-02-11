#include <stdio.h>
#include <stdlib.h>
#include "task3.h"

int main()
{
	char buf[256];
	int line; //line - порядковый номер строки с вершины треугольника, начальное значение 1
	int count;//общее количество строк


	printf("Please enter the number of lines:\n");
	scanf("%d", &count);

	for (int i = 1; i <= count; i++)
	{
		layout(buf, i, count);
		for (int j = 0; j <= (count + i - 2); j++)
		{
			putchar(buf[j]);
		}
		printf("\n");
	}
	return 0;
}