#include <stdio.h>

/**
 *main - Entry Point (Prints all the numbers of base 16 in lowercase,
 *followed by a new line)
 *
 *Return: Always(0) - Success.
 */

int main(void)
{
/*Declaration of variables*/
	char digit;

/*Code Logic*/
	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}

	for (digit = 'a'; digit <= 'f'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');

	return (0);
}
