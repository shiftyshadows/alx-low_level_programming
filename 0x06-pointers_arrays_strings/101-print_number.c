#include "main.h"

/**
 * print_number - function that prints an integer.
 *
 * @n: number being swapped
 *
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		print_number(n / 10);
	}
	_putchar('0' + (n % 10));
}

