#include <stdio.h>
char *process(char *line)
{ 
	int begin = 0, end = 0;
	char buffer = 0; 

	for (; line[begin] != '\0'; begin++, end++); 
	--end; 
	
	begin = 0;

	while (begin < end) 

	{
		for (; ((line[begin] >= 'a') && (line[begin] <= 'z')); begin++);
		if (begin > end) 
			break;
		buffer = line[begin];
		
		for (; ((line[end] >= '0') && (line[end] <= '9')); end--);
		if (end < begin) 
			break;
		line[begin] = line[end];
		line[end] = buffer;
		continue;
	}

	return line;
}
