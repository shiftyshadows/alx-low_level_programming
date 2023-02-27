#include "main.h"

/**
 * _strlen -  returns the length of
 * a string
 *
 * @s: length of this string
 */

int _strlen(char *s)
{
/*Declaration of variables*/
	int i;
	int length = 0;

/*Code Logic*/
	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);

}
