#include "main.h"

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
	char *p = str;

/*Code Logic*/
	while (*p != '\0')
	{
		if ((*p >= 'A' && *p <= 'M') || (*p >= 'a' && *p <= 'm'))
		{
			*p += 13;
		}
		else if ((*p >= 'N' && *p <= 'Z') || (*p >= 'n' && *p <= 'z'))
		{
			*p -= 13;
		}
		p++;
	}
	return (str);
}

