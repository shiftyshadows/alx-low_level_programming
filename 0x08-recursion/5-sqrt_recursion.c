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
	/*Declaration of variables*/
	int low = 1, high = n, mid, res;

	/*Code Statements*/
	if (n < 0)
	{
		return (-1);/* Error: square root
			     * of negative number is imaginary
			     */
	}
	if (n == 0 || n == 1)
	{
		return (n); /* Base case: square root
			     * of 0 and 1 is the number itself
			     */
	}

	while (low <= high)
	{
		mid = (low + high) / 2;
		if (mid * mid == n)
		{
			/* If mid is the square root, return mid*/
			return (mid);
		}
		if (mid * mid < n)
		{
			/*Discard left half*/
			low = mid + 1;
			res = mid;
		}
		else
		{
			/* Discard right half*/
			high = mid - 1;
		}
	}
	return (res); /*Return the last valid value of res*/
}

