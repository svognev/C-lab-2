#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "task4.h"

#define N 20 

int main() 
{
	int i;
	char line[N];
	srand(time(0));

	for (i = 0; i < N - 1; i++)
		{
			if (rand() % 3 == 0)
				line[i] = rand() % ('Z' - 'A' + 1) + 'A';
			else if (rand() % 3 == 1)
				line[i] = rand() % ('z' - 'a' + 1) + 'a';
			else line[i] = rand() % ('9' - '0' + 1) + '0';
		}
	line[N - 1] = '\0';
	

	printf("String before conversion: ");
	puts(line);
	printf("String after  conversion: ");
	puts(process(line));

	return 0;
}