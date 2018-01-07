
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task4.h"
#define N 30

int main() {
	srand((unsigned int)(time(0)));

	int i;

	char line[N] = { 0 };

	 char x[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	for (i = 0; i < N-1; i++)
	{

		line[i] = x[rand() % (sizeof x - 1)];
	}

    printf ( "Initial string: %s\n", line);
    printf ( "New string:  %s\n", process(line) );
    
    return 0;
    
    
}

