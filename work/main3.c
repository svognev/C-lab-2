#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

int main()
{
	int line = 1;
	int count = 0;
	int halfsize = SIZE/2;
	printf("Enter the number of rows (Min 2, Max %d): ", halfsize);
	if ((scanf("%d", &count) == 1) && (count >= 2) && (count <= halfsize))
	{
		while (line <= count)
		{
			char buf[SIZE] = { 0 };
			printf("%s\n", layout(buf, line, count));
			line++;
		}
	}

	else
		printf("Uncorrect data.\n");

	system("pause");
	return 0;
}