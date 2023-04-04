#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers and print result.
 *
 * @argc: number of arguments passed to main function
 * @argv: array of pointer to arguments passed to main function
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *str;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		str = argv[i];
		while (*str)
		{
			if (!isdigit(*str))
			{
				printf("Error\n");
				return (1);
			}
			str++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
