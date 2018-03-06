#include <stdio.h> 
#include <time.h> 
#include "task5.h" 
#define SIZE 7

char * password(char * line)
{
	int i, lot;
	for (i = 0; i < SIZE; i++)
	{
		lot = rand() % 3;
		if (lot == 2)
			line[i] = rand() % ('Z' - 'A' + 1) + 'A';
		else if (lot == 1)
			line[i] = rand() % ('z' - 'a' + 1) + 'a';
		else
			line[i] = rand() % ('9' - '0' + 1) + '0';
	}
	return line;
}