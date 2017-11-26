#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 1000  
#define COUNT 256

int main()
{
	int i = 0, j = 0;
	char line[N];
	int count[COUNT] = { 0 };

	printf("Enter string from symbols: \n");
	fgets(line, N, stdin);
	while (line[i] != '\n')
	{
		count[line[i]]++;
		i++;
	}
	
	for (j = 0; j < COUNT; j++)      
		if (count[j] > 0)
			printf("%c - %d\n", j, count[j]);
	
	return 0;
}