float height(int currTime, int startHeight)
{
	float heightTrav = 9.81f * (float)(currTime * currTime) / 2.0f;
	if (heightTrav <= (float)startHeight)
		return (float)startHeight - heightTrav;
	else
		return 0.0f;
}