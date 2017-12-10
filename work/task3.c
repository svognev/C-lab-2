char *layout(char buf[], int line, int count)
{


	int i = 0;

	for ( ; i < (count - line); i++)
		buf[i] = ' ';

	for ( ; i < (count + line - 1); ++i)
		buf[i] = '*';

	if (i == (count + line) - 1)
		buf[i] = '\0';
		
	return buf;

}