#include <stdio.h>
#include <string.h>

//move array function
void moveArray(char line[], int i, int j)
{
	while (j <= strlen(line))
	{
		line[i] = line[j];
		i++;
		j++;
	}
}

//clearing spaces function
char* clear(char* line)
{
	int i = 0, j = 0;
	int length = strlen(line);

	for (int i = 0; i < length; i++)
	{
		if (line[i] == ' ')
		{
			for (j = i + 1; j <= length; j++)
			{
				if (line[j] != ' ')
				{
					moveArray(line, i + 1, j);
					break;
				}
			}
		}

		if (line[i] == ' ' && i == 0)
		{
			for (j = i + 1; j < length; j++)
			{
				if (line[j] != ' ')
				{
					moveArray(line, i, j);
					break;
				}
			}
		}

		//don't forget about \0
		if (line[i] == ' ' && line[i + 1] == '\0')
			line[i] = '\0';

	}
	return line;
}