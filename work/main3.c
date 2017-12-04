
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"
#define N 256
int main()
{
	char buf[N] = { 0 };
	int line=0;
	int count=0;
	printf("Enter number of lines\n");
	scanf("%d", &count);


	for (line = 1; line <= count; line++)
	{
		puts(layout(buf, line, count));
	}
	return 0;
}
