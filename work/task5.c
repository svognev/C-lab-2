#include "task5.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char * password(char * line)
{

	for (int i = 0; i < SIZE_CP; i++)
	{

		switch (rand() % 3)
		{
		case 0:
		{	

			line[i] = rand() % ('Z' - 'A' + 1) + 'A';
			break;
		}
		case 1:
		{	
			line[i] = rand() % ('z' - 'a' + 1) + 'a';
			break;
		}
		case 2:
		{
			line[i] = rand() % ('9' - '0' + 1) + '0';
			break;
		}
		}
	}
	
	return line;
}