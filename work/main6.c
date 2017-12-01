
//  main6.c
//  lab_2
//
//  Created by Ksenia on 20.11.2017.
//  Copyright © 2017 Ksenia. All rights reserved.
//

#include  <stdio.h>
#include <string.h>
#include "task6.h"
#define SIZE 256


int main()
{
   
    char str[SIZE];
    char line[SIZE];
   
    
    printf("Enter a string: \n");
    fgets (str, sizeof(str), stdin);
    
    printf("New string:%s\n", clear(line));
    return 0;
}
           
