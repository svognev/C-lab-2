#include <stdio.h> 
#include "task5.h" 
#include <time.h> 

char line[10];
int j = 0;

int main()
{
	srand(time(0));

	for(j = 0;j <10; j++)
	{
		printf("%s\n", password(line));
	}
	return 0;
}