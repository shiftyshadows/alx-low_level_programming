#include "main.h"

/**
 * *leet - swaps the values of two integers
 *
 * @str: string to be encoded into leet
 * Return: leet encoded string
 */

char *leet(char *str)
{
/*Declaration of variables*/
	int i;
	int j;
	int k;

	char l[] = "oOlLeEaAtT";
	char e[] = "0011334477";

/*Code Logic*/
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		k = 0;
		while (l[j] != '\0')
		{
			if (str[i] == l[j])
			{
				k = j;
				str[i] = e[k];
			}
			j++;
		}
		i++;
	}
	return (str);
}
