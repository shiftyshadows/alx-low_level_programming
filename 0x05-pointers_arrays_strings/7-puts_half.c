#include "main.h"

/**
 * puts_half - prints half of a string, followed
 * by a new line
 *
 * @str: half of this string will e printed
 */

void puts_half(char *str)
{
/*Declaration of Variables*/
	int len = 0, midpoint, i;

	while (str[len] != '\0')
	{
		len++;
	}

	midpoint = len / 2;

/* Print the first half of the string */
	for (i = midpoint; i < len; i++)
	{
		_putchar(str[i]);
	}

/*Print a new line*/
	_putchar('\n');
}
