#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "task1.h"


int main() {
	clock_t now;
	int startHeight = 0;
	int currTime = 0;
	float h = 0;
	printf("Enter Height: ");
	scanf("%d", &startHeight);
	for (;;)
	{
		h = height(currTime, startHeight);
		if (h < 0)
		{
			puts("BABAH!!!");
			break;
		}
		printf("t=%02dc  ", currTime);
		printf("%06.1f m\n", h);
		currTime++;
		now = clock();
		while (clock() < now + CLOCKS_PER_SEC);
	}
	return 0;
}