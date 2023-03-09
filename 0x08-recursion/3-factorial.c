#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 *
 * @n: interger whose factorial is to be calculated
 * Return: integer result
 *
 */

int factorial(int n)
{
	/*Code Statements*/
	if (n < 0)
	{
		return (-1); /*return -1 for negative input (error condition)*/
	}
	else if (n == 0)
	{
		return (1); /*base case: return 1 for n=0*/
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

