#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 8 //size of password

char* password(char * line)
{
	int j;
	//clock_t now;
	//srand(time(0));
	
		for (j = 0; j < SIZE; j++)
		{
			switch (rand() % 3)
			{
			case 0:
				line[j] = rand() % ('Z' - 'A' + 1) + 'A';
				break;
			case 1:
				line[j] = rand() % ('z' - 'a' + 1) + 'a';
				break;
			case 2:
				line[j] = rand() % ('0' - '9' + 1) + '1';
				break;
			}
			//now = clock();
			//while (clock() < now + CLOCKS_PER_SEC);
			line[SIZE] = '\0'; // after 8 symbols
		}
	return line;
}