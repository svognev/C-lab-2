/*
 * task3.c
 *
 *  Created on: 14 нояб. 2017 г.
 *      Author: michael
 */
#include <string.h>
#include <stdio.h>

char* layout(char* buf,int line){
	int l = strlen(buf);
	int step;
	if (line == 1)
		step = 1;
	else
		step = line*2 - 1;

	l -= 1;
	while (step > 0){
		buf[l] = '*';
		l-=2;
		step--;
	}
	return buf;
}
