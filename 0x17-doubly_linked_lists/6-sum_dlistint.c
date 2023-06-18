#include "lists.h"

/**
 * sum_dlistint - sum of all the data(n) of a linked list
 * @head: pointer to head of list
 * Return: sum of all data or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	current = head;
	while (current)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
