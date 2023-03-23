#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 *
 * @array: integer pointer
 * @cmp: function pointer
 * @size: integer
 *
 * Return: Integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
/* Declaration of Variables */
	int i;

/* Code Statements */
	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}

