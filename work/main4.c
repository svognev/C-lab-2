#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task4.h"
#define SIZE 8


int main() {
    
    
    unsigned char size=0xff;
    char line[size];
    
    char *x = "123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";//line of numbers and letters
    
    
    printf ( "Initial string: %s\n", x );
    printf ( "New string:  %s\n", process(line) );
    
    return 0;
    
    
}

