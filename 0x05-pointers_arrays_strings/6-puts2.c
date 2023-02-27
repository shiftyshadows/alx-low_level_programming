#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a
 * new line
 *
 * @str: string to be printed
 */

void puts2(char *str)
{
/*Declaration of Variables*/
	int i;

/* Iterate over the string, printing every other character */
	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}

/*Print a new line*/
	_putchar('\n');
}
