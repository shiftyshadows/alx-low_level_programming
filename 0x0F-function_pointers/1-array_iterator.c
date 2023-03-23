#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as
 * a parameter on each element of an array
 *
 * @array: integer pointer
 * @size: unsigned integer
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
/* Declaration of Variables */
	unsigned int i;

/* Code Statements*/
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

