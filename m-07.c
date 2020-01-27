// Задача M - 07
// Найти Среднее арифметическое положительных элементов массива
//Пример: 11,-894,86,-84,-89,5,8,97,98,54,84,-9,5,41,-894

#include <stdio.h>
#include <stdlib.h>

#define MAX 500

int my_mean (long *s, int count) {				//Функция my_mean возвращает среднее арифметическое значение массива 
	 
	int j = 0;
 
	int medium = 0;
	 
	int sum = 0;
	 
	for (int i = 0; i < count; i++) { 								
		
		 sum += s[j++];
		
	}
		medium = sum / count;
		
 return medium;	
 
 }	

 int main(void) {

	char *str[MAX] = {0};
	long array[MAX] = {0};
	char *ptr = str;
	int n = 0;
	int j = 0;
	
	printf("\n Vvedite stroku \n\n");				
	 	 
	fgets(str, MAX, stdin);							//Вводим строку в массив

	while (*ptr) { 
	
		if (array[j] = strtol(ptr, &ptr, 10)) {		//Пока значение массива не 0, определяем в нем числа и передаем в массив array
			
			 array[j] > 0 ? j++ : 0;  				//Если значение числа больше 0, увеличиваем индекс массива
		}
			 
		else  ptr++;
		
	}
		
		printf("\n  Positive elements  ");
				
    for (int i = 0; i < j; i++) {					//Выводим на экран положительные элементы массива
					  
	printf(" %d ", array[i]);
	
	}	
	
	n = my_mean(array, j);							//Определяем среднее арифметическое массива и выводим на экран
	
	printf("\n\n  Srednee znachenie = %d ", n); 
	
 return(0); 
}
      