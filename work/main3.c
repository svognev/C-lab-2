
#include "task3.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100


int main()
{
	char buf[SIZE] = {0};
	int i;
	int count;
	printf("Enter a number of lines\n");
	if (!scanf("%d", &count))
	{
		printf("Invalid input!\n");
		return 0;
	}
	
	for ( i = 1; i <= count; i++)
	{
		puts(layout(buf, i,count));
	}
	
	return 0;
}