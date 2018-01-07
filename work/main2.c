#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
 #include <stdlib.h>
 #include <time.h>
 #include "task2.h"




 int main() {
	    int value = 0, secret;
	     srand((unsigned)time(0));
	
		     secret = rand() % 100 + 0;
	     printf("hint: %d\n", secret);

		 printf("Guess the number (from 0 to 99): \n");
	
		 do
		 {
			
			 scanf("%2d", &value);

			  if (turn(value,secret)==1)
			 {
				 printf("Secret number more than this one. Try again.\n");
				 
			 }
			  else if (turn(value,secret)==-1)
			 {
				 printf("Secret number less than this one.Try again.\n");
				
			 }

			 else if(turn(value,secret)==0)
			 {
				 printf("Is it! You guess the number!\n");
				
			 }

		 } while (value != secret);


		  //  printf("%d\n", (turn(value, secret)));
	

		     return 0; 
		
}
