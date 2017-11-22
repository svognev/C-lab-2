#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//#define SIZE 100

char * layout(char buf[], int line, int count)
{
	int i;
	int weightGap,weihgtStar;
	weightGap = count-line;
	weihgtStar = line + line - 1;
	 i = 0;
	for (i;i<weightGap;i++)
	{
		buf[i] = ' ';
	}
	for (; i <(weightGap + weihgtStar);i++)
	{
		
		buf[i] = '*';
	}
	return buf;
}



/*Задача №3

Треугольник должен выглядеть так:

*
***
*****
Количество строк задаётся пользователем с клавиатуры.

Состав

Программа должна состоять из двух функций:

char * layout(char buf[],int line,int count) - формирование одной строки треугольника (line - порядковый номер строки с вершины треугольника, начальное значение 1,
count - общее количество строк).
При этом часть строки заполнена пробелами (впереди), а часть символами "звездочка".
main*/