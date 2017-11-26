#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task5.h"


int main()
{
	char line[9];	

	printf("10 random passwords:\n");
	for (int i = 0; i < 10; i++)
	{
		puts(password(line));		
	}

	return 0;
}