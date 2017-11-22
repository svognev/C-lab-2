/*ѕрограмма, имитирующа€ работу высотомера бомбы. Ѕомба 
   падает с высоты H, котора€ задаетс€ пользователем. ¬ любой
   момент времени можно узнать пройденное рассто€ние по формуле
   L = gt^2/2, где g = 9.81 m/c
   ¬ысотомер бомбы срабатывает раз в секунду и выводит на терминал
   текущее значение высоты над поверхностью земли h.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "task1.h"

int main()
{
	float startHeight = -1.0f; //начальна€ высота
	int currTime = 0; //текуща€ секунда времени, дл€ которой ведЄтс€ расчЄт
	clock_t now;

	printf("Enter the starting height: \n");
	scanf("%f", &startHeight);
	printf("\n");

	if (startHeight <= 0)
	{
		printf("Enter the correct value of the starting height!");
		return 1;
	}
	else
	{
		while ((height(currTime, startHeight)) > 0)
		{
			printf("t = %02d s.\t""h = %06.1f m. \n", currTime, height(currTime, startHeight));
			currTime++;
			now = clock();
			while (clock() <= now + CLOCKS_PER_SEC)
				;
		}
		printf("BABAH!!! \n\n");
		return 0;
	}
}