/*
 * task6.c
 *
 *  Created on: 15 нояб. 2017 г.
 *      Author: michael
 */
#include <stdio.h>
#define S ' '

char* clear(char* line){
	int i = 0, j = 0;

	while (line[j]!='\n' && line[j+1]!='\0')
		j++;
	line[j] = line[j+1];

	while (line[i]){
		if ((line[i] == S && line[i+1] == S) || line[0] == S){
			int j = i+1;
			while (line[j]){
				line[j-1] = line[j];
				j++;
			}
			line[j-1] = line[j];
		}else{
			i++;
		}
	}
	if (line[i-1]==S)
		line[i-1]='\0';

	return line;
}
