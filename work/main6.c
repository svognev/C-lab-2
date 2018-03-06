#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task6.h"
#define SIZE 300

int main()
{
	char line [SIZE];
	printf("Enter your string (no more than %d chars):\n\n", SIZE);
	fgets(line, SIZE, stdin);
	puts(clear(line));
	return 0;
}