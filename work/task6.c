char * clear(char line[])
{
	int i = 0, j = 0;
	
	while (line[i] == ' ')
	{
		line[j] = line[j + 1];
		i++;
	}
	
	for (; line[i]; i++)
	{
		if (line[i] != ' ' || line[i - 1] != ' ')
			line[j++] = line[i];
	}
	
	if (line[j - 1] == ' ')
		j--;
	line[j] = '\0';

	return line;
}
