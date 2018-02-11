#include <stdio.h>
#include <stdlib.h>
#include "task6.h"
#define SIZE 300
int main()
{
	char line[SIZE];
	printf("Please, enter your line::\n ");
	fgets(line, SIZE, stdin);
	clear(line);
	printf(line);
	return 0;
}