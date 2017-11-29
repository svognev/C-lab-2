#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<limits.h>
#include<time.h>

#define N 20

char* process(char* line)
{
	char ch;
	int len_buf;

	len_buf = strlen(line);
	
	for (int i = 0; i < len_buf; i++)
	{
		if (isdigit((unsigned char)line[i]))
		{
			for (int j = len_buf - 1; j > i; j--)
			{
				if (!isdigit((unsigned char)line[j]))
				{
					ch = line[i];
					line[i] = line[j];
					line[j] = ch;
					break;
				}
			}
		}
	}
	
	return line;
}
