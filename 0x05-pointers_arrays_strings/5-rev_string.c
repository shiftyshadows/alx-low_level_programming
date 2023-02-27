#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to be printed in reverse
 */

void rev_string(char *s)
{
/*Declaration of Variables*/
	int len = 0, i;

/*Find length of string*/

	while (s[len] != '\0')
	{
		len++;
	}

/*Reverse the string in place */
	for (i = 0; i < len / 2; i++)
	{
		char temp = s[i];

		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
