/*
 * task4.c
 *
 *  Created on: 14 нояб. 2017 г.
 *      Author: michael
 */
#include <stdio.h>

char* process(char* line){
	int i=0,j=10;
	char temp;
	while (j > i){
		while (line[i] > 58){
			i++;
		}
		while (line[j] < 58){
			j--;
		}
		if (i <= j){
			temp = line[i];
			line[i] = line[j];
			line[j] = temp;
			i++;
			j--;
		}
	}
	return line;
}
