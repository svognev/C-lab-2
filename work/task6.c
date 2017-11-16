/*
 * task6.c
 *
 *  Created on: 15 нояб. 2017 г.
 *      Author: michael
 */


char* clear(char* line){
	int i = 0;
	int count = 0;
	while (line[i]){
		if ((line[i] == ' ' && line[i+1] == ' ') || count==0){
			if (line[i+1]!=' ')
				count++;

			int j = i+1;
			while (line[j]){
				line[j-1] = line[j];
				j++;
			}
			line[j-1] = line[j];
		}else{
			count++;
			i++;
		}
	}
	return line;
}
