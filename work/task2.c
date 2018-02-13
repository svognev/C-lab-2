int turn(int value, int secret)//проверка числа, введенного пользователем. 

{
	if (value > secret)
		return 1;
	else if (value < secret)
		return -1;
	else //(value = secret)
		return 0;
}
