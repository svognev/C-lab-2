#include <string.h>

char * clear(char * line)
{
	int i = 0;
	int	j = 0;
	int len = strlen(line);
	
	for (i=0;i<len;i++)
	{
		if ((line[i] == ' ') && (line[i + 1] == ' '))
		{
			j = i + 1;
			while (line[j] != '\0')
			{
				line[j] = line[j + 1];
				j++;
			}
			i=0;
		}
		
	}
	return line;
}