#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"task3.h"
#define SIZE 200
int main()
{
	int i, line = 0, weight = 0, height;
	int weightGap;
	char buf[SIZE] = { " " };
	char gap[] = { " " };
	printf("enter the height of the triangle  :");
	scanf("%i", &height);
	weight=height+height-1;// weigt the triangle egual two height minus one
	weightGap=height;// max gap equal height

		for (line=0;line<weight;line=line+2)
		{
			weightGap --;
				for (i=weightGap;i>0 ;i--)// ferst gap equal height minus one
				{
					printf("%s", gap);
				}
			printf("%s", layout(buf, line));
			printf("\n");
		}

	return 0;
}