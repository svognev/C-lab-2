//
//  task2.c
//  Lab2_2
//
//  Created by Ksenia on 21.11.2017.
//  Copyright © 2017 Ksenia. All rights reserved.
//

#include "task2.h"
#include <stdio.h>



int turn(int value, int secret)
{
    do
    {
        printf("Guess the number (from 0 to 100): \n");
        scanf("%2d", &value);
        
        if(value<secret)
      {
            printf("Secret number more than this one.\n");
            return 1;
       }
        if (value>secret)
     {
            printf("Secret number less than this one.\n");
             return -1;
     }
       
       else
       {
           printf("Is it! You guess the number!\n");
         return 0;
       }
      
    }
    while (value != secret);
    
}
