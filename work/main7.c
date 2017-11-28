#define LENGTH 1024 // максимальная длинна строки 
#define N 127
#include <stdio.h>

int main()
{

	int i = 0; // номер элемента в массиве line.
	int	j = 0; // номер элемента в массиве count.
	int count[N] = { 0 }; // массив для учёта повторений символа
	char line[LENGTH + 1] = { 0 }; // массив для ввода строки

	printf("Enter the string (maximum length %d): ", LENGTH);
	fgets(line, LENGTH, stdin);

	for (; line[i] != '\0'; i++) // чтение line, и учёт повторений символов в count
	{
		j = (int)(line[i]);
		count[j]++;
	}

	for (j = 0; j < (N - 1); j++) // вывод символов и повторений на экран
		if ((j > 31) && (j < 125)) // исключение служебных символов
			if (count[j] > 0) // и не встречающихся в line
	printf(" %c - %d\n", (char)j, count[j]);

	system("pause");
	return 0;
}