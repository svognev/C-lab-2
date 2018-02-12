#include <stdio.h> 
#include <stdlib.h> 

#define SIZE 8

char * password(char * line)// генерация пароля в line. 

{
	int i = 0;

	for (i = 0; i < 8; i++)
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
	//	line[SIZE - 1] = '\0';
		return line;
}