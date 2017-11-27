/*
 * task3.c
 *
 *  Created on: 14 нояб. 2017 г.
 *      Author: michael
 */

char* layout(char buf[],int line, int count){
	int stars = line*2 - 1;
	int spaces = count - line;
	int i = 0;
	for (; i < spaces; i++){
		buf[i] = ' ';
	}
	for (; i < stars+spaces; i++){
		buf[i] = '*';
	}
	buf[i] = '\0';

	return buf;
}
