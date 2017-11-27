#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<time.h>

#define N 20


char* process(char* line)
{
	char ch;
	int len_buf;

	len_buf = strlen(line);
	
	for (int i = 0; i < len_buf; i++)
	{
		if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
		{
			for (int j = 0; j < i; j++)
			{
				if (line[i] >= '0' && line[i] <= '9')
				{
					ch = line[j];
					line[j] = line[i];
					line[i] = ch;
				}
			}
		}
	}
	line[len_buf] = '\0';

	return line;
}
