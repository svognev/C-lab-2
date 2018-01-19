#include "task6.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char line[SIZE] = { 0, };
	printf("Enter a text string: ");
	fgets(line, SIZE, stdin);
	clear(line);
	printf(line);
	return 0;
}