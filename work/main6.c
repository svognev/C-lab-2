#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "task6.h"
#define STR_LEN 20

int main()
{
	char buf[STR_LEN + 1] = { '\0' };
	int i = 0;
	srand(time(0));

	// Random generated string
	for (i = 0; i < STR_LEN; i++)
	{
		if ((i == 0) || (i == STR_LEN - 1))
		{
			if (rand() % 2)
				buf[i] = 'a' + rand() % ('z' - 'a' + 1);
			else
				buf[i] = ' ';
		}
		else
		{
			if ((1 + rand() % 10) >= 7)
				buf[i] = 'a' + rand() % ('z' - 'a' + 1);
			else
				buf[i] = ' ';
		}
	}
	
	printf("Initial string:\n\"%s\"\n\n", buf);
	printf("Cleaned string:\n\"%s\"\n", clear(buf));

	return 0;
}