#include <stdio.h>

/**
 *main - Entry Point (Prints all single digit numbers of base 10
 *starting from 0, followed by a new line)
 *
 *Return: Always(0) - Success.
 */

int main(void)
{
/*Declaration of variables*/
	int digit;

/*Code Logic*/
	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');
	}
	putchar('\n');


	return (0);
}
