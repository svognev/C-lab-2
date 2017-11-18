#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include "task1.h"

int main()
{
	clock_t now;
	float startHeight = 0.0, h=1.0;
	int  currTime = 00;
	printf("enter the height for the bomb \n");
	scanf("%f", &startHeight);
	
	while (h > 0)
	{
		now = clock();
		while (clock() < (now + CLOCKS_PER_SEC));
			h = height(currTime, startHeight);// passed distance
			if (h > 0)
				printf("\nt= %02ld  %08.1f", currTime++, h);	
	}
	printf("\nBABAH\n");
	return 0;
}