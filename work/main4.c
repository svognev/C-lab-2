#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include"task4.h"

#define N 10

int main()
{
	srand(time(0));
	char line[N];
	char ch;
	
	for (int i = 0; i < N - 1; i++)
	{
		ch = '\0';
		ch = rand() % (90-48+1)+48;
	    if (isalnum (ch))
		  {
			line[i] = ch;			
		  }
	}
	line[N - 1] = '\0';
	
	printf("Line str -%s \n", line);
	printf("Line end -%s \n", process(line));

	return 0;
}
