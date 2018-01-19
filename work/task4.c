#include "task4.h"

char* process(char* line)
{	
	int i = 0;
	int j = SIZE - 1;
	char temp = 0;


	for (i = 0; i < j; i++)
	{
		if (line[i] <= '9')
		{
			for (; i < j; j--)
			{
				if (line[j] > '9')
				{
					temp = line[j];
					line[j] = line[i];
					line[i] = temp;
					j--;
					break;
				}
			}
		}
	}
	return line;
}