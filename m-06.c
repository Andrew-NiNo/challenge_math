// The task M - 06
// Find the sum between the minimum and maximum elements of an array
// The sample:   4,6,84,648,44,68,486,77,87,8,4,049,81,41,8,43,72,811,468,487

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>

#define MAX 500

int main(void) {

	char str[MAX] = {0};
	char *ptr = str;
	int max = INT_MIN;
	int min = INT_MAX;

	printf("\n Enter value : \n");

	fgets(str, MAX, stdin);

	while (*ptr) {

		if (isdigit(*ptr)) {

			int value = strtol(ptr, &ptr, 10);

			max < value ? max = value : min > value ? min = value : 0;
		}
		else  ptr++;
	}
	printf("\n Sum min & max = %d\n", max + min);

	return 0;
}