char * layout(char buf[], int line, int count)//формирование одной строки треугольника
				//line - порядковый номер строки с вершины треугольника, начальное значение 1 
				//count - общее количество строк
{
	int cn;	//элемент в массиве

	for (cn = 0; cn < (count - line); cn++)
	{
		buf[cn] = ' ';
	}
	for (int i = 1; i <= (line * 2 - 1); cn++, i++)
	{
		buf[cn] = '*';
	}
	return buf;
}