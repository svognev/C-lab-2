#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task5.h"
#define N 9

int main()
{
	int i = 0;
	char line[N] = { 0 };
	while (i < N - 1)
		line[i++] = ' ';
	for (i = 0; i<=10; i++)
		puts(password(line));

	return 0;
}