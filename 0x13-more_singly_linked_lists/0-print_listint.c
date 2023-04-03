#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
/* Declaration of Variables */
	size_t node_count = 0;

/* Code Statements */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}

