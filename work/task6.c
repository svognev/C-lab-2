#include <stdio.h>
#include <string.h>

char *clear(char *line) 
{
	int i = 0, j = 0;
	int length = strlen(line);
		
	while (line[length - 2] == ' ')
	{
		line[length - 2] = '\0';
		length--;
	}

	for (i = 0; i < length; i++)
	{
		while (line[i] == ' ' && line[i + 1] == ' ')
		{				
			for (j = i + 1; j < length; j++)
			{
				line[j] = line[j + 1];	
			}
			
		}		
	}

	if (line[0] == ' ')
		for (j = 0; j < length; j++)
		{
			line[j] = line[j + 1];
		}	
			
	return line;
}