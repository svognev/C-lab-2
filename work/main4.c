/*
 * main.c
 *
 *  Created on: 14 нояб. 2017 г.
 *      Author: michael
 */
#include <stdio.h>
#include <time.h>
#include "task4.h"


int main(){
	srand(time(0));
	int index;
	int arr[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99,
			   100, 101, 102, 103, 104, 105, 106, 107, 108, 109,
			   110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};

	char str[11];
	str[10] = '\0';
	for (int i = 0; i < 10; i++){
		index = rand()%35;
		str[i] = arr[index];
	}

	printf("%s\n", str);
	printf("%s", process(str));

	return 0;
}
