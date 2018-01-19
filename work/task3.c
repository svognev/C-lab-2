char * layout(char buf[], int line, int count)
{
	int cn = 0;	//Индекс элемента в массиве

	for (; cn < (count - line); cn++)
	{
		buf[cn] = ' ';
	}
	for (int i = 1; i <= (line * 2 - 1); cn++, i++)
	{
		buf[cn] = '*';
		if (i == (line * 2 - 1))
		{
			buf[cn + 1] = '\0';
		}
	}
	return buf;
}