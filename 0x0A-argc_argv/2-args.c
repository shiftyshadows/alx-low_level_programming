#include <stdio.h>
#include <stdlib.h>


/**
 * main - program that prints all arguments it receives.
 *
 * @argc: number of arguments passed to main function
 * @argv: array of pointer to arguments passed to main function
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{

	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
