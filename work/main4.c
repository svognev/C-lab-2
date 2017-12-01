//
//  main.c
//  example_string_change
//
//  Created by Ksenia on 28.11.2017.
//  Copyright © 2017 Ksenia. All rights reserved.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "task4.h"



int main(void)
{
    unsigned char size=0xff;
    char line[size];
  
 char *x = "123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";//line of numbers and letters

    
    printf ( "Initial string: %s\n", x );
    printf ( "New string:  %s\n", process(line) );
    
    return 0;
}
