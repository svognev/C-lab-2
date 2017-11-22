#define _CRT_SECURE_NO_WARNINGS
#define BUF 8
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
char * password(char *line)
{
	clock_t now;
	int i=0,small=0,digit=0,capital=0;
	char buf[BUF+1] = {" "};
	char result[BUF+1];
	now = clock();// current time
	while (clock() < (now + CLOCKS_PER_SEC))
	srand(time(0));
	while (i>=0)
	{
		for (i = 0;i < BUF;i++)
		{
			switch (rand() % 3)
			{
			case 0:
				line[i] = rand() % ('z' - 'a' + 1) + 'a';// random small letter
				small++;
				break;
			case 1:
				line[i] = rand() % ('Z' - 'A' + 1) + 'A';// random capital letter
				capital++;
				break;
			case 2:
				line[i] = rand() % ('0' - '9' + 1) + '1';// random number
				digit++;
					break;
			}
		}
		line[i] = '\0';//chenge last symbol on en of string
		
		if (small>0&&capital>0&&digit>0)
			break;
	}					  
	sprintf(result, "%s", buf);
	return line;
}