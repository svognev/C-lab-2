#include "task6.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100


int main()
{
	char line[SIZE]; //= { 0 };
	printf("Enter a string:\n");
	fgets(line, SIZE, stdin);
	puts(clear(line));
	return 0;
}