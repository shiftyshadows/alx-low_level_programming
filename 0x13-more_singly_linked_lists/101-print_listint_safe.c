#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 *
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
/* Declaration of Variables */
	size_t num = 0;
	long int diff;

/* Code Statements */
	while (head)
	{
		diff = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num);
}
