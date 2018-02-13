#define SIZE 300

char * shift(char * line, int i)	//посимвольный (i) сдвиг  массива символов
{
	for (; (i < SIZE && line[i] != '\n' && line[i] != '\0'); i++)
	{
		line[i] = line[i + 1];
	}
	return line;
}

char * clear(char * line)	// очистка строки line.
{
	int i = 0;
	while (1)
	{
		if ((i == 0) && (line[i] == ' '))
		{
			shift(line, i);
			continue;
		}

		else if (line[i] == ' ' && line[i + 1] == ' ')
		{
			shift(line, i);
			continue;
		}

		else if (line[i] == ' ' && (line[i + 1] == '\n' || line[i + 1] == '\0'))
		{
			shift(line, i);
			continue;
		}

		 else if (i == SIZE - 1|| line[i] == '\n' || line[i] == '\0')
			break;

		i++;
	}
	return line;
}
