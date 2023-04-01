#include <stdio.h>
#include <stdlib.h>


/**
 * main - program that displays arguments passed to program
 *
 * @argc: number of arguments passed to main function
 * @argv: array of pointer to arguments passed to main function
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
/* Declaration of Variables */
	int i, sum = 0;

/* Code Statements */
	printf("argc = %d\n", argc);
	printf("Let's see whats in argv[]\n");
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("argv[%d] = %s\n", i, argv[i]);
			sum += atoi(argv[i]);
		}
		printf("Total = %d\n", sum);
	}
	return (0);
}
