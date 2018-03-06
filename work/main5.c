#include <stdio.h>
#include <stdlib.h>
#include "task5.h"
#define SIZE5 9

int main() 
{
    int i = 0;
    char line [SIZE5] = { 0 };
    
    while (i < SIZE5 - 1)
	line[i++] = ' ';
	
    for (i = 0; i <= 10; i++)
	puts(password(line));
    
    return 0;
}

