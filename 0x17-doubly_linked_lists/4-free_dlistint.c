#include "lists.h"

/**
 * free_dlistint - Free list
 *
 * @head: struct
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{/* Declaration of Variables */
	dlistint_t *list;

/* Code Statements */
	while (head)
	{
		list = head;
		head = head->next;
		free(list);
	}
}

