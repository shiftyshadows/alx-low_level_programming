#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring.
 *
 * @haystack: pointer to string
 * @needle: pointer to substring
 *
 * Return: Pointer to string
 */


char *_strstr(char *haystack, char *needle)
{
/* Declaration of Variables */
	char *h, *n;

/* Code Statements */
	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}

