#include <stdlib.h>
#include "task5.h"


char *password(char *line)
{
	int letter = 0; // номер символа в пароле.
	int sort = 0; // вид символа.

			for (letter = 0; letter < (LENGTH); letter++)
			{
				sort = rand() % (3 - 1 + 1) + 1; // 3 варианта

				if (sort == 1)
					line[letter] = (rand() % ('Z' - 'A' + 1) + 'A');

				else if (sort == 2)
					line[letter] = (rand() % ('z' - 'a' + 1) + 'a');

				else // (sort == 3)
					line[letter] = (rand() % ('9' - '0' + 1) + '0');
			}

			return line;
}