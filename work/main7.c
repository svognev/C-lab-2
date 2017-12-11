#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 512
#define N 512

int main()
{
	int i=0;
	char buf[SIZE] = { 0 };
	char count[N] = { 0 };
	int max = 0;

	puts("Please, enter your line");
	fgets(buf, SIZE, stdin);

	while (buf[i] != '\n')
	{
		count[buf[i]]++;
		i++;
	}
	for (i = 0; i < N; i++)
	{
		if (count[i] > max)
			max = count[i];
		if (count[i] > 0)
			printf("%c-%d\n", i, count[i]);
	}
	printf("Max frequence: %d\n", max);
	for (i = 0; i < N; i++)
	{
		if (count[i] == max)
			printf("%c-%d\n", i, count[i]);
	}
	return 0;
}