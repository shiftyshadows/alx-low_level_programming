#include "main.h"
#include <stdlib.h>
/**
 * rot13 - swaps the values of two integers
 *
 * @str: number being swapped
 *
 * Return: character
 */

char *rot13(char *str)
{
/*Declaration of variables*/
	char *result = (char *) malloc(sizeof(char) * 1000), c;
	int i, j;

/*Code Statements*/
	for (i = 0, j = 0; str[i] != '\0'; i++, j++)
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
		{
			c += 13;
			if (c > 'z')
			{
				c -= 26;
			}
		}
		else if (c >= 'A' && c <= 'Z')
		{
			c += 13;
			if (c > 'Z')
			{
				c -= 26;
			}
		}
		result[j] = c;
	}

	result[j] = '\0';
	return (result);
}
