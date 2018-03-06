/*  */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task2.h"

int main() 
{
    int value, secret;
    srand (time (NULL));
    secret = rand() % 100 + 1;
    
    printf ("Enter number (1 - 100): ");
    scanf ("%d", &value);
    
    while (value != EOF)
    {
        if (turn(value, secret) == 1)
        {
            printf ("Viberi chislo menshe");
            //break;
        }
        else if (turn(value, secret) == -1)
        {
            printf ("Viberi chislo bolshe");
            //break;
        }
        else
        {
            printf ("\nUgadal !!!");
            break;
        }
        
        printf ("\nEnter number (1 - 100): ");
        scanf ("%d", &value);
    }
    
    
    
    return 0;
}

