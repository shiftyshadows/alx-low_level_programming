#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat -  function that concatenates two strings.
 *
 * @s1:	pointer of type char containing string
 *      to be concatenated
 * @s2:	pointer of type char containing string
 *	to be concatenated
 *
 * Return: Destination string
 */

char *str_concat(char *s1, char *s2)
{
	/*Declaration of variables*/
	char *concat_str;


	/* Code Statements */
	/* Treat NULL strings as empty strings */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	/* Allocate memory for the concatenated string */
	concat_str = malloc(strlen(s1) + strlen(s2) + 1);
	if (concat_str == NULL)
	{
		return (NULL);
	}

	/* Copy the contents of s1 and s2 to the concatenated string */
	strcpy(concat_str, s1);
	strcat(concat_str, s2);

	return (concat_str);
}


