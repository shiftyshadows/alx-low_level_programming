#include "main.h"

/**
 * is_prime_number_helper - helper function
 *
 * @n: number being swapped
 * @i: number being swapped
 *
 * Return: integer result
 */

int is_prime_number_helper(int n, int i)
{
	/*Code Statements*/
	if (n <= 1)
	{
		return (0); /*n is not prime*/
	}
	if (i * i > n)
	{
	return (1); /*n is prime */
	}
	if (n % i == 0)
	{
	return (0); /*n is not prime*/
	}
	/* Recursive case */
	return (is_prime_number_helper(n, i + 1));
}

/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 *
 * @n: number being swapped
 *
 * Return: integer result
 */


int is_prime_number(int n)
{
	/* Call the helper function with i = 2 */
	return (is_prime_number_helper(n, 2));
}
