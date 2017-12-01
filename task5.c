//
//  task.c
//  parol_generate
//
//  Created by Ksenia on 16.11.2017.
//  Copyright © 2017 Ksenia. All rights reserved.
//
#include <stdio.h>
 #include "task5.h"
#include <time.h>
#include<stdlib.h>
#define SIZE 512

char* password(char* line)

{
    int j,i;
    char buf[SIZE]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    srand(((unsigned int) time(NULL)));
    
    
    for(j=0;j<10;j++)//qantity of passwords
    {
        for(i=0;i<8;++i)//lenght of password
        {
            printf("%c", buf[rand()%(62)]);
        }
        puts(" \n");
        
    }
    return 0;
    
}

    
    




