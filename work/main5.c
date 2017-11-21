/*Программа, которая выводит на экран 10 паролей, сгенерированных
   случайным образом из латинских букв и цифр, причём буквы присутствуют
   как в нижнем, так и в верхнем регистрах. Длина пароля - 8 символов.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task5.h"
#include <time.h>

#define COUNT 10 //кол-во паролей
#define LENGTH 8  //длина пароля

int main()
{
	clock_t now; 
	srand(time(0));
	char line[LENGTH + 1];
	line[LENGTH] = '\0';
	int i = 1;  //начинаем считать пароли с номера 1
	//puts(password(line));  //проверка вывода
	while (i <= COUNT)
	{
		//now = clock();
		//while (clock() < now + CLOCKS_PER_SEC);
		puts(password(line));
		i++;
	}
	printf("\n");
	return 0;
}