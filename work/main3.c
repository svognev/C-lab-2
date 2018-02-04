#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include "task3.h"


 int main()
 {
	 int count = 0;
	 int line=1;
		 char buf[200] = { 0 };
	
		    printf("Input count of lines: \n");
      scanf("%d", &count);
	
	  for (line; line <= count; line++)
		  printf("%s\n", layout(buf, line, count));



	//  printf("\n");
	     return 0;
 }
