#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<time.h>

#define STR 100
#define CH 123

int main()
{
	char buf[STR];
	int count[CH] = { '\0' };
	int len;

	printf("Enter string \n");
	fgets(buf, STR, stdin);
	len = strlen(buf);
	buf[len - 1] = '\0';
	
	for (int i = 0; buf[i]; i++)
		count[buf[i]-' ']++;

	for (int j = 0; j < CH; j++)
		if (count[j] > 0)
			printf("%c - %d\n", j+' ', count[j]);

	return 0;
}
