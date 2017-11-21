#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define STR_LEN 21
#define NUM_SUM 128

int main()
{
	char buf[STR_LEN] = { '\0' };
	int count[NUM_SUM] = { 0 };
	char begSym = 0, endSym = NUM_SUM - 1;
	int i = 0, j = 0;
	
	printf("Enter a string of length less or equal to %d: ", STR_LEN - 1);
	fgets(buf, STR_LEN, stdin);

	for (i = 0; buf[i]; i++)
		count[buf[i] - begSym]++;

	printf("Table of printed characters occurrence:\n");

	for (j = 0; j < NUM_SUM; j++)
		if ((count[j] > 0) && ((j + begSym) >= ' ') && ((j + begSym) <= '~'))
			printf("\"%c\" - %d times\n", j + begSym, count[j]);

	return 0;
}