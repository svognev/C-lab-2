#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

int main()
{
	int linesTotal = 0;
	char buf[512] = { '0' };
	printf("Enter number of lines: ");
	scanf("%d", &linesTotal);
	for (int line = 1; line <= linesTotal; line++)
	{
		for (int i = 0; i < (2 * linesTotal - 1); i++)
		{
			buf[i] = '*';
		}
		printf("%s\n", layout(buf,line));
	}
	return 0;
}
