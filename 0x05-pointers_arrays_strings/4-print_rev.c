#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 * followed by a new line
 *
 * @s: string to be printed in reverse
 */

void print_rev(char *s)
{
/*Declaration of Variables*/
	int len = 0, i;

/*Code Logic*/
	while (s[len] != '\0')
	{
		len++;
	}

/* Reverse the string*/
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

/* Print a new line */
	_putchar('\n');
}
