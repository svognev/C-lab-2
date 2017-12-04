#include <stdio.h>
#include <string.h>

char* process(char* line)
{
	int left = 0, right = strlen(line) - 1;

	for (left = 0; left < strlen(line); left++)
		if (line[left] >= '0' && line[left] <= '9')
		{
			for (right = strlen(line) - 1; right > left; right--)
			{
				if ((line[right] >= 'A' && line[right] <= 'Z') || (line[right] >= 'a' && line[right] <= 'z'))
				{
					char buf = line[right];
					line[right] = line[left];
					line[left] = buf;
					break;
				}
			}
		}
		return line;
}