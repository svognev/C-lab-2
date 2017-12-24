#include <stdio.h>
#include <stdlib.h>
#include "task3.h"
#define M 200

int main()
{
	char buf[M];
	int count = 0;
	int line = 1;
	printf("Enter the number of rows\n");
	scanf("%d", &count);
	while (line <= count)
	{
		puts(layout(buf, line, count));
		line++;
	}
	return 0;
}