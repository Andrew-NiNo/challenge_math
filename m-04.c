// The task M-04
// Two arrays of natural sizes are given
// The array whose arithmetic mean is greater - output in descending order, and the one with less arithmetic mean - display in increasing order.

#include <stdio.h>
#include <stdlib.h>


int mean (int *array_int, size_t size) {				// The "mean" function returns the arithmetic mean of the array

	int sum = 0;

	for (size_t i = 0; i < size; i++) {

		sum += array_int[i++];
	}

	return sum / size;
}

void ReplacementOfValues (int *array_int, size_t index) {

	int temp = array_int[index];
	array_int[index] = array_int[index + 1];
	array_int[index + 1] = temp;
}

void my_sorting(int *digits, char control, size_t size) {   	

	size_t i;
	size_t j;

	for (i = size - 1; i > 0; i--) {

		for (j = 0; j < i; j++) {

			if (control == '<') {

				if (digits[j] < digits[j + 1]) { 		// Sort the array by decreasing values

					ReplacementOfValues(digits, j);
				}
			}
			else if (control == '>') {							

				if (digits[j] > digits[j + 1]) { 		// Sort the array by increasing values

					ReplacementOfValues(digits, j);
				}
			}
		}
	}
}


int main(void) {

	int array_1[] = {34, 5, 67, 245, 776, 34, 22, 98, 13, 34, 68, 231};
	int array_2[] = {86, 564, 343, 577, 2, 34, 4, 7, 2};

	size_t size_arr_1 = sizeof(array_1) / sizeof(array_1[0]);
	size_t size_arr_2 = sizeof(array_2) / sizeof(array_2[0]);


	int mean_array_1 = mean(array_1, size_arr_1);							

	int mean_array_2 = mean(array_2, size_arr_2);

	printf("\n  mean \tarray_1 = %d\n  \t\tarray_2 = %d\n\n", mean_array_1, mean_array_2);


	my_sorting(array_1, mean_array_1 > mean_array_2 ? '<' : '>', size_arr_1);					// Sorting		

	for ( size_t i = 0; i < size_arr_1; i++ ) {										

		printf(" %d ", array_1[i]);
	}

	printf("\n\n");

	my_sorting(array_2, mean_array_1 > mean_array_2 ? '>' : '<', size_arr_2);					// Revers sorting	

	for ( size_t i = 0; i < size_arr_2; i++ ) {										

		printf(" %d ", array_2[i]);
	}

	return 0;
}