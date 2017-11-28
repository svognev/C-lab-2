#include "task6.h"
char *clear(char *line)
{
	int position = 0; // позиция в массиве
	int end = 0; // номер последнего не '\0'-го символа
	int temp = 0; // переменная для удаления двойных пробелов

	for ( ; line[position] != '\0'; position++, end++); // определяем размер строки, можно заменить strlen(line)
	--end; // смещаемся с символа '\0'
	

	if (line[end] == '\n') // если последний символ '\n'
	{
		line[end] = '\0'; // заменяем '\n' на '\0'
		if (end > 0)
		--end; // смещаемся с символа '\0'
	}

	for ( ; (line[end] == ' ') && (end > 0); end--) // убираем пробелы в конце строки
		line[end] = '\0';

	for (position = 0; line[position] == ' '; ) // убираем пробелы в начале строки
	{
		for (position = 0; (position < end) && (line[position] != '\0'); position++) // как вариант условия вместо (i < end) можно (line[i] != '\0')
			line[position] = line[position + 1];

		line[end] = '\0';

		if (end > 0)
			end--;

		position = 0;
		continue;
	}


	while ((position < end) && (line[position] != '\0')) // убираем двойные пробелы
	{
		for (temp = position; line[position] != ' '; position++, temp++);

			if ((line[position] == ' ') && (line[position + 1] == ' '))
			{
				for ( ; (temp < end); temp++) // используем temp что бы не двигать position
					line[temp] = line[temp + 1];

				line[end] = '\0';
				end--;
				temp = position;
				continue;
			}

			else
				position++;

		continue;
    
	}

	return line;
}
