/*
 * main.c
 *
 *  Created on: 14 нояб. 2017 г.
 *      Author: michael
 */
#include <stdio.h>
#include "task5.h"


int main(){

	char str[9];
	str[8] = '\0';
	for (int i = 0; i < 10; i++){
		printf("%s\n", password(str));
	}
	return 0;
}
