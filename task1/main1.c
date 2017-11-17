#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "task1.h"

int main() {
	int startHeight = 0;
	int currTime = 0;
	printf("Enter bomb's drop height:\n");
	scanf("%d", &startHeight);
	while (startHeight > 0)
	{
		float currHeight = height(currTime, startHeight);
		if (currHeight > 0)
		{
			printf("t=%02d c h=%06.1lf m\n", currTime, currHeight);
			currTime++;
		}
		else
			break;
		
	}
	printf("BABAH!!!\n");
	return 0;
}
