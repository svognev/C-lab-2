#include <string.h>
char* process(char* line)
{
	int i = 0;
	int j = strlen(line) - 1;
	char temp = 0;


	for (i=0;i < j;i++)
	{
		if (line[i] <= '9')
		{
			for (; i < j; j--)
			{
				if (line[j] > '9')
				{
					temp = line[i];
					line[i] = line[j];
					line[j] = temp;
					j--;
					break;
				}
			}
		}
	}
	return line;
}