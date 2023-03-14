#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of aaray
 * @c: initialization character
 *
 * Return: created array
 */


char *create_array(unsigned int size, char c)
{
	/*Declaration of variables*/
	char *arr;
	unsigned int i;

	/*Code Statements*/
	/* Check if size is zero */
	if (size == 0)
	{
		return (NULL);
	}

	/* Allocate memory for the array */
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}

	/* Initialize the array with the specified char */
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
