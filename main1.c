//
//  main.c
//  lab2_1
//
//  Created by Ksenia on 19.11.2017.
//  Copyright © 2017 Ksenia. All rights reserved.
//

#include <stdio.h>
#include <time.h>

#include "task1.h"


int main()
{
    int startHeight;
    int currTime;
    currTime=0;

    printf("Input height above the ground (m): ");
    scanf("%d",&startHeight);
    
     height(currTime, startHeight);
    
    return 0;
}

