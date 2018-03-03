#include <stdio.h>
#include <string.h>
	
char *clear(char * line) 
{
    int i = 0, j = 0;
    int len = strlen(line);	
		
    for (i = 0; i < len; i++)
    {		
	while (line[i] == ' ' && line[i + 1] == ' ')
            for (j = i + 1; j < len; j++)
		line[j] = line[j + 1];	

	if (line[len - 1 - i] == ' ' && line[len - i] == '\0')
            line[len - 1 - i] = '\0';
    }

    if (line[0] == ' ')
	for (i = 0; i < len; i++)		
            line[i] = line[i + 1];		
			
    return line;
}
