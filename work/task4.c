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
    char *first, *last;
    char *x = "123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
  strcpy (line, x);
    line[ strlen (x) ] = '\0';
    first = line;
    last = &line[strlen(x) - 1];
    
   
    while ( *first != *last )
    {
   
          while( isdigit( *first ) )
            {
                char t = *first;
                *first = *last;
                *last = t;
                --last;
            
                while(isalpha(*last))
                {
                    char t=*last;
                    *last=*first;
                    *first=t;
                    ++first;
                }
           }
      break;
        
    }
   
    return line;
    
}
