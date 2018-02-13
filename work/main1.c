#include <stdio.h>
#include <time.h>
#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS


int main()
{
	int currTime = 00;// секунды
	int	startHeight = 0;// начальная высота, задается пользователем
	clock_t now;
	float result;

	printf("Please enter the startHeight:\n");
	scanf("%d", &startHeight);

	while (1)
	{
		result = height(currTime, startHeight);
		if (result <= 0)
		{
			printf("BABAH!!!\n");
			break;
		}
		printf("t= %02d c   h= %04.1f m\n", currTime, result);
		currTime++;
		now = clock();
		while (clock() < now + CLOCKS_PER_SEC);
	}
	return 0;
}
