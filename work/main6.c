/*
 * main6.c
 *
 *  Created on: 15 нояб. 2017 г.
 *      Author: michael
 */
#include <stdio.h>
#include <stdlib.h>
#include "task6.h"

int main(){
	char str[128];
	printf("Enter your line :\n");
	fgets(str, 128, stdin);
	printf("Your clean line :\n%s", clear(str));
	return 0;
}
