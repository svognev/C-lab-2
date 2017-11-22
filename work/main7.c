/*Программа, выводящая таблицу встречаемости символов для введённой 
  пользователем строки. 
  В этой таблице содержится символ строки и число его повторений.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100
#define N 95 //кол-во символов для ввода пользователю (с 32 по 126 = 95)

int main()
{
	int i;
	char string[SIZE];
	int count[N] = { 0 };
	int max = 0;

	printf("Please, enter the string: \n\n");
	fgets(string, SIZE, stdin);
	//printf("\n");
	
	string[strlen(string) - 1] = '\0';  //удаление \n
	i = 0;
	while (string[i])   //while (buf[i] != '\0')
	{
		count[string[i] - ' ']++;
		i++;
	}

	for (i = 0; i < N; i++)
	{
		if (count[i] > 0)
			printf("%c - %d\n", i + ' ', count[i]);
	}
	printf("\n");
	return 0;
}