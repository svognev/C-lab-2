/*
 * main2.c
 *
 *  Created on: 14 нояб. 2017 г.
 *      Author: michael
 */
#include <stdio.h>
#include <time.h>
#include "task2.h"

int main(){
	int secret;
	int value;

	srand(time(0));
	secret = rand()%100;

	do {
		printf("Guess my number: ");
		scanf("%d", &value);

		switch (turn(value, secret)){
			case 1:
				printf("My number is less\n");
				break;
			case -1:
				printf("My number is more\n");
				break;
			case 0:
				printf("Yes, you are right !");
				break;
		}
	} while (turn(value, secret));

	return 0;
}
