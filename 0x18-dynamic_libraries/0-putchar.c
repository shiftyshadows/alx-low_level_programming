#include <stdio.h>

/**
 *main - Entry Point
 *Return: Always(0) - Success.
 */

int main(void)
{
/*Declaration of variables*/
	char abe[] = "_putchar";
	int c;

/*Code Logic*/
	for (c = 0; c < 8; c++)
	{
		putchar(abe[c]);
	}
	putchar('\n');
	return (0);
}
