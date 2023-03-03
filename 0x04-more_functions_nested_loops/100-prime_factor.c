#include <stdio.h>
#include <math.h>

/**
 * main - program that finds and prints the
 * largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
/*Declaration of variables*/
	long n = 612852475143;
	long factor = 2;
	long last_factor = 1;

/*Code Statements*/
	while (n > 1)
	{
		if (n % factor == 0)
		{
			last_factor = factor;
			n /= factor;
			while (n % factor == 0)
			{
				n /= factor;
			}
		}
		factor++;
		if (factor * factor > n)
		{
			if (n > 1)
			{
				last_factor = n;
			}
			break;
		}
	}
	printf("%ld\n", last_factor);
	return (0);
}

