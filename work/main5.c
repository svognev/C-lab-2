#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task5.h"
#define PASS_NUM 10
#define PASS_LEN 8

int main()
{
	srand(time(0));
	char buf[PASS_LEN + 1] = "Nh1ku83k"; // initialization for nonzero length
	int i = 0;

	printf("%d passwords:\n", PASS_NUM);

	for (i = 0; i < PASS_NUM; i++)
		puts(password(buf));

	return 0;
}