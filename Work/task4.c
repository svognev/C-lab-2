#define SIZE 50
#include<stdio.h>
#include <string.h> // Äëÿ strlen

char* process(char* line)
{
	int j = 0, score = 0, count = 0, beginLeft = 0, endRight = 0, lenStr = 0, countRight = 0;
	char left = ' ', right = ' ';//side of string
	endRight = strlen(line);// looking lenght string
	beginLeft = -1;
	do {
		do
		{
			beginLeft++;
			if (beginLeft > endRight)// check of the meet the left and the right of the counter 
				break;
			left = line[beginLeft];
		} while ( ( 'A'-1) < left && left < (1+'Z'));// check if symbol is capital letter

		do {
			endRight--;
			if (beginLeft > endRight)//// check of the meet the left and the right of the counter 
				break;
			right = line[(endRight)];
		} while (('0'-1) < right && right < ('9'+1));//check if symbol is number
		if (beginLeft < endRight)//check if right counter > left counter then:
		{
			line[beginLeft] = right;//if condition is true then left number chenge on right sidecletter
			line[(endRight)] = left;//if condition is true then right letter chenge on left side number

		}
		else
			break;
	} while (beginLeft < endRight);// condition is true if the right side counter  >the left side counter
	return line;
}

