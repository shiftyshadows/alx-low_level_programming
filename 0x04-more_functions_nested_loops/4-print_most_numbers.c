#include "main.h"

/**
 * print_most_numbers - function that prints the numbers,
 * from 0 to 9, followed by a new line.
 *
 */

void print_most_numbers(void)
{
/*Declaration of variables*/
	int i;

/*Code Statements*/
	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}

