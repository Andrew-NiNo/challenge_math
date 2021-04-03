// The task m - 00
// There is a string consisting of natural numbers separated by possible characters: space, tab, or comma
// Return values in descending order
// Sample string:    09 665, 23	,456,0987,12 1567 11

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 500

int comp(const void *i, const void *j)
{
	return (*(int *)i - *(int *)j);
}

int main(void)
{
	char str[MAX] = {0};
	char *ptr = str;
	long numbers[MAX] = {0};
	int sizeNumbers = 0;

	printf("\n Enter the string :\n");

	fgets(str, MAX, stdin);

	while (*ptr)
	{
		if (isdigit(*ptr)) {

			numbers[sizeNumbers++] = strtol(ptr, &ptr, 10);
		}
		else
			ptr++;
	}

	qsort(numbers, sizeNumbers, sizeof(long), comp);

	for (int j = 0; j < sizeNumbers; j++)

		printf("  %ld ", numbers[j]);

	return (0);
}
