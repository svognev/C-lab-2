#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include "task6.h"

#define SIZE 200

int main()
{
	char line[SIZE] = { 0 };
	printf("Enter your line:\n");
	fgets(line, SIZE, stdin);
	line[strlen(line) - 1] = '\0';
	printf("%s\n", clear(line));
	return 0;
}