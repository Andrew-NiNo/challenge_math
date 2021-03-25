// The task M-05
// Find the element number of an array with an absolute minimum value
//	5,-49,31,646,-4,841,-844,47,65,-46,8654,-14,84,-894,47

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 500

int main(void) {

	char str[MAX] = {0};
	char *ptr = str;
	long array[MAX] = {0};
	int num = 0;
	int j = 0;

	printf("\n Enter string ...\n");

	fgets(str, MAX, stdin);

	while (*ptr) {

		if (isdigit(*ptr)) {

			array[j++] = strtol(ptr, &ptr, 10);

			for (int i = 0; i < j; i++) {

				if (abs(array[i]) < abs(array[num]))

					num = i;
			}
		}
		else  ptr++;
	}

	printf("\nThe number of the minimal  element is - %d \n", num + 1);

	return 0;
}
