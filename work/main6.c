#include <stdio.h>
#include "task6.h"

int main()
{
	char *line[LENGTH + 1] = { 0 };
	printf("Enter the string (maximum length %d): ", LENGTH);
	fgets(line, LENGTH, stdin);
	printf("Corrected string: %s\n", clear(line));
	system("pause");
	return 0;
}