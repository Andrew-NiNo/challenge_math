// The task m - 00
// It is a string consisting of natural numbers separated by possible characters: space, tab, or comma.
// You need to print the maximum number.
// Sample string:    09 665, 23	,456,0987,12 1567 11

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 500

 int main(void) {

	char str[MAX] = {0};
	char *ptr = str;
	int max = 0;
	int number;

	printf("\n Enter the string :\n");
	 	 
	fgets(str, MAX, stdin);					/* Read line */

	while (*ptr) { 							/* Until the value is NULL */
	
		if (isdigit(*ptr)) {				/* If the character is a number */
      
			number = strtol(ptr, &ptr, 10); /* Capturing a number and assigning it to the variable number. */
	   
			if (max < number)				/* Compare the number and store the maximum value. */
		   
			max = number;
                       
		} 
		else  ptr++;						/* Or go to the next value */
    
	}
	printf("\n  Maximum value = %d\n", max); 
 
 return 0;
}