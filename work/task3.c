char * layout(char buf[], int line, int count)//формирование одной строки треугольника
				//line - порядковый номер строки с вершины треугольника, начальное значение 1 
				//count - общее количество строк
{
	int cn = 0;	//элемент в массиве

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