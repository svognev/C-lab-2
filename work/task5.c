
#include <stdlib.h>
#include <string.h>
#include "task5.h"

char * password(char * line)
{
	
	char ch;
	int a = 0, b = 0, c = 0;  //счётчики для трёх типов символов
	int output = 0; //переменная для проверки, что выводятся все три типа символов
	while (output == 0)
	{
		for (int j = 0; j < strlen(line); j++)
		{
			switch (rand() % 3)
			{
			case 0:
			{
				ch = rand() % ('Z' - 'A' + 1) + 'A';
				a++;
			}
			break;
			case 1:
			{
				ch = rand() % ('z' - 'a' + 1) + 'a';
				b++;
			}
			break;
			case 2:
			{
				ch = rand() % ('9' - '0' + 1) + '0';
				c++;
			}
			break;
			}
			line[j] = ch;
			//printf("%c", line[j]);  //проверка вывода
		}
		
		if (a > 0 && b > 0 && c > 0)
		{
			output = 1;
		}
		else
		{
			a = 0, b = 0, c = 0;
		}
		//printf("\n");
	}
	
	return line;
}
