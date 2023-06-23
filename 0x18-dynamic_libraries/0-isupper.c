#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 *
 * @c: letter to be checked
 *
 * Return: 0 (if not uppercase) or 1 (if uppercase)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	/*check if c is within the range of uppercase characters*/
		return (1); /* return 1 if c is uppercase */
	}
	else
	{
		return (0); /* return 0 if c is not uppercase */
	}
}


