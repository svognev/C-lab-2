/*Данная программа предназначена для анализа встречаемости символов в 
строке (в том числе пробелов, цифр и тд), за исключением служебных: '\n' и '\0'*/

#include <stdio.h>
#define SIZE 512
#define SIZE_BUF 256

/*Поиск символа в массиве содержащим уже выведенные символы. Если переданный символ 
в массиве buf отсутствует функция возращает 0, если есть 1*/

int Poisk(char * line, int ind, char * buf)
{
	for (int i = 0; i < SIZE_BUF && (buf[i] != '\n' && buf[i] != '\0'); i++)
	{
		if (line[ind] == buf[i])
		{
			return 1;
		}
	}
	return 0;
}


//Счётчик встречаемости переданного символа, возращает количество повторений
int Count(char * line, int ind)
{
	int count = 0;
	for (int i = 0; i < SIZE && (line[i] != '\n' && line[i] != '\0'); i++)
	{
		if (line[ind] == line[i])
		{
			count++;
		}
	}
	return count;
}


int main()
{
	char line[SIZE] = { 0, };	//Строка вводимая пользователем
	char buf[SIZE_BUF] = { 0, };	//Массив уже сосчитанных и выведенных символов
	int indBuf = 0;	//Свободный индекс массива buf следующий за занятым

	printf("Enter a text string: ");
	fgets(line, SIZE, stdin);
	printf("%s\t%s\n", "Char", "Count");


	for (int ind = 0; ind < SIZE && (line[ind] != '\n' && line[ind] != '\0'); ind++)
	{
		/*Если текущий символ отсутствует в массиве buf (массив уже сосчитанных и 
		выведенных символов) то он туда добавляется и происходит вызов функции счёта 
		встречаемости символа*/
		if (Poisk(line, ind, buf) == 0) 
		{
			buf[indBuf] = line[ind];
			//вызов функции счёта встречаемости символа и вывод результатов
			printf("'%c':\t%d\n", line[ind], Count(line, ind)); 
			indBuf++;
		}
	}		
	return 0;
}