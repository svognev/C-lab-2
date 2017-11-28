#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "task5.h"


int main()
{
	
	int word = 0; // количество паролей.
	char line[LENGTH + 1] = { 0 }; // строка для записи пароля.

	printf("%d passwords with %d characters are generated.\n", QUANTITY, LENGTH);
	srand(time(0));

	for (; word < QUANTITY; word++)
		printf("%s\n", password(line));

	system("pause");

	return 0;
}
