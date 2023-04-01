#include <stdio.h>
#include <stdlib.h>


/**
 * main - program that prints number of arguments passed to it.
 *
 * @argc: number of arguments passed to main function
 * @argv: array of pointer to arguments passed to main function
 *
 * Return: 0 (Success)
 */

int main(int argc, char __attribute__((unused))*argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
