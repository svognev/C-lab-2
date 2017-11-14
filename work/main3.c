/*
 * main3.c
 *
 *  Created on: 14 нояб. 2017 г.
 *      Author: michael
 */
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include "task3.h"

int main(){
	char* str;
	int lines;
	int count;

	printf("Enter string count: ");
	scanf("%d", &lines);

	for (int i = 0; i < lines; i++){
		count = (lines*2)+(2*i);
		str = (char*) malloc(count*sizeof(char));
		for (int i=0; i < count;i++){
			str[i] = ' ';
		}
		str[count-1] = '\0';
		printf("%s\n", layout(str,i+1));
	}

	return 0;
}
