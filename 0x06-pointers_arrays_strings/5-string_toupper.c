#include "main.h"

/**
 * string_toupper - function that changes all
 * lowercase letters of a string to uppercase
 *
 * @str: string to be changed to uppercase
 *
 * Return: Uppercase string
 */

char *string_toupper(char *str)
{
/*Declaration of variables*/
	char *p = str;

/*Code Logic*/
	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
/*Convert to uppercase*/
			*p = *p - 32;
		}
		p++;
	}
	return (str);
}

