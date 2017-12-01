//
//  main.c
//  lab2_3_2
//
//  Created by Ksenia on 22.11.2017.
//  Copyright © 2017 Ksenia. All rights reserved.
//

#include <stdio.h>
#include "task3.h"



int main()
{
    int count, line;
    char buf[1000];
    
   printf("Input count of lines: \n");
   scanf("%d", &count);

    layout(buf, line, count);
  
    return 0;
}

