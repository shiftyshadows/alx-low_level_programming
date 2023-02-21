#include <stdio.h>

/**
 *main - Entry Point (Print combinations of two digit numbers)
 *Return: Always(0) - Success.
 */

int main(void)
{
/*Declaration of variables*/
	int tens;
	int ones;

/*Code Logic*/
	for (tens = 0; tens <= 9; tens++)
	{
		for (ones = tens + 1; ones <= 9; ones++)
		{
			putchar(tens + '0');
			putchar(ones + '0');

			if (tens < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
