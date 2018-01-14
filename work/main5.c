#include <stdio.h>
#include "task5.h"

int main()
{
	int i = 0;
	char line[SIZE_P] = { 0, };
	for (i = 0; i < SIZE_P; i++)
	{
		printf("%s\n", password(line));
	}
	return 0;
}