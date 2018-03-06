#include <stdio.h> 
#include <time.h> 
#include "task5.h" 
#define SIZE 7

int main()
{
	char line[SIZE + 1] = {line[SIZE] = '\0'};
	int i;
	srand(time(NULL));
	clock_t now;

	for(i = 0; i < SIZE; i++)
	{
		now = clock();
		puts(password(line));
		while (clock() <= now + 1000);
	}
	putchar('\n');
	return 0;
}