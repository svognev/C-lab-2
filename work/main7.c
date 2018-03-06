#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define SIZE7 100
#define N7 256

int main() 
{
    int i = 0;
    char line[SIZE7] = { 0 };
    char count[N7] = { 0 };
    
    printf("Enter a string:\n");
    fgets(line, SIZE7, stdin);

    while (line[i] != '\n')
    {
        count[line[i]]++;
        i++;
    }
    
    for (i = 0; i < 256; i++)
    {
	if (count[i] != 0)
	printf("%c - %d\n", i, count[i]);
    }

    return 0;
}

