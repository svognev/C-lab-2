#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task6.h"

int main()
{
	char line[1000];

	printf("Enter string with extra gaps:\n");
	fgets(line, 1000, stdin);	

	printf("Your string after cleaning:\n");
	printf(clear(line));
	
	return 0;
}

