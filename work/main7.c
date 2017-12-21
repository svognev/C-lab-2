#include <stdio.h>
#include <string.h>
#define SIZE 100
#define N 128


int main()
{
	int i = 0;
	char line[SIZE] = { 0 };
	char count[N] = { 0 };
	printf("Enter a line:\n");
	fgets(line, SIZE, stdin);
	line[strlen(line) - 1] = '\0';
	while (line[i])
	{
		count[line[i]]++;
		i++;
	}
	for (i = 0; i < N; i++)
	{
		if (count[i] != 0)
			printf("%c - %d\n", i, count[i]);
	}
	return 0;
}