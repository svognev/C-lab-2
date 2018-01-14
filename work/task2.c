#include "task2.h"

int turn(int value, int secret)
{
	if (value > secret)		//Если число введённое пользователем больше загаданного
		return 1;
	else if (value < secret)	//Если число введённое пользователем меньше загаданного
		return -1;
	else if (value == secret)	//Если числа совпадают
		return 0;
}