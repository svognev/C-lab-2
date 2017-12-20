#include <string.h>

char * clear(char * line)
{
	int i = 0;
	int	j = 0;
	int len = strlen(line);
	int nach = 0;

	for (i=0,j=0;i<len;i++)//dvojnie probeli
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
	
	while (line[0] == ' ')//probeli v nachale
	{
		nach = 0;
		while (line[nach] != '\0')
		{
			line[nach] = line[nach + 1];
			nach++;
		}
	}
	if (line[strlen(line) - 1] == ' ')//probel v konce
		line[strlen(line) - 1] = '\0';
	return line;
}