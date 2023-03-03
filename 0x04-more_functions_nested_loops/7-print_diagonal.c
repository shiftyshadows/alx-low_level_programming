#include "main.h"

/**
 * print_diagonal - function that draws a straight
 * line in the terminal.
 *
 * @n: number of times '\' should be printed
 */

void print_diagonal(int n)
{
/*Declaration of variables*/
	int i, j;

/*Code Statements*/
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
