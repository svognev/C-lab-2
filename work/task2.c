/*
 * task2.c
 *
 *  Created on: 14 нояб. 2017 г.
 *      Author: michael
 */


int turn(int value, int secret){
	if (value > secret)
		return 1;
	else if (value < secret)
		return -1;
	else
		return 0;
}
