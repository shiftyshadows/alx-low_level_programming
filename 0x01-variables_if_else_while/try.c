#include <stdio.h>

/**
 *main - Entry Point (Prints all possible different combinations of 3 digits)
 *Return: Always(0) - Success.
 */


int main(void)
{
/*Declaration of varialbles*/
	char h = '0', t = '1', u = '2';

/*Code Logic*/
	while ((h <= '7') || (t <= '8') || (u <= '9'))
	{
		printf("%c%c%c, ", h, t, u);
		u != '9' ? ++u : (t != '8' ? (++t, u = t + 1) : (++h, t = h + 1, u = t + 1));
	}
	putchar('\n');
	return (0);
}
