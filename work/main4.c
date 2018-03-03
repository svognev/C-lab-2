
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task4.h"
#define SIZE4 100

int main() 
{
    int i = 0;
    srand (time (NULL));
    char line[SIZE4] = { 0 };
    
    for (i = 0; i < SIZE4 - 1; i++)
    {
	if (rand() % 3 == 0)
            line[i] = rand() % ('Z' - 'A' + 1) + 'A';
	else if (rand() % 3 == 1)
            line[i] = rand() % ('z' - 'a' + 1) + 'a';
	else 
            line[i] = rand() % ('9' - '0' + 1) + '0';
    }
    
    puts(line);
    puts(process(line));

    return 0;
}

