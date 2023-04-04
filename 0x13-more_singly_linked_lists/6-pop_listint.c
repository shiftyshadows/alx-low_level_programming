#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns its data
 *
 * @head: pointer to pointer to head node of list
 *
 * Return: data stored in deleted node, or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
/* Declaration of Variables */
	int data;
	listint_t *temp;

/* Code Statements */
	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
