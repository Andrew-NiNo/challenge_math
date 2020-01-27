// Задача M - 13 Номер дня в году
// Заданы три числа, которые обозначают число, месяц, год. Найти порядковый номер даты, начиная отсчет с начала года


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 15

  int months[12] = {31,59,90,120,151,181,212,243,273,304,334};

  int main(void) {
	  
	char *str[MAX] = {0};
	char *ptr = str;
	int array[4] = {0};
	int *arr_ptr = array;
	int res = 0;
	int j = 0;
	
	printf("\n Enter your three numbers:  \n\n");				
	 	 
	fgets(str, MAX, stdin);									//Вводим строку в массив

	while (*ptr) { 
	
		if (array[j++] = (int)strtol(ptr, &ptr, 10)) {		//Пока значение массива не 0, определяем в нем числа и передаем в массив array
		}
		
		else  ptr++;
	}
	
	int c = *(arr_ptr+1);									//Присваиваем переменной с значение месяца
	
	res =  months[c - 2] + *(arr_ptr); 						//Через массив months вычисляем значение дня в году
	
	if (abs((1968 - *(arr_ptr+2)) % 4) == 0 && c > 2) {		//Делаем поправку на високосные года
		
	res++;
	}
	
	printf ("\n	Day ordinal of the year - %d ", res );		// Выводим результат
	  
	return 0;
  }