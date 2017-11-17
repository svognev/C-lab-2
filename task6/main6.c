#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task6.h"

int main()
{
	char line[512] = { '0' };
	printf("Enter a string with extra space characters:\n");
	fgets(line, 512, stdin);
	for (int i = 0; i < strlen(line); i++)
	{
		if (line[i] == '\n')
			line[i] = '\0';
	}
	printf("\nYour string looks like that now:\n%s\n", line);
	printf("%s\n", clear(line));
	return 0;
}