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

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
/* Declaration of Variables */
	const listint_t *tortoise = head, *hare = head;
	size_t count = 0;

/* Code Statements */
	while (hare && hare->next)
	{
		hare = hare->next->next;
		tortoise = tortoise->next;
		count++;
		if (hare == tortoise)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
			break;
		}
	}

	while (head && count)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count--;
	}
	if (!count)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}
	}
	return (count);
}

