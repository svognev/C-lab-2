#define _CRT_SECURE_NO_WARNINGS
 #include<stdio.h>
 #define GAP ' '
 #define SIZE 300
 char *clear(char *line)
 {
	int i, j;
	int short len = 0; // count len
	char check1, check2, check3;
	while (line[len] != '\0')// count string
		 {
		len++;
		}
	--len;
	for (i = 0;line[i - 1] != '\0';i = i + 1)
		 {
		check1 = line[i];//search gap
		check2 = line[++i];//search gap
				//conditions: if first gap, if  gap together , if 1 gap and end string 
			if ((check1 == GAP && i == 1) || (check1 == GAP && check2 == GAP) || (check2 == '\0' && check1 == GAP))// (line[(i + 1)] == '\0' && check1 == GAP))
			 {
			j = i;
			while (line[j] != '\0')
				 {
				line[j - 1] = line[j];// change symbol on following
				j++;
				line;
				}
			line[j - 1] = '\0';//chang last symbol on '\0'
			len--;
			i = i - 1;
			}
		i--;
		}
	return line;
	}

/*Задача №6
 +
 +   Написать программу, очищающую строку от лишних пробелов. Лишними счи-
 +   таются пробелы в начале строки, в конце строки и пробелы между словами,
 +   если их количество больше 1.
 +Пояснение
 +
 +В данной программе запрещёно создавать дополнительные массивы, то есть необходимо стремиться к экономии памяти. Время выполнения программы значения не имеет.
 +
 +Состав
 +
 +Программа должна состоять из двух функций:
 +
 +char * clear(char * line) - очистка строки line.
 +main() - организация диалога.*/ /*Задача №6

   Написать программу, очищающую строку от лишних пробелов. Лишними счи-
   таются пробелы в начале строки, в конце строки и пробелы между словами,
   если их количество больше 1.
Пояснение

В данной программе запрещёно создавать дополнительные массивы, то есть необходимо стремиться к экономии памяти. Время выполнения программы значения не имеет.

Состав

Программа должна состоять из двух функций:

char * clear(char * line) - очистка строки line.
main() - организация диалога.*/