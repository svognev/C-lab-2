#include<stdint.h>
float height(int currTime, int startHeight)
{
	//thr formula from height : L = gt ^ 2 / 2, где g = 9.81 m / c
	float g = 9.81, h=0;

	h = startHeight -( (g*currTime*currTime) / 2);//calculate the distance for the falling Bomb

	return h;
}

