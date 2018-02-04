#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "task6.h"
#define SIZE 200


char * clear(char * line)
{
    
    int i=0, j = 0;
    
    
    
    for(i=0; i<strlen(line);i++)
    {
        if(line[i]==' ')
        {
            if(j==0)
                continue;
            if(line[i+1]==' ')
                continue;
        }
        line[j]=line[i];
        j++;
    }
    
    if(line[j-1]==' ')
        j--;
    line[j]='\0';
    
   // printf("\nNew string: %s", line);
    return line;
    
    
}

