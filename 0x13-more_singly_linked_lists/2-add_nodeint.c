#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to a pointer to the head node of the list
 * @n: integer value to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
/* Declaration of Variables */
	listint_t *new_node = malloc(sizeof(listint_t));

/* Code Statements */
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
