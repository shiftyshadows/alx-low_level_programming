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
int i;

/*Flag to track if the previous character is a separator*/
int sep = 1;

/*Code Logic*/
/*Capitalize the first letter of the string*/
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	for (i = 1; str[i] != '\0'; i++)
	{
/*Capitalize the first letter of each word*/
		if (sep && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
/* Convert any other uppercase letters to lowercase*/
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
/* Set the flag to track separators*/
		sep =	(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}');
	}
	return (str);
}
