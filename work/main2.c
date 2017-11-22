#include<stdio.h>
#include<time.h>
#include"task2.h"

#define N 100

int main()
{
	int value, secret,i,rez;
	int count;
	srand(time(0));

	secret = rand() % N;
	//printf("You number - %d \n", secret);
	printf("Enter number \n");
	
	for (i = 0; i < 7; i++)
	{
		rez = 0;
		scanf("%d", &value);
		rez = turn(value, secret);
		if (rez == 1)
			printf("Your number is more, try again \n");
		if (rez == -1)
			printf("Your number is less, try again\n");
		if (rez == 0)
		{
			printf("Your guessed - %d \n",value);
			break;
		}		
	}
	if(i==7)
	printf("Sorry, but attempts ended \n");
	
	return 0;
}
