#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array
 * of integers, followed by a new line
 *
 * @a: array in reference
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
/*Declaration of Variables*/
	int i;

/* Iterate over array, printing each element*/
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
		if (i < n - 1)
		{
			printf(",");
		}
	}

/*Print a new line*/
	printf("\n");
}
