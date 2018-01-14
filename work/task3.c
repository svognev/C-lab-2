/*
line - порядковый номер строки с вершины треугольника, начальное значение 1
count - общее количество строк
*/
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
	}
	return buf;
}