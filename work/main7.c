#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000
#define N 256
int main()
{
	int i;
	char buf[SIZE];
	int count[N] = { 0 };

	printf("Please, enter your line:\n ");
	fgets(buf, SIZE, stdin);
	i = 0;
	while (buf[i] != '\0')
	{
		count[buf[i] - ' ']++;
		i++;
	}
	for (i = 0; i < N; i++)
		if (count[i] > 0)
			printf("%c - %d\n", i + ' ', count[i]);
	return 0;
}