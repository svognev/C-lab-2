#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task6.h"

int main() 
{
    char line[256];

    printf("Enter string:\n");
    fgets(line, 256, stdin);
    line [strlen(line) - 1] = '\0';

    printf("Clear string: > %s\n", clear(line));

    return 0;
}

