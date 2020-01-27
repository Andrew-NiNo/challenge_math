// Задача M - 12
// Найти числа, отклоняющиеся от среднего значения
// Найти элементы массива, которые сильно отклоняются от среднего значения (элементов массива).
//
// "Отклонение" будет вычисляться как процент разности между элементом и средним значением к среднему значению. 
// Например, если очередной элемент равен 10, а среднее значение массива равно 5, то (10-5)/5 = 1 (100%).
// Т.е. значение элемента превышает среднее значение на 100%.
//
// Пусть в данной задаче ищутся элементы, разница со средним значением которых превышает n%.


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 500


 float mean (long *s, int count) {				//Функция mean возвращает среднее арифметическое значение массива
	 
	float medium = 0;
	float sum = 0;
	 
	for (int i = 0; i < count; ) { 								
		
		 sum += s[i++];
	}
		medium = sum / count;
		
  return medium;	
 }	

 int main(void) {

	char *str[MAX] = {0};
	long array[MAX] = {0};
	char *ptr = str;
	int j = 0;
	float m, k;
	float deviation = 0;
	
	
	printf("\n Vvedite znacheniy massiva \n\n");				
	 	 
	fgets(str, MAX, stdin);								//Вводим значения массива

	printf("\n Vvedite znachenie poroga v \%\%\n\n");
	
	scanf("%f", &k);									//Вводим порог отклонения от среднего значения					
	

	while (*ptr) { 
	
		if (array[j++] = strtol(ptr, &ptr, 10)) {		//Пока значение массива str не 0, определяем в нем числа и передаем в массив array
			
		}												
		else  ptr++;
	}
		 array[j] = '\0';
		 
		 j--;											//Ставим количество элементов в массиве истинным 

	m = mean (array, j);								//Получаем среднее значение массива
	
	printf("\n  Srednee znachenie %.2f\n\n", m);

	for (int i = 0; i < j; i++) {						//В цикле проверяем каждый элемент массива на отклонение и выводим таковой на печать.

			deviation = ((float)fabs(array[i] - m) / m) * 100; 
			
			deviation > k ? printf("\n	Znachenie %ld elementa massiva %d vyshe poroga i sostavlyaet %.0f \%\%\n", array[i], i, deviation): 0;
	}
		 
 return 0;
 }