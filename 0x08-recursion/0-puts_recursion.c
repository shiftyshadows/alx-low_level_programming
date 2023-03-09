#include "main.h"

/**
 * _puts_recursion - swaps the values of two integers
 *
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	/*Code Statements*/
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
