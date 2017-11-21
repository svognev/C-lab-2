#include "task1.h"
#define G 9.81

float height(int currTime, int startHeight)
{
	float L = (G * currTime*currTime) / 2; // пройденное расстояние за время currTime
	float h = startHeight - L;  //текущее значение высоты
	return h;
}