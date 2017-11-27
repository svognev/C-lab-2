#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int value = 0;
	int secret;

	srand(time(0));
	secret = rand() % 100 + 1;

	printf("Guess a number from (0 to 100): \n");

	while (turn(value, secret) != 0)
	{
		scanf("%d", &value);
			
		if (turn(value, secret) == 1)
			printf("Guess was too high, try again. \n");
		else if (turn(value, secret) == -1)
			printf("Guess was too low, try again\n");
	}
	printf("Your Guess was correct! The number is %d \n", secret);

	return 0;
}