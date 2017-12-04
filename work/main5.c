#include <stdio.h>
#include "task5.h"

#define N 9

int main()
{
	int i;
	char line[N] = { 0 };
	printf("Your 10 passwords! \n");
	
		for (i = 0; i < N; i++)
			puts(password(line));
	
	return 0;
}