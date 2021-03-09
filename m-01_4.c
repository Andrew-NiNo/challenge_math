// The task m - 00
// There is a string consisting of natural numbers separated by possible characters: space, tab, or comma
// Order numbers in descending order
// Sample string:    09 665, 23	,456,0987,12 1567 11

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 500

 int main(void) {

	char str[MAX] = {0};
	long array[MAX] = {0};
	char *ptr = str;
	int counter = 0;
	int temp = 0;
	int i = 0;
	int j = 0;

	printf("\n Enter the string :\n");
	 	 
	fgets(str, MAX, stdin);								/* Read line */

	while (*ptr) { 										/* Until the value is NULL */
	
		if (isdigit(*ptr)) {
      
			array[i] = strtol(ptr, &ptr, 10); 
		 
			counter = i++; 								/* Start counter for further sorting */
		}
		
		else  ptr++;
	}
		
		for (i = counter - 1; i > 0; i--) {				/* Start sorting the array using the bubble method */

			for (j = 0; j < i; j++) {	printf("  i = %d \n", i);
				
				if (array[j] < array[j + 1]){ 
				  
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
				}
			}
		}	
		
		putchar('\n');
	 
		for (i = 0; i < counter; i++) {					/* Send the sorted array to the output stream */
					  
			printf(" %ld ", array[i]);
	
		}
	
 return(0); 
}
                        	 
 