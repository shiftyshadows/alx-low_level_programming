#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - swaps the values of two integers
 *
 * @s: pointer to string to be searched
 * @accept: pointer to string to be located
 *
 * Return: character pointer
 */

char *_strpbrk(char *s, char *accept)
{
/* Declaration of Variables */
	char *a;

/* Code Statements */
	while (*s != '\0')
	{
		a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
