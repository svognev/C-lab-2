#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

int main()
{
	int currTime = 0, startHeight;	
	do {
		printf("Enter start height [m]: \n");
		scanf("%d", &startHeight);
	} while (startHeight <= 0);
	
	height(currTime, startHeight);
		
	return 0;
}