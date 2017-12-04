#include <stdio.h>
#include "task3.h"

int main()
{
	int line = 1;
	int count;
	char buf[3000] = { ' ' };
	
	printf("Enter number of rows: ");
	scanf("%d", &count);
	printf("\n");

	for (line; line <= count; line++)
		printf("%s\n", layout(buf, line, count));
	
	printf("\n");

	return 0;
}