#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 1000
#define N 128

int main(void)
{
	int i;
	int count[N] = {0};
	char string[SIZE];

	printf("Enter your string (max %d chars):\n", SIZE);
	fgets(string, SIZE, stdin);
	string[strlen(string) - 1] = '\0';
	
	for (i = 0; string[i] != '\0'; i++)
		count[string[i]]++;
	
	puts(" ");
	for (i = 0; i < N; i++)
	{
		if (count[i] > 0)
			printf("'%c' - %d\n", i, count[i]);
	}
	puts(" ");
	return 0;
}