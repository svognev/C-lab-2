#include <string.h>

char * clear(char * line)
{
	int i=0,j = 0;
	int len = strlen(line);
	line[len-1] = '\0';

	while (line[i])
	{
		if (line[i] == ' ' && line[i + 1] == ' ')
		{
			j = i+1;
			while (line[j] != '\0')
			{
				line[j]=line[j+1];
				j++;
			}
			//line[j-1] = '\0';
			i--;
		}
		i++;
	}
	return line;
}