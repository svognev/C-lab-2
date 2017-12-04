int turn(int value, int secret)
{
	int ret;

	if (value > secret)
		ret = 1;
	else if (value < secret)
		ret = -1;
	else if (value = secret)
		ret = 0;

	return ret;
}
