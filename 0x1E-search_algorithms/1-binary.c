#include <stdio.h>

/**
 * binary_search - function that searches for a value in
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

int binary_search(int *array, size_t size, int value)
{
	/* Declaration of Variables. */
	int start = 0;
	int end = size - 1;
	int i, mid;

	/* Code Statements */
	if (array == NULL)
	{
		return (-1); }
	while (start <= end)
	{
		printf("Searching subarray: ");
		for (i = start; i <= end; ++i)
		{
			printf("%d ", array[i]); }
		printf("\n");
		mid = start + (end - start) / 2;
		if (array[mid] == value)
		{
			return (mid); }
		if (array[mid] > value)
		{
			end = mid - 1; }
		else
		{
			start = mid + 1; }
	}
	return (-1);
}
