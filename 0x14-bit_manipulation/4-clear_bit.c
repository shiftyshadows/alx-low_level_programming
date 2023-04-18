#include <stdio.h>

/**
 * clear_bit - Function that sets the value of a bit to 0 at a given index.
 *
 * @n: unsigned long int pointer
 * @index: unsigned integer
 *
 * Return: int result
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
/* Code Statements */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);  /* invalid index */
	}
	*n &= ~(1UL << index);
	return (1);
}

