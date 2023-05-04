#include <stdio.h>

/**
 * get_endianness - Function that checks the endianness.
 *
 * Return: integer result
 */

int get_endianness(void)
{
/* Declaration of Variables */
	int x = 1;
	char *p = (char *)&x;

	return (*p == 1);
}

