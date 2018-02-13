float height(int currTime, int startHeight) //расчет высоты над землей в секунду currTime
{
	 return startHeight - 9.81f*(currTime * currTime) / 2;
	
}