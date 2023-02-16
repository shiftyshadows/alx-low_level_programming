#include <stdio.h>

/**
 * main - Entry Point
 * Return: Should return 0
 */

int main(void)
{
/* Declaration of variables */

	char acharacter;
	int ainteger;
	long along;
	long long alonglong;
	float afloat;

/* Displays the string inside quotations */
	printf("Size of a char: %lu byte(s)", sizeof(acharacter));
	printf("Size of a int: %lu byte(s)", sizeof(ainteger));
	printf("Size of a long int: %lu byte(s)", sizeof(along));
	printf("Size of a long long: %lu byte(s)"), sizeof(alonglong);
	printf("Size of a float: %lu byte(s)"), sizeof(afloat);

	return (0);
}
