#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: maximum number of bytes
 *
 * Return: Concatenated string
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
/* Declaration of variables */
	unsigned int s1_len, s2_len, concat_len;
	char *concat_str;

/* Code Statements */
	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	concat_len = s1_len + (n < s2_len ? n : s2_len);

	concat_str = malloc(concat_len + 1);

	if (concat_str == NULL)
	{
		return (NULL);
	}

	memcpy(concat_str, s1, s1_len);
	memcpy(concat_str + s1_len, s2, n < s2_len ? n : s2_len);
	concat_str[concat_len] = '\0';

	return (concat_str);
}

