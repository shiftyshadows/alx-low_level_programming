#include <stdio.h>

/**
 * main - Entry Point (Print the alphabet in lowercase letters,
 * except for e and q)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
/*Declaration of variables*/
	char letter;

/*Code Logic*/
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
