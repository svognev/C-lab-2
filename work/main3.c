#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"task3.h"
#define SIZE 100
	int main()
	{
		int line = 1, count=0;
		char buf[SIZE] = {'0'};
		printf("Enter numeros line : ");
		scanf(" %i", &count);
		for (line = 1;line <= count;line++)
		{
			printf("%s\n", layout(buf, line,count));
		}
		return 0;
	}	