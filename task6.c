//
//  task6.c
//  lab_2_
//
//  Created by Ksenia on 20.11.2017.
//  Copyright © 2017 Ksenia. All rights reserved.
//


#include <string.h>
#include <stdio.h>
#include "task6.h"



char* clear(char* line)
{
        int j = 0, space = 0;
        
        for (int i=0; line[i]; ++i) {
            space = (line[i] == ' ') ? space + 1 : 0;
            if (space < 2) {
                line[j++] = line[i];
            }
        }
        line[j] = 0;
        
        return line;
    }
    
 
