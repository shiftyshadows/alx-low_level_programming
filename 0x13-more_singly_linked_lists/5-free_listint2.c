#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: pointer to a pointer to the head node of the list
 */

void free_listint2(listint_t **head)
{
/* Declaration of Variables */
	listint_t *current;

/* Code Statements */
	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}

