#define g 9.81

float height(int currTime, int startHeight)
{
	float currHeight = 0;
	
	currHeight = startHeight - ((g*(currTime*currTime)) / 2);

	return currHeight;
}
