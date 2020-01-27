// Задача S-07 Максимум

// Для заданной строки символов найти наибольшее записанное в этой строке целое число (без учета знака числа). 
//Например, для строки "sdfvgsd1.9fdmjgvb-19.2dnj05" наибольшее целое число 19.


#include <stdio.h>
#include <stdlib.h>

#define MAX 500

 int main(void) {

	char *str[MAX] = {0};
	char *ptr = str;
	int max = 0;

	printf("\n Vvedite stroku\n");
	 	 
	fgets(str, MAX, stdin);						//Считываем строку и заносим в массив str

	while (*ptr) { 								//Пока значение массива не 0
	
		if (isdigit(*ptr)) {					//И значение  - число
      
		  int numb  = strtol(ptr, &ptr, 10); 	//Получаем число 
	   
			if (max < numb) {					//Сравниваем его и сохраняем большее значение
		   
				max = numb;
			}
		} 
		
		else  ptr++;
	}
	
	printf("  %d\n", max); 						//Печать большего значения
 
 return 0;
}