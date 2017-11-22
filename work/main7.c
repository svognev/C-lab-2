#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>

#define N 100

int main()
{
	int i, j, k;
	char buf[N];
	int count[26] = { 0 };
	
	srand(time(0));

	printf("Enter string \n");
	gets(buf);

	for (j = 0; buf[j]; j++)
		count[buf[j] - 'a']++;

	for (j = 0; j < 26; j++)
		if (count[j] > 0)
			printf("%c - %d\n", j + 'a', count[j]);

	return 0;
}
