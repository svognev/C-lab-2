#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"
#define MAX_NUM_LINES 40

int main()
{
	char buf[90] = { '\0' };
	int numLines = 0, i = 0;

	printf("Enter the total number of lines: ");
	scanf("%d", &numLines);

	if (numLines > MAX_NUM_LINES)
	{
		numLines = MAX_NUM_LINES;
		printf("Max total number of lines is %d\n", MAX_NUM_LINES);
	}

	for (i = 1; i <= numLines; i++)
		puts(layout(buf, i, numLines));

	return 0;
}