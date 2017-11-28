#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"

int main()
{
	char line[] = STROKA;
	printf("Original string:  %s\n", STROKA);
	printf("Corrected string: %s\n", process(line));

	system("pause");
	return 0;
}
