#include <stdio.h>
#include "main.h"

/**
 * set_bit - Function that sets the value of a bit to 1 at a given index.
 *
 * @n: unsigned long integer pointer
 * @index: unsigned integer
 *
 * Return: Integer Value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
/* Code Statements */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);  /* invalid index */
	}
	*n |= 1UL << index;
	return (1);
}

