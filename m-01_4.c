// Задача M - 01
// Задана строка состоящая из натуральных чисел, разделенных возможными символами: пробел, таб, или запятая
// Упорядочить числа по убыванию
// Образец:    09 665, 23	,456,0987,12 1567 11

#include <stdio.h>
#include <stdlib.h>

#define MAX 500

 int main(void) {

	char *str[MAX] = {0};
	long array[MAX] = {0};
	char *ptr = str;
	int counter = 0;
	int temp = 0;
	int i = 0;
	int j = 0;

	printf("\n Vvedite stroku\n");
	 	 
	fgets(str, MAX, stdin);								/*Считываем строку из потока ввода и запивываем в массив*/

	while (*ptr) { 										/*Пока массив не закончился, определяем в нем числа и сохраняем их в новый массив*/
	
		if (isdigit(*ptr)) {
      
			array[i] = strtol(ptr, &ptr, 10); 
		 
			i++; 
		
			counter++;									/*Запускаем счетчик для дальнейшей сортировки*/

		}
		
		else  ptr++;
	}
		
		for (i = counter - 1; i > 0; i--) {				/*Запускаем сортировку массива методом "пузырька" */
			 
			for (j = 0; j < i; j++) {
				
				if (array[j] < array[j + 1]){ 
				  
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
				}
			}
		}	
		
		putchar('\n');
	 
		for (i = 0; i < counter; i++) {					/*Отправляем отсортированный массив в поток вывода*/
					  
			printf(" %d ", array[i]);
	
		}
	
 return(0); 
}
                        	 
 