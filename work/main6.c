#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"task6.h"

#define N 50

int main()
{
	char line[N];

	printf("Enter string \n");
	gets(line);
	printf("String you -%s\n", line);

	printf("String new -%s\n", clear(line));

	return(0);
}
