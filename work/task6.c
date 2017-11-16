char * clear(char * line)
{
	int i=0,j = 0;
	char temp = 0;
	while (line[i] != '\n')
	{
		if (line[i] == ' ' && line[i + 1] == ' ')
		{
			j = i+1;
			while (line[j] != '\n')
			{
				line[j]=line[j+1];
				j++;
			}
			line[j-1] = '\0';
			i--;
		}
		i++;
	}
	return line;
}