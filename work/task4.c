#define SIZE 15


char* process(char* line)// обработка строки.
{
	int i;
	int j = SIZE - 1;
	char swap;


	for (i = 0; i < j; i++)
	{
		if (line[i] <= '9')
		{
			for (i != 0; i < j; j--)
			{
				if (line[j] > '9')
				{
					swap = line[j];
					line[j] = line[i];
					line[i] = swap;
					j--;
					break;
				}
			}
		}
	}
	return line;
}