//
//  task1.c
//  lab2_1
//
//  Created by Ksenia on 19.11.2017.
//  Copyright © 2017 Ksenia. All rights reserved.
//

#include "task1.h"
#define g 9.81
#include <unistd.h>
#include <stdio.h>

float height(int currTime,int startHeight)
{
    float h;
    currTime=0;
    h=0;
    
    
    while (1)
    {
       h=(startHeight) - (g*(currTime*currTime)/2);
        
        if(h>0)
        {
            printf("\nt=%02d c h=%06.1f m", currTime, h);
            sleep(1);
            currTime++;
        }
        
        if (h<0)
        {
            printf("\nGO OFF!!!\n");
            return 0;
        }
    }
    
    return 0;
    
}
