
#include <time.h>
#include <stdio.h>
#include <math.h>
#include "task1.h" 
#define g 9.81

 float height(int currTime, int startHeight)
 {
	    
		 return (float)((startHeight)-((float)g*(pow(currTime,2))) / 2);

}
	
