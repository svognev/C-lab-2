//
//  task4.c
//  example_string_change
//
//  Created by Ksenia on 30.11.2017.
//  Copyright © 2017 Ksenia. All rights reserved.
//

#include "task4.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>


char* process(char* line)
{
    char *first_one, *last_one;
    char *x = "123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
  //  strncmp(line, x,2);
   strcpy (line, x);
    line[ strlen (x) ] = '\0';
    first_one = line;
    last_one = &line[strlen(x) - 1];
    
    while ( first_one != last_one )
    {
        for (x="0";x<="9";x++)
            
        {
            if ( isdigit( *first_one ) )
            {
                char t = *first_one;
                *first_one = *last_one;
                *last_one = t;
                --last_one;
            }
            else
                ++first_one;
        }
    }
    return line;
    
}

