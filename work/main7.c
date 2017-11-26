#define _CRT_SECURE_NO_WARNINGS
#define SIZE 300//max input number letter
#include<stdio.h>
#include<string.h>
#define N 256// only for unsigned
int main()
{
	int short i = 0;// the count symbol
	int count[N] = {0};
	char line[SIZE] = { " " };
	printf("Enter string(only small letter) from calculation the letter :\n");
	fgets(line, SIZE, stdin);//record etters in array line
	while (line[i] != '\n')// count the symbol from input '\0'
	{
		i++;
	}
	
	line[i] = '\0';//input '\0' instead '\n'
	i = 0;

	while (line[i])//make count while not '\0'
	{
		count[line[i++]]++;//record in serial number array +1 if you find this the symbol
		
	}
	for (i = 0;i < N;i++)
	{
		
		if (count[i] > 0)
			printf("%c-%d\n", i , count[i]);// 2 array - first: serial symbol second:their quantity
	}



	return 0;
}

