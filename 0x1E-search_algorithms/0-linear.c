#include <stdio.h>

/**
 * linear_search - function that searches for a value in
 * a sorted array of integers using the Binary search
 * algorithm.
 *
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for
 *
 * Return: -1 if value not present in array, or array is NULL,
 * otherwise the integer value is returned
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Check for NULL array */
	if (array == NULL)
	{
		return (-1); }

	/* Iterate through the array */
	for (i = 0; i < size; ++i)
	{
		/* Print the current value being compared */
		printf("Comparing %d with %d\n", array[i], value);

		if (array[i] == value)
		{
			/* Return the index if found */
			return (i);
		}

	}
	/* Return -1 if the value is not found in the array */
	return (-1);
}
