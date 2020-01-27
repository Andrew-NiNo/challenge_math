// Для заданной строки символов вычислить произведение входящих в эту строку целых чисел (без учета их знаков). 
//Например, для строки "frdk2.5jkghr,,,hfd45jgfsdfooopi10,4hfhg" произведение 2*5*45*10*4=18000


#include <stdio.h>
#include <stdlib.h>

#define MAX 500

 int main(void) {

	char *str[MAX] = {0};
	char *ptr = str;
	int sum = 1;

	printf("\n Vvedite stroku\n\n");
	 	 
	fgets(str, MAX, stdin);

	while (*ptr) { 
	
		if (isdigit(*ptr)) {
      
		int numb  = strtol(ptr, &ptr, 10); 
	   
			sum *= numb;
                       
		} 
		
		else  ptr++;
    }
	
	printf("  %d\n", sum); 
 
 return 0;
}