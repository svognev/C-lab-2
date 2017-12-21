#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include  <time.h>
char * password(char * line)
{
	clock_t now;
	srand(time(0));
	int i = 0;
	for (i = 0; i < 8; i++)
	{
		if (rand() % 3 == 0)
		{
			line[i] = rand() % ('Z' - 'A' + 1) + 'A';
		}
		else if (rand() % 3 == 1)
		{
			line[i] = rand() % ('z' - 'a' + 1) + 'a';
		}
		else
		{
			line[i] = rand() % ('9' - '0' + 1) + '0';
		}
	}
	line[i] = '\0';
	now = clock();
	while (clock() < now + CLOCKS_PER_SEC);
	return line;
}