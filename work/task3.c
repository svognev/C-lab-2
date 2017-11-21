char* layout(char buf[], int line, int count)
{
	int spNum = count - line;
	int astNum = 1 + 2 * (line - 1);
	int i = 0;

	for (i = 0; i < spNum; i++)
		buf[i] = ' ';
	for (i = spNum; i < (spNum + astNum); i++)
		buf[i] = '*';

	if (line < count)
	{
		buf[i++] = '\n';
		buf[i] = '\0';
	}
	else
		buf[i] = '\0';

	return buf;
}