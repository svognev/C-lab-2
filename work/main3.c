/* */
#include <stdio.h>
#include <stdlib.h>
#include "task3.h"
#define SIZE3 100

int main() 
{
    char buf[SIZE3] = { 0 };
    int line=0, count = 0;
	
    printf("Enter number of lines\n");
    scanf("%d", &count);


    for (line = 1; line <= count; line++)
	puts(layout(buf, line, count));
    
    return 0;
}

