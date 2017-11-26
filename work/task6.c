char* clear(char* line)
{
	int i, j, k, spBegCond, spEndCond;
	i = j = k = spBegCond = spEndCond = 0;

	while (line[i])
	{
		if (line[i] == ' ')
		{
			j = i;
			while (line[j] == ' ')
				j++;

			spBegCond = (i == 0) ? 1 : 0;
			spEndCond = (line[j] == '\0') ? 1 : 0;

			if (spEndCond)
			{
				line[i] = '\0';
				break;
			}
			else if (spBegCond || (j != i + 1))
			{
				k = 0;
				do
				{
					if (spBegCond)
						line[i + k] = line[j + k];
					else
						line[i + k + 1] = line[j + k];
					k++;
				} while (line[j + k]);

				if (spBegCond)
					line[i + k] = '\0';
				else
					line[i + k + 1] = '\0';
			}
		}
		i++;
	}

	return line;
}