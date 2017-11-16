
#include "task3.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100


int main()
{
	char buf[SIZE] = {0};
	char buf2[SIZE] = {' '};
	int line;
	int i;
	printf("Enter a number of lines\n");
	if (!scanf("%d", &line))
	{
		printf("Invalid input!");
		return 0;
	}
	
	for (i = 0; i < SIZE; i++)
		buf2[i] = ' ';
	
	for ( i = 1; i <= line; i++)
	{
		buf2[line - i] = '\0';
		printf("%s", buf2);
		puts(layout(buf, i));
	}
	
	return 0;
}