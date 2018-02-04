#include <stdio.h> 
 #include "task3.h"


 char *layout(char buf[], int line, int count)
 {
			 int i;
	
		     for (i=0; i < (count-line); i++)
				 buf[i] = ' ';
		
		     for (i =(count-line); i <(count+line-1); i++)
				 buf[i] = '*';
				 buf[i + 1] = '\0';
		
	     return buf;
 }
