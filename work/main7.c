#define LENGTH 1024
#define N 127
#include <stdio.h>

int main()
{

	int i = 0;
	int	j = 0;
	int count[N] = { 0 }; 
	char line[LENGTH + 1] = { 0 }; 

	printf("Enter the string (maximum length %d): ", LENGTH);
	fgets(line, LENGTH, stdin);

	for (; line[i] != '\0'; i++) 
	{
		j = (int)(line[i]);
		count[j]++;
	}

	for (j = 0; j < (N - 1); j++) 
		if ((j > 31) && (j < 125)) 
			if (count[j] > 0) 
	printf(" %c - %d\n", (char)j, count[j]);

	system("pause");
	return 0;
}