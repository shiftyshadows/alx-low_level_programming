#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a
 * parameter
 *
 * @str: pointer of type char
 *
 * Return: Duplicated string
 */


char *_strdup(char *str)
{
	/*Declaration of variables*/
	char *dup_str;

	/*Code Statements*/
	/* Check if str is NULL */
	if (str == NULL)
	{
		return (NULL);
	}

	/* Allocate memory for the new string */
	dup_str = malloc(strlen(str) + 1);
	if (dup_str == NULL)
	{
		return (NULL);
	}

	/* Copy the contents of str to the new string */
	strcpy(dup_str, str);

	return (dup_str);
}
