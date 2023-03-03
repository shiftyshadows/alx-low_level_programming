#include "main.h"

/**
 * print_line - function that draws a straight
 * line in the terminal.
 *
 * @n: number of times '_' should be printed
 */

void print_line(int n)
{
/*Declaration of variables*/
	int i;

/*Code Statements*/
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

