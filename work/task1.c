/*
 * task1.c
 *
 *  Created on: 14 нояб. 2017 г.
 *      Author: michael
 */


float height(int currTime,int startHeight){
	return startHeight - currTime*currTime*9.81/2;
}
