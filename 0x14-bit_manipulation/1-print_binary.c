#include <stdio.h>
#include "main.h"

/**
 * print_binary - Function that prints the binary representation of a number.
 *
 * @n: unsigned long integer
 */

void print_binary(unsigned long int n)
{
/* Declaration of Variables */
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int bit = 0;


/* Code Statementa*/
	while (mask != 0)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			bit = 1;
		}
		else if (bit)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
	if (!bit)
	{
		_putchar('0');
	}
}

