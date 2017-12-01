#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
#define N 256


int main()
{
	int i = 0;
	char line[SIZE] = { 0 };
	char count[N] = { 0 };
	printf("Enter a string:\n");
	fgets(line, SIZE, stdin);
	while (line[i] != '\n')
	{
		count[line[i]]++;
		i++;
	}
	for (i = 0; i < 256; i++)
	{
		if (count[i] != 0)
			printf("%c - %d\n", i, count[i]);
	}
	return 0;
}