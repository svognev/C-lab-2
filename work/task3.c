char * layout(char buf[], int line, int count)//������������ ����� ������ ������������
				//line - ���������� ����� ������ � ������� ������������, ��������� �������� 1 
				//count - ����� ���������� �����
{
	int cn = 0;	//������� � �������

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