char * layout(char buf[], int line, int h) 
{
	char star = '*';
	char space = ' ';

	char *str_buf;
	int rez_space;
	int rez_star;
	int i = 0;

	rez_space =h-line;
	rez_star = 2 * line - 1;
	
	for (i; i <rez_space; i++)
	{
		buf[i] = space;
	}

	for (i; i <(rez_star+rez_space); i++)
	{
		buf[i] = star;
	}
	buf[i+1] = '\0';
	
	return buf;
}
