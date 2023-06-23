#include "main.h"

/**
 * _puts - prints a string, followed by a new line,
 * to stdout
 *
 * @str: string to be printed
 */

void _puts(char *str)
{
/*Declaration of variables*/
	int i;

/*Code Logic*/
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
