#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>

#define N 9

char * password(char *line)
{
	srand(time(0));
	clock_t now;

	char ch;

	for (int i = 0; i < N-1; i++)
	{
		ch = '\0';
	    ch = rand() % (122 - 48 + 1) + 48;
		
		if (isalnum(ch))
		{
			line[i] = ch;
		}
	}
	line[N - 1] = '\0';

	now = clock();
	while (clock() <= now + CLOCKS_PER_SEC) 
	{

	}

	return line;
}
