/*
 * main3.c
 *
 *  Created on: 14 нояб. 2017 г.
 *      Author: michael
 */
#include <stdio.h>
#include "task3.h"

int main(){
	char str[32];
	int lines;
	int count;

	printf("Enter string count: ");
	scanf("%d", &lines);
	count = lines;

	for (int i = 1; i <= lines; i++){
		//printf("%s\n",str);
		printf("%s\n", layout(str,i,count));
	}

	return 0;
}
