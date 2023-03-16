#include "main.h"

/**
 * malloc_checked -  function that allocates memory using malloc
 *
 * @b: number of byte to be allocated
 * Return: pointer to memory allocated
 */

void *malloc_checked(unsigned int b)
{
/* Declaration of variables */
	void *p = malloc(b);

/* Code Statements */
	if (p == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(98);
	}
	return (p);
}


