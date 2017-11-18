#define	NUMBERPASSWORD 10
#define SIZE 8
//#define BUF 8
#include<stdio.h>
#include "task5.h"

int main()
{
		int i = 0;
		char line=SIZE;
	printf("The programm wil be make for you 10 password:\n");
	for (i = 0;i < NUMBERPASSWORD;i++)
	{
		printf("%s\n", password(line));	
	}
	return 0;
}
