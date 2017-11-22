#include "task6.h"
#include <string.h>
#define UNWANTED_CHAR ' '  //лишний символ (для очищения)

char * clear(char * line)
{
	//int len = strlen(line);
	for (int i = 0; i < strlen(line); i++)
	{

		if ((line[i] == UNWANTED_CHAR) && (line[i + 1] == UNWANTED_CHAR))


			for (int j = i; j < strlen(line); j++)
			{
				line[j] = line[j + 1];
				//line[strlen(line + 1)] = 0;
				i = 0;
			}
	}

	while (line[0] == UNWANTED_CHAR)
		for (int k = 0; k < strlen(line); k++)
			line[k] = line[k + 1];
	//printf("%d \n", strlen(line));  //длина строки после удаления пробелов в начале

	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';
	if (line[strlen(line) - 1] == UNWANTED_CHAR)
		line[strlen(line) - 1] = '\0';
	//printf("%s \n", line); //очищенная строка
	//printf("%d \n", len); //длина строки после удаления пробелов в конце

	return line;
}
