#include "main.h"

/**
 * _strncat - function that concatenates
 * two strings
 *
 * @dest: final string
 * @src: first string
 * @n: maximum number of bytes
 * Return: Concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
/*Declaration of variables*/
	int dest_len = 0;
	int i;

/*Code Logic*/
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

