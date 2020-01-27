// Задача M-04 Задано два массива натуральных чисел
// Тот массив среднее арифметическое которого большее - вывести по убыванию, а тот у которого среднее арифметическое меньше - вывести по увеличению.

#include <stdio.h>
#include <stdlib.h>

#define MAX 500

 int my_mean (int *s, int count) {				//Функция my-mean возвращает среднее арифметическое значение массива
	 
	int j = 0;
 
	int medium = 0;
	 
	int sum = 0;
	 
	for (int i = 0; i < count; i++) { 								
		
		 sum += s[j++];
		
	}
		medium = sum / count;
		
 return medium;	
 
 }	

 void my_sorting(int *digit, char c, int number) {   // Функция сортировки массива принимает три значения: массив, 
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

	int array_1[13] = {34,5,67,245,776,34,22,98,13,34,68,231};
	int array_2[10] = {86,564,343,577,2,34,4,7,2};
	int i = 0;
	int s_1 = 0;
	int s_2 = 0;
	
		
		s_1 = my_mean(array_1, 12);							//Считаем среднее арифметическое значение массивов
	
		s_2 = my_mean(array_2, 9);	
	
		
		printf("\n mean array_1 %d  array_2 %d\n\n", s_1, s_2);
			
	
	my_sorting(array_1, s_1 > s_2 ? '<' : '>', 12);		//Запускаем функцию сортировки 
	
   	for ( i = 0; i < 12; i++ ) {										//Выводим массив на экран
					  
    printf(" %d ", array_1[i]);
	
	}
	
	printf("\n\n");
		
	my_sorting(array_2, s_1 > s_2 ? '>' : '<', 9);			//Запускаем функцию обратной сортировки 
	
	for ( i = 0; i < 9; i++ ) {											//Выводим массив на экран
					  
    printf(" %d ", array_2[i]);
	
	}
 
 return 0;
}