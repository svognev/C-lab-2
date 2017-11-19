#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task3.h"

char * layout(char buf[], int line, int count)
{
	int stars = 2 * line - 1;
	int starsMax = 2 * count - 1;
	int spaces = (starsMax - stars) / 2;
	int i = 0;
	for (i = 0; i < spaces; i++)
	{
		buf[i] = ' ';
	}
	while (stars)
	{
		buf[i] = '*';
		stars--;
		i++;
	}
	buf[i+1] = '\0';
	return buf;
}