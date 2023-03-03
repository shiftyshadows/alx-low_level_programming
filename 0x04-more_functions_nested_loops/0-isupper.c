#include "main.h"

/**
 * _isupper - swaps the values of two integers
 *
 * @a: number being swapped
 * @b: number being swapped
 *
 */

int _isupper(int c)
{
	if(c >= 'A' && c <= 'Z')
	{
	/*check if c is within the range of uppercase characters*/
		return 1; /* return 1 if c is uppercase */
	}
	else
	{
		return 0; /* return 0 if c is not uppercase */
	}
}


