#include "lists.h"

/**
 * sum_dlistint - sums all of the data of a dlistint_t linked list
 *
 * @head: pointer to the beginning of the linked list
 *
 * Return: sum of all data, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{/* Declaration of variables */
	int sum = 0;

/* Code Statements */
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
