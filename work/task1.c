float height(int currTime, int startHeight) //������ ������ ��� ������ � ������� currTime
{
	 return startHeight - 9.81f*(currTime * currTime) / 2;
	
}