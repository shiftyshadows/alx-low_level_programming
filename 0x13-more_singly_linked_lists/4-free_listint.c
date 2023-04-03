#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head node of the list
 */

void free_listint(listint_t *head)
{
/* Declaration of Variables */
	listint_t *current;

/* Code Statements */
	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

