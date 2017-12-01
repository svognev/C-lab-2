#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task6.h"

int main()
{
	char line[256];

	printf("Enter string:\n");
	fgets(line, 256, stdin);
	line[strlen(line) - 1] = '\0';//delete \n

	printf("Clear string:> %s\n", clear(line));	
	
	return 0;
}
