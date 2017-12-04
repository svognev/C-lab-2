#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
#include"task5.h"

#define N 9
#define NUM 10

void wait(int sec)
{
	clock_t now;
	now = clock() + sec * CLOCKS_PER_SEC;
	while (clock() < now) {}
}

int main()
{
	char line[N];
	
	for (int i = 0; i < NUM; i++)
	{
		printf("Password %d - %s \n", i + 1, password(line));
		wait(1);
	}
	return 0;
}
