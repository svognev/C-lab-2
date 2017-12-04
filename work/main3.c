#include<stdio.h>
#include<time.h>
#include"task3.h"

#define N 100

int main()
{
	int h, line;
	char buf[N] = {0};
	
	printf("Enter height \n");
	scanf("%d", &h);

	for (int line = 1; line<=h; line++)
	{
		printf("%s\n", layout(buf, line, h));
	}
	
	return 0;
}
