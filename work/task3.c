#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task3.h"

char * layout(char buf[], int line)
{
	int stars = 2 * line - 1;
	int spaces = (strlen(buf) - stars) / 2;
	for (int i = 0; i < spaces; i++)
	{
		buf[i] = ' ';
	}
	buf[strlen(buf) - spaces] = '\0';
	return buf;
}