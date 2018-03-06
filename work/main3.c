#include <stdio.h>
#include <stdlib.h>
#include "task3.h"

int main()
{
	int count, line;
	char buf[300];

	printf("Enter the triangle height: ");
	if (scanf("%d", &count) == 1)
	{
		puts(" ");
		for (line = 1; line <= count; line++)
		{
			puts(layout(buf, line, count));
		}
		putchar('\n');
	}
	return 0;
}