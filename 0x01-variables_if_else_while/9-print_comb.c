#include <stdio.h>

/**
 *main - Entry Point (Prints all possible combinations of single-digit numbers)
 *Return: Always(0) - Success.
 */

int main(void)
{
/*Declaration of variables*/
	int number;

/*Code Logic*/
	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
		if (number < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
	return (0);
}
