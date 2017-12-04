#include <string.h>
#include <stdlib.h>
#include  <time.h>
char * password(char * line)
{
	clock_t now;
	srand(time(0));
	int len = strlen(line);

	for (int i = 0; i < len; i++)
	{

		switch (rand() % 3)
		{
		case 0:
			line[i] = (rand() % ('z' - 'a' + 1) + 'a');
			break;
		case 1:
			line[i] = (rand() % ('Z' - 'A' + 1) + 'A');
			break;
		case 2:
			line[i] = (rand() % ('9' - '0' + 1) + '0');
		}
	}
		now = clock();
		while (clock() < now + CLOCKS_PER_SEC);
		return line;
	
}