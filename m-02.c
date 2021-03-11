// The task M - 02
// There is a string consisting of natural numbers separated by possible characters: space, tab, or comma
// Print all even numbers in descending order on the first line. The second line is odd ascending
// Sample string:  098 45,6321, 788,  085,423      65 77,0989

#include <stdio.h>
#include <stdlib.h>

#define MAX 500

void my_sorting(long *digits, char flag, int size) {   	// Array sort function
	int i;
	int j;

	if (flag == '<') {									// If flag is '<'

		for (i = size - 1; i > 0; i--) {

			for (j = 0; j < i; j++) {

				if (digits[j] < digits[j + 1]) { 		// Sort the array by decreasing values

					int temp = digits[j];
					digits[j] = digits[j + 1];
					digits[j + 1] = temp;
				}
			}
		}
	}

	else if (flag == '>') {								// If flag is '>'

		for (i = size - 1; i > 0; i--) {

			for (j = 0; j < i; j++) {

				if (digits[j] > digits[j + 1]) { 		// Sort by increasing values

					int temp = digits[j];
					digits[j] = digits[j + 1];
					digits[j + 1] = temp;
				}
			}
		}
	}
}

int main(void) {

	char str[MAX] = {0};
	long numbers[MAX] = {0};
	char *ptr = str;
	int medium = 0;
	int counter_even = 0;
	int counter_odd = 0;
	int i = 0;
	int j = 0;
	int	s = 0;
	long even_numbers[MAX] = {0};
	long  odd_numbers[MAX] = {0};

	printf("\n Enter the string :\n\n");

	fgets(str, MAX, stdin);								// Read line

	while (*ptr) {

		numbers[i] = strtol(ptr, &ptr, 10); 			// Determine the numbers

		medium = numbers[i] % 10; 						// Determine even / odd

		if (medium % 2) {

			odd_numbers[j++] = numbers[i];

			counter_odd++;
		}

		else {

			even_numbers[s++] = numbers[i];

			counter_even++;
		}

		ptr++;
	}

	my_sorting(even_numbers, '<', counter_even);		// Sorting

	for ( i = 0; i < counter_even; i++ ) {				// Printing

		printf(" %ld ", even_numbers[i]);

	}

	putchar('\n');

	my_sorting(odd_numbers, '>', counter_odd);

	for ( i = 0; i < counter_odd; i++ ) {

		printf(" %ld ", odd_numbers[i]);

	}

	return 0;
}