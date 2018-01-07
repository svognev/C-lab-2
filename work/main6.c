#include <stdio.h>
#include <string.h>
#include "task6.h"

#define SIZE 200

int main()
{
    
    char line[SIZE];
    
    printf("Enter a string: \n");
    fgets (line, SIZE, stdin);
    
    printf("Cleared string: %s\n", clear(line));
    return 0;
}


