/*  */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task1.h"

int main() 
{
    clock_t now;
    int startHeight = 0;
    int currTime = 0;
    float h = 0;
        
    printf("Enter Height: ");
    scanf("%d", &startHeight);
	
    for (;;)
    {
	h = height(currTime, startHeight);
        
	if (h < 0)
	{
            puts("\nBABAH!!!");
            break;
	}
		
        printf("t = %dc  ", currTime);
	printf("%8.1f m\n", h);
        
	currTime++;
	now = clock();
        
	while (clock() < now + CLOCKS_PER_SEC);
    }
    
    return 0;
}

