#include "main.h"

/**
 * print_number - function that prints
 * an integer.
 *
 * @n: number
 *
 */

void print_number(int n)
{
/*Declaration of variables*/
	int digit, divisor = 1;

/*Code Statements*/
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / divisor > 9)
	{
		divisor *= 10;
	}
	while (divisor != 0)
	{
		digit = n / divisor;
		_putchar(digit + '0');
		n %= divisor;
		divisor /= 10;
	}
}

