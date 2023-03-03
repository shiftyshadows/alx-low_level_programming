#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * @void: void
 * Return: 0 Success
 */



int main(void)
{
/*Declaration of variables*/
	int i, j;

/*Code Statements*/
	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			if (j != i)
			/*Don't print comma and space after the last combination*/
			{
				putchar(i / 10 + 48);
				putchar(i % 10 + 48);
				putchar(' ');
				putchar(j / 10 + 48);
				putchar(j % 10 + 48);

				if (i * 100 + j != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

