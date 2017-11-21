/*Написать программу, выводящую на экран треугольник из звёздочек.
  Количество строк задаётся пользователем с клавиатуры.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

int main()
{
	int count;
	int line = 1;
		
	char buf[80] = {' '};
	
	printf("Enter the number of rows: \n");
	scanf("%d", &count);
	printf("\n");
	
	for (line; line <= count; line++)
		printf("%s\n", layout(buf, line, count));
	
	printf("\n");

	return 0;
}