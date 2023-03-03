#include "main.h"

/**
 * _isdigit - function that checks for
 * a digit (0 through 9).
 *
 * @c: character eing checked
 *
 * Return: 0(if not digit) or 1 (if digit)
 */

int _isdigit(int c)
{
/*Code Statements*/
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

