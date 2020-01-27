// Задача M - 11
// При заданных координатах A1, A2, ..., An одной точки и координатах B1, B2, ..., Bn другой точки n-мерного пространства. 
//Найти расстояние между ними по формуле sqrt(sqr(A1-B1) + ... + sqr(An-Bn)).


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 500

 int main(void) {

	char *str_1[MAX] = {0};
	char *str_2[MAX] = {0};
	long array_1[MAX] = {0};
    long array_2[MAX] = {0};
	char *ptr_1 = str_1;
	char *ptr_2 = str_2;
	int j = 0;
	int	i = 0;
	int k;
	double sum = 0;
	double res = 0;
	
	printf("\n Vvedite koordinaty A \n\n");				
	 	 
	fgets(str_1, MAX, stdin);								//Вводим значения коордиинат А
	
	printf("\n Vvedite koordinaty B \n\n");
	
	fgets(str_2, MAX, stdin);								//Вводим значения коордиинат В

	printf("\n Vvedite znachenie prostranstv \n\n");
	
	scanf("%d", &k);										//Вводим количеств пространств					
	

	while (*ptr_1) { 
	
		if (array_1[j++] = strtol(ptr_1, &ptr_1, 10)) {		//Пока значение массива str_1 не 0, определяем в нем числа и передаем в массив array_1
			
		}												
		else  ptr_1++;
	}
		 array_1[j] = '\0';
		 
	while (*ptr_2) { 
	
		if (array_2[i++] = strtol(ptr_2, &ptr_2, 10)) {		//Пока значение массива str_2 не 0, определяем в нем числа и передаем в массив array_2
			
		}												
		else  ptr_2++;
	}
		 array_2[i] = '\0';
		 
	for (i = 0, j = 0; k > 0; k--) { 						//Проходим по массиву сохраняя сумму разности квадратов значений массивов в res
	
		sum = sqrt(fabs(array_1[i] - array_2[j])); i++; j++;  //Выводим значение разности по модулю числа
		
		res += sum; 
	}
	
		res = sqrt(res);									//Определяем итоговый res через извлечение квадрата 

      printf("\n   %.2lf ", res);							//Выводим итог на печать
	 
 return 0;
 } 
	 
	
