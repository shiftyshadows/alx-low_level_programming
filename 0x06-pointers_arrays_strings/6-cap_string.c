#include "main.h"

/**
 * cap_string - function that capitalizes all
 * words of a string
 *
 * @str: string to be capitalized
 * Return: Capitalized string
 *
 */

char *cap_string(char *str)
{
/*Declaration of variables*/
	int i = 0;

	while (str[i] != '\0')
	{
	/*Check if the current character is a separator*/
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			i++;
			continue;
		}

		/*Capitalize the first letter of the current word*/
		if (i == 0 ||
			str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
			str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
			str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
			str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
			str[i - 1] == '}')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - ('a' - 'A');
			}
		}

		i++;
	}
	return (str);
}
