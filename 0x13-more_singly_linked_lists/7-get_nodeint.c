#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: pointer to the head of the list
 * @index: index of the node to retrieve (starting at 0)
 *
 * Return: pointer to the nth node, or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
/* Declaration of Variables */
	unsigned int i;
	listint_t *current = head;

/* Code Statements */
	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	return (current);
}

