#include <stdio.h>
char *process(char *line)
{ 
	int begin = 0, end = 0;
	char buffer = 0; // переменная для записи буферного значения

	for (; line[begin] != '\0'; begin++, end++); // определяем размер строки
	--end; // смещаемся с символа \0
	
	begin = 0;

	while (begin < end) // из-за begin++ и end-- последняя итерация будет (begin > end)

	{
		for (; ((line[begin] >= 'a') && (line[begin] <= 'z')); begin++);
		if (begin > end) // для избежания записи в buffer когда (begin > end)
			break;
		buffer = line[begin];
		
		for (; ((line[end] >= '0') && (line[end] <= '9')); end--);
		if (end < begin) // для избежания записи в buffer когда (begin > end)
			break;
		line[begin] = line[end];
		line[end] = buffer;
		continue;
	}

	return line;
}
