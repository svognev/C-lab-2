#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
 #include <time.h>
 #include "task1.h"


int main()
{
	clock_t now;
	     int startHeight;
	     int currTime=0;
		 printf("Input height above the ground (m): ");
	     scanf("%d", &startHeight);

		 while (1)
		 {

			 if (height(currTime,startHeight) > 0)
			 {
				 printf("\nt=%02d c h=%0.1f m", currTime, height(currTime, startHeight));
				 //   sleep(1);
				 currTime++;
				 now = clock();
				 while (clock() < now + 500);
			
			 }

			 if (height(currTime,startHeight) < 0)
			 {
				 printf("\nGO OFF!!!\n");
				 return 0;
			 }
		 }

		 
	
		     return 0;
	 }
