#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size:  size - in bytes - of the allocated space for ptr
 * @new_size: new size - in bytes - of the new memory block
 *
 * Return: Concatenated string
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
/* Declaration of variables */
	void *new_ptr;

/* Code Statements */
	if (new_size == 0)
	{
		/* equivalent to free */
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		/* Equivalent to malloc */
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		/* Do nothing */
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		/* allocation failed */
		return (NULL);
	}
	if (new_size < old_size)
	{
		/* copy up to new size */
		memcpy(new_ptr, ptr, new_size);
	}
	else
	{
		/* Copy up to old size */
		memcpy(new_ptr, ptr, old_size);
	}
	free(ptr);
	return (new_ptr);
}
