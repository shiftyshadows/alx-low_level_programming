#include <stdio.h>

/**
 *main - Entry Point (Prints the lowercase alphabet in reverse,
 *followed by a new line)
 *
 *Return: Always(0) - Success.
 */

int main(void)
{
/*Declaration of variables*/
	char letter;

/*Code Logic*/
	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
