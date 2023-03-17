#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - swaps the values of two integers
 *
 * @a: number being swapped
 * @size: number being swapped
 *
 */


void print_diagsums(int *a, int size)
{
/* Declaration of Variables */
	int sum1 = 0, sum2 = 0, i;

/* Code Statements */
	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + size - i - 1);
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}

