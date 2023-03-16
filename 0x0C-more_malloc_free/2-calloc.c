#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array,
 * using malloc.
 *
 * @nmemb: number of elements in array
 * @size: byte size of each element
 *
 * Return: Pointer to the allocated memory.
 */



void *_calloc(unsigned int nmemb, unsigned int size)
{
/* Declaration of variables */
	void *ptr;

/* Code Statements */
	if (nmemb == 0 || size == 0)
	{
		return (NULL); /* Return NULL if nmemb or size is 0 */
	}

	ptr = malloc(nmemb * size); /* Allocate memory using malloc */
	if (ptr == NULL)
	{
		return (NULL); /* Return NULL if malloc fails */
	}

	/* Set memory to zero using memset */
	memset(ptr, 0, nmemb * size);

	return (ptr); /* Return pointer to allocated memory */
}
