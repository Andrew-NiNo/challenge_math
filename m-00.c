// Задача m - 00
// Задана строка состоящая из натуральных чисел, разделенных возможными символами: пробел, таб, или запятая
// вывести Максимальное число
// Образец:    09 665, 23	,456,0987,12 1567 11

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 500

 int main(void) {

	char *str[MAX] = {0};
	char *ptr = str;
	int max = 0;
	int number;

	printf("\n Vvedite stroku\n");
	 	 
	fgets(str, MAX, stdin);					/*Считываем строку в массив*/

	while (*ptr) { 							/*Выполняется цикл, пока значение массива не 0*/
	
		if (isdigit(*ptr)) {				/*Если символ число - */
      
			number = strtol(ptr, &ptr, 10); /* - выполняется захват числа и присвоение переменной number*/
	   
			if (max < number)				/*Происходит сравнение числа и сохранение максимального значения*/
		   
			max = number;
                       
		} 
		else  ptr++;						/*Если символ не число - переход к следующей ячейке массива*/
    
	}
	printf("\n  Maksimalnoe chislo - %d\n", max); 
 
 return 0;
}