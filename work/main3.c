#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

int main()
{
	int line = 1; // line - порядковый номер строки с вершины треугольника
	int count = 0; // count - общее количество строк.
	printf("Enter the number of rows (Min 2, Max %d): ", N/2);
	if ((scanf("%d", &count) == 1) && (count >= 2) && (count <= N/2))
	{
		while (line <= count)
		{
			char buf[N] = { 0 };
			printf("%s\n", layout(buf, line, count));
			line++;
		}
	}

	else
		printf("Uncorrect data.\n");

	system("pause");
	return 0;
}