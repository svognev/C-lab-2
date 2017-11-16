#include "task5.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 9



int main()
{
	int i=0;
	char line[SIZE] = { 0 };
	while (i < SIZE-1)
		line[i++] = ' ';
	for (i = 0; i <= 10; i++)
		puts(password(line));
		
	return 0;
}