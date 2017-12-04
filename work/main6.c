#include <stdio.h>
#include "task6.h"

int main()
{
	int i = 0;
	char text[1000], blank[1000];
	printf("Enter some text with spaces \n");
	fgets(text,1000,stdin);
	
	for (i = 0; i <= strlen(text); i++)
	{
		if (text[i] == '\n')
			text[i] = '\0';
	}

	printf("Text after removing blanks\n %s\n", clear(text));

	return 0;
}