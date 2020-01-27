// Задача  M - 10
// Найти сумму четных отрицательных элементов массива
//Пример: 11,-894,86,-84,-89,5,8,97,98,54,84,-9,5,41,-894


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 500


 int main(void) {

	char *str[MAX] = {0};
	long array[MAX] = {0};
	char *ptr = str;
	int sum = 0;
	int j = 0;
	
	printf("\n Vvedite stroku \n\n");				
	 	 
	fgets(str, MAX, stdin);							//Вводим строку в массив

	while (*ptr) { 
	
		if (array[j] = strtol(ptr, &ptr, 10)) {		//Пока значение массива не 0, определяем в нем числа и передаем в массив array
			
			 array[j] > 0 ? 0: 						//Если значение числа меньше 0 и это число четное, увеличиваем индекс массива
			 
			(array[j] % 2) == 0 ? j++ : 0 ;  				
		}
			 
		else  ptr++;
		
	}
			
    for (int i = 0; i < j; i++) {					//Складываем значения чисел по модулю
	
		sum += abs(array[i]);
	}	
	
	sum *= -1;										//Восстанавливаем отрицательное значение
	
	printf("\n\n  Summa = %d ", sum); 				//Выводим на печать
	
 return(0); 
}
      