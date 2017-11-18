
int turn(int value, int secret)//the function check true of entered the value
{				            	/* return '0' to main if user true entered the number ,
								 return '1'to main if user entered the number >number of secret,
								 return '-1 'to main if user entered the number < number of secret
								*/
	int result=0;

	if (value > secret)//check what is biger
		result = 1;
	else              //check what is biger
	    result = -1;
	
	if (value==secret)
      result= 0;
	
return result;
}

