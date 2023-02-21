#include <stdio.h>

/**
 * main - Entry point (Prints the alphabet in lowercase, followed
 * by a new line)
 *
 * Return: Always (0) - Success
 */

int main(void)
{
/*Declaration of variables*/
	char c;

/*Code Logic*/
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		putchar('\n');
	}
	return (0);
}
