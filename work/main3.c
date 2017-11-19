#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

int main()
{
	int count = 0;
	char buf[512] = { '0' };
	printf("Enter number of lines: ");
	scanf("%d", &count);
	
	for (int line = 1; line <= count; line++)
	{
		printf("%s\n", layout(buf, line, count));
	}
	return 0;
}
