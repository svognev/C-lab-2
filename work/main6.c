#define _CRT_SECURE_NO_WARNINGS
#define SIZE 300
#include<stdio.h>
#include<string.h>
#include "task6.h"
int main()
{
	int short i=0;
	char line[SIZE] = {" "};
	printf("Enter string with gap :\n");
	fgets(line, SIZE, stdin);
	while(line[i]!='\n')//looking '\n'
	{
		i++;
	}
	
line[i] = '\0';// chenge '/n' on end of string
	printf("String without gap :\n%s\n", clear(line));
	return 0;
}