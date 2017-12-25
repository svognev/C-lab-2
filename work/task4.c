
#include "task4.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>


char* process(char* line)
{
    char *first_one, *last_one;
    char x[] = "123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i=0;
    i=x[i];
    
    strcpy (line, x);
    line[ strlen (x) ] = '\0';
    first_one = line;
    last_one = &line[strlen(x) - 1];
    
    while ( first_one != last_one )
    {
        for (i=0;i<=9;i++)
            
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
