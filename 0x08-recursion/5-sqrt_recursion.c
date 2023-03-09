#include "main.h"

/**
 * _sqrt_recursion - function that returns the
 * natural square root of a number.
 *
 * @n: number whose natural square root is to
 * be deduced
 *
 * Return: integer result
 */

int _sqrt_recursion(int n)
{
	/*Code Statements*/
	if (n < 0)
	{
		return (-1); /*return -1 for negative input (error condition)*/
	}
	else if (n <= 1)
	{
		return (n); /*base case: return n for n=0 or 1*/
	}
	else
	{
		/*Declaration of Variables*/
		int i;

		for (i = 1; i * i < n; i++)
		{
			/*do nothing, just iterate until i^2 >= n*/
		}
		if (i * i == n)
		{
			return (i); /*return i if i^2=n (exact square root)*/
		}
		else
		{
			return (-1); /*return -1 if n does not have a natural square root*/
		}
	}
}

