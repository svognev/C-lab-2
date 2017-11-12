#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//#include "task2.h"

int main()
{
	int i;
	srand(time(0));
	for (i = 0; i < 10; i++)
		printf("%d\n", rand()%100+1);
	return 0;
}