#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: pointer to memory location
 * @b: constant nyte
 * @n: number of byte to be filled
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
/* Declaration of Variables */
	unsigned int i;

/* Code Statements */
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

