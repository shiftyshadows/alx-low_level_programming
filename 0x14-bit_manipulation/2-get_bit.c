#include <stdio.h>
#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 *
 * @n: unsigned long integer
 * @index: unsigned long integer representing
 *
 * Return: Integer result
 */

int get_bit(unsigned long int n, unsigned int index)
{
/* Code Statements */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);	/* invalid index */
	}
	return ((n >> index) & 1);
}

