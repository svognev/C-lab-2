/*
 * main7.c
 *
 *  Created on: 16 нояб. 2017 г.
 *      Author: michael
 */
#include <stdio.h>


int main(){
	char line[128];
	int count[128] = {0};
	int i = 0;
	printf("Enter your line : ");
	fgets(line, 128, stdin);

	while (line[i]){
		count[line[i]]++;
		i++;
	}

	for (int j=33; j<127; j++){
		printf("%c - %d\n",j,count[j]);
	}

	return 0;
}
