#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task6.h"

int main()
{
	char line[1000];

	printf("Enter string with extra gaps:\n");
	fgets(line, 1000, stdin);
	line[strlen(line) - 1] = '\0';

	printf("Your string after cleaning:\n");
	printf("%s\n", clear(line));	
	
	return 0;
}

