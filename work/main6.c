#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "task6.h"
#define N 500
int main()
{
	char line[N] = { 0 };
	
	printf("Please, enter the line\n");
	fgets(line, N, stdin);
	puts(clear(line));
	return 0;
}