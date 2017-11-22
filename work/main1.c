#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include"task1.h"

void wait(int sec)
{
	clock_t now;
	now = clock() + sec * CLOCKS_PER_SEC;
	while (clock() < now) {}
}

int main()
{
	int startHeight;
	float currHeight;
	int currTime=0;
	
	printf("Enter height\n");
	scanf("%d", &startHeight);
			
		for (currHeight = 0; currHeight >= 0; currTime++)
		{
			currHeight = height(currTime, startHeight);

			if (currHeight > 0)
			{
				printf("t = %02d %h = %.2lf\n", currTime, currHeight);
				wait(1);
			}
			else
				printf("BooM!!!\n");
		}

	return 0;
}
