#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

int main() 
{
	int count, line; 
	char buf[50];
	
	printf("Enter amount of lines: \n");
	scanf("%d", &count);
		
	for (line = 1; line <= count; line++)
	{
		layout(buf, line, count);
		putchar('\n');
	}
	return 0;
}