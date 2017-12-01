//
//  task3.c
//  lab2_3_2
//
//  Created by Ksenia on 23.11.2017.
//  Copyright © 2017 Ksenia. All rights reserved.
//

#include <stdio.h>
#include "task3.h"

char *layout(char buf[],int line, int count)
{
 
 
    int j;
   
      for (line=1; line <= count; line++)
     {
     
    
    for (j=line; j <= count; j++)
    {
     
      printf(" ");
    }
    for (j=1; j <= 2*line-1; j++)
    {
       
     printf("*");
    }
        
   printf("\n");
     }
    return buf;
}
