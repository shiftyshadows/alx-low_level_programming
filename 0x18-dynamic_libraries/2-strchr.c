#include "main.h"
#include <stddef.h>

/**
 * _strchr - swaps the values of two integers
 *
 * @s: pointer to stored string
 * @c: character to be located
 *
 * Return: Pointer if character is found, otherwise NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}

