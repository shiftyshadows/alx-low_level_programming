#include <stdio.h>

/**
 * flip_bits - Function that sets the value of a bit to 0 at a given index.
 *
 * @n: unsigned long integer
 * @m: unsigned long integer
 *
 * Return: int result
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
/* Declaration of Variable */
	unsigned long int x = n ^ m;
	unsigned int count = 0;

/* Code Statements */
	while (x != 0)
	{
		count++;
		x &= x - 1;
	}
	return (count);
}

