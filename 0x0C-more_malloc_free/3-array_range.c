#include "main.h"

/**
 * array_range - function that creates an array of integers
 *
 * @min: minimum value in array
 * @max: maximum value in array
 *
 * Return: pointer to the newly created array
 */


#include <stdlib.h>

int *array_range(int min, int max)
{
/* Declaration of variables */
	int size, *arr, i;

/* Code Statements */
	if (min > max)
	{
		return (NULL); /* Return NULL if min > max */
	}

	size = max - min + 1;
	arr = malloc(size * sizeof(int)); /* Allocate memory using malloc */
	if (arr == NULL)
	{
		return (NULL); /* Return NULL if malloc fails */
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i; /* Populate array with values from min to max */
	}

	return (arr); /* Return pointer to the newly created array */
}
