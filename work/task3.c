//#include <stdio.h>
#include "task3.h"

char *layout(char buf[], int line, int count)
{
	for (int col_space = 0; col_space < (count - line); col_space++)
		buf[col_space] = ' ';

	for (int col_star = (count - line); col_star < (count + line - 1); col_star++)
		buf[col_star] = '*';
	buf[count + line - 1] = '\0';
	
	return buf;
}