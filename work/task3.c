char * layout(char buf[], int line, int h) 
{
	char star = '*';
	char space = ' ';

	char *str_buf;
	int rez_space;
	int rez_star;

	rez_space =h-line;
	rez_star = 2 * line - 1;
	
	for (int i = 0; i <rez_space; i++)
	{
		buf[i] = space;
	}
	
	for (int i = 0; i <rez_star; i++)
	{
		buf[i+rez_space] = star;
	}
	
	return buf;
}
