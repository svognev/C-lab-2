/*
 * main1.c
 *
 *  Created on: 14 нояб. 2017 г.
 *      Author: michael
 */
#include <stdio.h>
#include <time.h>

#include "../src/task1.h"
ask1.h"


int main(){
	int start_height;
	int current_time = 0;
	float current_height;
	clock_t now;

	printf("Enter start height: ");
	scanf("%d", &start_height);

	current_height = start_height;
	while (current_height > 0){
		printf("t=%02d c h=%.1f м\n",current_time, current_height);
		current_time++;
		current_height = height(current_time,start_height);
		now = clock();
		while (clock() < now + CLOCKS_PER_SEC);
	}
	printf("BAM!");
	return 0;
}
