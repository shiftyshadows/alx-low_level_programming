#include "main.h"

/**
 * reverse_array -  function that reverses
 * the content of an array of integers
 *
 * @a: number being swapped
 * @n: number being swapped
 *
 */

void reverse_array(int *a, int n)
{
/*Declaration of variables*/
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
/*Swap elements at index i and n-i-1*/
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}

