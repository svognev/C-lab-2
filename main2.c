//
//  main.c
//  Lab2_2
//
//  Created by Ksenia on 21.11.2017.
//  Copyright © 2017 Ksenia. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task2.h"


int main() {
    int value=0, secret;
    srand((unsigned)time(0));
    
    secret = rand() % 100 + 0;
    printf("hint: %d\n", secret);
    
    
   printf("%d\n", (turn(value, secret)));

   // return 0;
}
    

