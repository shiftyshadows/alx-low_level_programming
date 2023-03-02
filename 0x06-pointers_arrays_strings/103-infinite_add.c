#include "main.h"

/**
 * infinite_add - swaps the values of two integers
 *
 * @n1: number being swapped
 * @n2: number being swapped
 * @r:character
 * @size_r: size of character
 * Return: character
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
/*Declaration of variables*/
	int len1 = 0, len2 = 0, max_len, i = 0, sum = 0, carry = 0, digit1, digit2;

/*calculate length of n1*/
	while (n1[len1] != '\0')
	{
		len1++;
	}

/*calculate length of n2*/
	while (n2[len2] != '\0')
	{
		len2++;
	}
	max_len = (len1 > len2) ? len1 : len2;

/*check if result can fit in buffer*/
	if (max_len + 1 > size_r)
	{
		return (0);
	}
/*null terminate result buffer*/
	r[max_len + 1] = '\0';

	for (i = 0; i < max_len; i++)
	{
		digit1 = (i < len1) ? (n1[len1 - i - 1] - '0') : 0;
		digit2 = (i < len2) ? (n2[len2 - i - 1] - '0') : 0;

		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[max_len - i] = '0' + (sum % 10);
	}
	if (carry)
	{
/*check if result can fit in buffer*/
		if (max_len + 1 > size_r)
		{
			return (0);
		}
		r[0] = '0' + carry;
		return (r);
	}
	else
	{
		return (r + 1); /*skip leading 0 if no carry*/
	}
}

