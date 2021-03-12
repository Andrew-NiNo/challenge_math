// The task  M - 03
// There is a string consisting of natural numbers separated by possible characters: space, tab, or comma
// Output in reverse order
// Sample string:  17, 44  89 665, 23	,456,1987,12 1567 11

#include <stdio.h>
#include <stdlib.h>

#define MAX 500

int main(void) {

	char str[MAX] = {0};
	long array[MAX] = {0};
	char *ptr = str;
	int n = 0;
	int i = 0;

	printf("\n Enter the string :\n\n");

	fgets(str, MAX, stdin);

	while (*ptr) {

		if ((array[i] = strtol(ptr, &ptr, 10))) {

			i++;
		}

		else  ptr++;
	}

	n = --i;

	printf("\n Result : \n");
	for (i = 0; i <= n; n--) {

		printf(" %ld ", array[n]);
	}

	return (0);
}
