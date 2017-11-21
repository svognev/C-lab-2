#include <string.h>

char* password(char* line)
{
	int i = 0, len = (int)(strlen(line));

	for (i = 0; i < len; i++)
	{
		switch (1 + rand() % 3)
		{
		case 1:
			line[i] = '0' + rand() % ('9' - '0' + 1);
			break;
		case 2:
			line[i] = 'A' + rand() % ('Z' - 'A' + 1);
			break;
		case 3:
			line[i] = 'a' + rand() % ('z' - 'a' + 1);
			break;
		default:
			puts("Error 1");
			break;
		}
	}

	return line;
}