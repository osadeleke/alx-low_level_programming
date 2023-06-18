#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: pointer to list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
