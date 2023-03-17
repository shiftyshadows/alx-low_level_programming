#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: pointer to string
 * @accept: prefix sustring
 *
 * Return: length of substring
 */

unsigned int _strspn(char *s, char *accept)
{
/* Declaration of variables */
	unsigned int count = 0;
	int i, j;

/* Code Statements */
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (count);
}

