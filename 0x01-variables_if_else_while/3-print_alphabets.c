#include <stdio.h>

/**
 *main - Entry Point (Prints the alphabet)
 *Return: Always(0) - Success.
 */

int main(void)
{
/*Declaration of variables*/
	char ch;

/*Code Logic*/
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
