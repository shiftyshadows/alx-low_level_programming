#include "main.h"

/**
 * print_triangle - function that prints a triangle,
 * followed by a new line
 *
 * @size: size of triangle
 */

void print_triangle(int size)
{
/*Declaration of variables*/
	int i, j;

/*Code Statements*/
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

