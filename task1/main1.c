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
		currTime = clock() + 1000;
		height(currTime, startHeight);
		printf("t=%02d c h=%08.1f m\n", currTime, startHeight);
	}
	printf("BABAH!!!");
	return 0;
}
