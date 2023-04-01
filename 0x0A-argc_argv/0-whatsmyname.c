#include <stdio.h>
#include <stdlib.h>


/**
 * main - program that prints out it own name
 *
 * @argc: number of arguments passed to main function
 * @argv: array of pointer to arguments passed to main function
 *
 * Return: 0 (Success)
 */

int main(int __attribute__((unused))argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
