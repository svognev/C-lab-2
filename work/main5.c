#include <stdio.h>
#include "task5.h"

int main()
{
	char line[9] = { 0 };
	for (int i = 0; i < 10; i++)
		puts(password(line));
	return 0;
}