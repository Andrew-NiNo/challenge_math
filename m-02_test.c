// Задача M - 02
// Задана строка состоящая из натуральных чисел, разделенных возможными символами: пробел, таб, или запятая
// Вывести сначала в первой строке все четные числа упорядоенные по убыванию. во второй строке нечетные упорядоченные по возрастанию
// Образец:  098 45,6321, 788,  085,423      65 77,0989

#include <stdio.h>
#include <stdlib.h>

#define MAX 500

 void my_sorting(long *digit, char c, int number) {   // Функция сортировки массива принимает три значения: массив, 
													  //  знак '<' или '>' и количество элементов массива.
	int i;
	int j;
	
	if (c == '<') {								//Если знак "меньше" ('<') 
		 
		for (i = number - 1; i > 0; i--) {
		
			for (j = 0; j < i; j++) {
								
			    if (digit[j] < digit[j + 1]){ 		//Происходит сортировка массива по уменьшению значений
				
					int temp = digit[j];
					digit[j] = digit[j + 1];
					digit[j + 1] = temp;
				}
			}
		}
	}
	
	else if (c == '>') {							//Если знак "больше" ('>') 
		
		for (i = number - 1; i > 0; i--) {
		
			for (j = 0; j < i; j++) {
									
			    if(digit[j] > digit[j + 1]){ 		//Происходит сортировка массива по увеличению значений
				
					int temp = digit[j];
					digit[j] = digit[j + 1];
					digit[j + 1] = temp;
				}
			}
		}
	}
}

 int main(void) {

	char *str[MAX] = {0};
	long array[MAX] = {0};
	char *ptr = str;
	int medium = 0;
	int counter_even = 0;
	int counter_odd = 0;
	int i = 0;
	int j = 0;
    int	s = 0;
	long even[MAX] = {0};
	long odd[MAX] = {0};
	
	printf("\n Vvedite stroku\n");
	 	 
	fgets(str, MAX, stdin);						//Считываем строку и сохраняем в массив str
	
	putchar('\n');

	while (*ptr) { 								//Пока значение массива больше 0
		     
	    array[i] = strtol(ptr, &ptr, 10); 		//Проверяем - элемент массива есть число? Тогда  сохраняем в массив array
		
		medium = array[i] % 10; 				//Берем последнюю цифру из числа
		
		if (medium % 2) {						//Деление ее с остатком на 2 больше 0?
			
			odd[j++] = array[i]; 				//Тогда передаем число в массив нечетных чисел	
			
			counter_odd++; 
		}
		
		else {									//Если иначе - передаем число в массив четных чисел
			
			even[s++] = array[i];
				
			counter_even++;
		}
		 
		ptr++;
	}
	
	my_sorting(even, '<', counter_even);		//Запускаем функцию сортировки на уменьшение
	
   	for ( i = 0; i < counter_even; i++ ) {		//Выводим массив на экран
					  
    printf(" %d ", even[i]);
	
	}
	
	putchar('\n');
		
	my_sorting(odd, '>', counter_odd);			//Запускаем функцию сортировки на увеличение
	
	for ( i = 0; i < counter_odd; i++ ) {		//Выводим массив на экран
					  
    printf(" %d ", odd[i]);
	
	}
 
 return 0;
}