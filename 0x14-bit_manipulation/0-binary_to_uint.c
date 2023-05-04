#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - Write a function that converts a
 * binary number to an unsigned int
 *
 * @b: character pointer
 *
 * Return: unsigned int result
 */

unsigned int binary_to_uint(const char *b)
{
/* Declaration of Variables */
	unsigned int result = 0;
	int i;

/* Code Statementa*/
	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result <<= 1;
			result += b[i] - '0';
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
