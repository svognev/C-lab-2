//
//  main.c
//  parol_generate
//
//  Created by Ksenia on 16.11.2017.
//  Copyright © 2017 Ksenia. All rights reserved.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"


  int main()
{
    char line = '\0';
    srand((unsigned int)(time(NULL)));

  // char buf[SIZE]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
   
    password(&line);

    return 0;
 

}
