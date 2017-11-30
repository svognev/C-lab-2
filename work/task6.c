#include "task6.h"
char *clear(char *line)
{
	int position = 0; 
	int end = 0; 
	int temp = 0; 

	for ( ; line[position] != '\0'; position++, end++); 
	--end; 
	

	if (line[end] == '\n') 
	{
		line[end] = '\0'; 
		if (end > 0)
		--end; 
	}

	for ( ; (line[end] == ' ') && (end > 0); end--) 
		line[end] = '\0';

	for (position = 0; line[position] == ' '; ) 
	{
		for (position = 0; (position < end) && (line[position] != '\0'); position++) 
			line[position] = line[position + 1];

		line[end] = '\0';

		if (end > 0)
			end--;

		position = 0;
		continue;
	}


	while ((position < end) && (line[position] != '\0')) 
	{
		for (temp = position; line[position] != ' '; position++, temp++);

			if ((line[position] == ' ') && (line[position + 1] == ' '))
			{
				for ( ; (temp < end); temp++) 
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
