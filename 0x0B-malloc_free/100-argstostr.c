#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments
 * of your program.
 *
 * @ac: integer
 * @av: pointer
 *
 * Return: Duplicated string
 */

char *argstostr(int ac, char **av)
{
	/* Declaration of variables */
	int length, i, j, k;
	char *result;

	/* Code Statements */
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/* compute the length of the concatenated string */
	length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			++length;
		}
		++length; /* account for the newline character */
	}
	/* allocate memory for the concatenated string */
	result = malloc(length * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	/* concatenate the arguments into the result string */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[k++] = av[i][j];
		}
		result[k++] = '\n'; /* add the newline character */
	}
	result[k] = '\0'; /* add the null terminator */
	return (result);
}
