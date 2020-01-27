// Задача M - 06
// Найти сумму  между минимальным и максимальным элементами массива
//Пример: 4,6,84,648,44,68,486,77,87,8,4,049,81,41,8,43,72,811,468,487


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX 500

 int main(void) {

	char *str[MAX] = {0};
	char *ptr = str;
	int max = INT_MIN;
	int min = INT_MAX;

	printf("\n Vvedite stroku\n");					//Считываем строку в массив
	 	 
	fgets(str, MAX, stdin);

	while (*ptr) { 									//Пока значение массива не 0, определяем в массиве числа 
	
		if (isdigit(*ptr)) {
      
		 int numb = strtol(ptr, &ptr, 10); 
	 
			if (max < numb) {						//Через сравнение определяем максимальное 
		   
			   max = numb;
			}
			
			else if (min > numb) {					// и минимальное значение 
		   
					 min = numb;
				}
		} 
		
		else  ptr++;
	}
	
	printf("\n Summa min i max = %d\n", max + min); //Выводим на экран сумму этих значений
 
 return 0;
}