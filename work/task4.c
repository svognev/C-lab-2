#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>

#define N 20


char* process(char* line)
{
	char ch;
	int len_buf;

	len_buf = strlen(line);
	
	for (int i = 0; i < len_buf; i++)
	{
		if (!isdigit((unsigned char)line[i]))
		{
			for (int j = 0; j < i; j++)
			{
				if (isdigit((unsigned char)line[j]))
				{
					ch = '\0';
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
