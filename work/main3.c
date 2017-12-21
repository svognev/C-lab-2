#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

int main()
{
	char buf[100];
	int line;
	int count = 0;
	
	printf("Hi! Please, enter number (1-20) and watch a magic!\n");
	scanf("%d", &count);
	
	if ((count) && (count >= 0) && (count <= 20))
	{
		for (line = 0; line <= count; line++)
			printf("%s\n", layout(buf, line, count));
	}
	else
		printf("Sorry..\n");
	
	return 0;
}