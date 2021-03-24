// The task M - 06
// Find the sum between the minimum and maximum elements of an array
// The sample:   4,6,84,648,44,68,486,77,87,8,4,049,81,41,8,43,72,811,468,487

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>

#define MAX 500

<<<<<<< HEAD
int main(void)
{
	char *ptr = malloc(255);
=======
int main(void) {

	char str[MAX] = {0};
	char *ptr = str;
>>>>>>> eb62d0d13cd5882183cd87776cdf148bf6de6553
	int max = INT_MIN;
	int min = INT_MAX;

	printf("\n Enter value : \n");

<<<<<<< HEAD
	fgets(ptr, MAX, stdin);

	while (*ptr)
	{
		if (isdigit(*ptr))
		{
			int value = strtol(ptr, &ptr, 10);

			max < value? max = value: 0;
			min > value? min = value: 0;
		}
		else
			ptr++;
	}
	printf("\n Summ min & max = %d\n", max + min);
=======
	fgets(str, MAX, stdin);

	while (*ptr) {

		if (isdigit(*ptr)) {

			int value = strtol(ptr, &ptr, 10);

			max < value ? max = value : min > value ? min = value : 0;
		}
		else  ptr++;
	}
	printf("\n Sum min & max = %d\n", max + min);
>>>>>>> eb62d0d13cd5882183cd87776cdf148bf6de6553

	return 0;
}