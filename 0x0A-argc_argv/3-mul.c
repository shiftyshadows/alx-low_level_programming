#include <stdio.h>
#include <stdlib.h>


/**
 * main - program that multiplies two numbers.
 *
 * @argc: number of arguments passed to main function
 * @argv: array of pointer to arguments passed to main function
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
/* Declaration of Variables */
	int p;

/* Code Statements */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	p = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", p);
	return (0);
}
