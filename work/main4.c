#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task4.h"

#define N 20

int main()
{
	int i;
	char line[N] = { '0' };
	srand(time(0));

	for (i = 0; i < N - 1; i++)
	{
		if (rand() % 3 == 0)
			line[i] = rand() % ('Z' - 'A' + 1) + 'A';
		else if (rand() % 3 == 1)
			line[i] = rand() % ('z' - 'a' + 1) + 'a';
		else
			line[i] = rand() % ('9' - '0' + 1) + '0';
	}
	line[N - 1] = '\0';

	printf("Your string: %s \n", line);
	printf("New string: %s \n", process(line));

	return 0;

}
