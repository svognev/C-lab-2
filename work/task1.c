float height(int currTime, int startHeight)
{
	return ((float)startHeight - 9.81 * (float)currTime * (float)currTime / 2);
}