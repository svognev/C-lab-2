#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task4.h"
#define STR_LEN 20

int main()
{
	srand(time(0));
	char buf[STR_LEN + 1] = { '\0' };
	int i = 0;
	
	for (i = 0; i < STR_LEN; i++)
	{
		if (rand() % 2)
			buf[i] = 'a' + rand() % ('z' - 'a' + 1);
		else
			buf[i] = '0' + rand() % ('9' - '0' + 1);
	}

	puts(buf);
	puts(process(buf));
	
	return 0;
}