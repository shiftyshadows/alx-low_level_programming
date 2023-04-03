#include <stddef.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the head node of the list
 *
 * Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
/* Declaration of Variables*/
	size_t count = 0;

/* Code Statements */
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
