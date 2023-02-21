#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry Point (Prints whether a number is positive or negative)
 *Return: Always(0) - Success.
 */

int main(void)
{
/*Declaration of variables*/
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
